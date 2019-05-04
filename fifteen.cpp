#include "fifteen.h"
#include "ui_fifteen.h"

Fifteen::Fifteen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fifteen)
{
    ui->setupUi(this);
    MyFont.setPointSize(20);
    move_count = 0;

    ui->btnSizeBox->setMinimum(50);
    ui->btnSizeBox->setMaximum(170);
    ui->layoutSizeBox->setMinimum(0);
    ui->layoutSizeBox->setMaximum(15);

    vec_btn = {ui->btn1, ui->btn2, ui->btn3, ui->btn4, ui->btn5,
               ui->btn6, ui->btn7, ui->btn8, ui->btn9, ui->btn10,
               ui->btn11, ui->btn12, ui->btn13, ui->btn14, ui->btn15};
    vec_num = {"1", "2", "3", "4", "5", "6", "7", "8",
               "9", "10", "11", "12", "13", "14", "15"};

    vec_icon.push_back(QIcon(":/btn_icon/image/btn_1_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_2_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_3_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_4_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_5_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_6_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_7_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_8_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_9_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_10_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_11_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_12_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_13_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_14_icon.png"));
    vec_icon.push_back(QIcon(":/btn_icon/image/btn_15_icon.png"));

    btn_width = 70;
    btn_height = 70;

    ui->gridLayout->setVerticalSpacing(5);
    ui->gridLayout->setHorizontalSpacing(5);

    ResizeElement();
    foreach (QPushButton * btn, vec_btn)
    {
        connect(btn, SIGNAL(clicked()), this, SLOT(Move()));
    }
}

Fifteen::~Fifteen()
{
    delete ui;
}

void Fifteen::ImageOnBtn()
{
    for(int i = 0; i<COUNT_BTN; i++)
    {
        vec_btn[i]->setText("");
        vec_btn[i]->setIcon(vec_icon[i]);
        vec_btn[i]->setIconSize(QSize(btn_width, btn_height));
    }
}

void Fifteen::NumberOnBtn()
{
    MyFont.setPixelSize(btn_width/3);
    for(int i = 0; i<COUNT_BTN; i++)
    {
        vec_btn[i]->setIconSize(QSize(0, 0));

        vec_btn[i]->setText(vec_num[i]);
        vec_btn[i]->setFont(MyFont);
    }
}

void Fifteen::ResizeElement()
{
    if(ui->levelBox->currentText() == "Clasical")
    {
        NumberOnBtn();
    }
    else
    {
        ImageOnBtn();
    }
    foreach (auto var, vec_btn)
    {
        var->setFixedWidth(btn_width);
        var->setFixedHeight(btn_height);
    }
    legal_coord.first = (btn_width + ui->gridLayout->verticalSpacing())*3 + ui->gridLayout->margin();
    legal_coord.second = (btn_height + ui->gridLayout->horizontalSpacing())*3 + ui->gridLayout->margin();

    gridLayout_width = btn_width * 4 + ui->gridLayout->spacing();
    gridLayout_height = btn_height * 4 + ui->gridLayout->spacing();

    ui->controlBox->setGeometry(gridLayout_width+50, 10, 160, 200);

    this->setFixedSize(gridLayout_width + ui->controlBox->width()+70, gridLayout_height+50);
}

void Fifteen::Move()
{
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    if(((btn->x() == legal_coord.first) || (btn->y() == legal_coord.second))
            && (abs(btn->x() - legal_coord.first) <= (btn_height + ui->gridLayout->spacing()))
            && (abs(btn->y() - legal_coord.second) <= (btn_width + ui->gridLayout->spacing())))
    {
        move_count++;
        ui->count->setText(QString::number(move_count));
        int tempX = legal_coord.first;
        int tempY = legal_coord.second;
        legal_coord.first = btn->x();
        legal_coord.second = btn->y();
        btn->setGeometry(tempX, tempY, btn_width, btn_height);
    }
}

void Fifteen::on_btn_shufle_clicked()
{
    move_count = 0;
    ui->count->setText(QString::number(move_count));

    int tempXFirst;
    int tempYFirst;
    int tempXSecond;
    int tempYSecond;
    int rand_num;

    srand(time(NULL));
    for(int i = 0; i<COUNT_BTN; i++)
    {
        rand_num = rand()%COUNT_BTN;

        tempXFirst = vec_btn[i]->x();
        tempYFirst = vec_btn[i]->y();
        tempXSecond = vec_btn[rand_num]->x();
        tempYSecond = vec_btn[rand_num]->y();

        vec_btn[i]->setGeometry(tempXSecond, tempYSecond, btn_width, btn_height);
        vec_btn[rand_num]->setGeometry(tempXFirst, tempYFirst, btn_width, btn_height);
    }
    for(int i = 0; i<COUNT_BTN; i++)
    {
        if((vec_btn[i]->x() == ((btn_width + ui->gridLayout->verticalSpacing())*3 + ui->gridLayout->margin()))
                && (vec_btn[i]->y() == ((btn_height + ui->gridLayout->horizontalSpacing())*3 + ui->gridLayout->margin())))
        {
            vec_btn[i]->setGeometry(legal_coord.first,  legal_coord.second, btn_width, btn_height);
            legal_coord.first = (btn_width + ui->gridLayout->verticalSpacing())*3 + ui->gridLayout->margin();
            legal_coord.second = (btn_height + ui->gridLayout->horizontalSpacing())*3 + ui->gridLayout->margin();
        }
    }
}

void Fifteen::on_btnSizeBox_valueChanged(int arg1)
{
    btn_width = arg1;
    btn_height = arg1;
    ResizeElement();
}
void Fifteen::on_layoutSizeBox_valueChanged(int size)
{
    ui->gridLayout->setVerticalSpacing(size);
    ui->gridLayout->setHorizontalSpacing(size);
    ResizeElement();
}

void Fifteen::on_levelBox_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Clasical")
    {
        NumberOnBtn();
    }
    else
    {
        ImageOnBtn();
    }
}
