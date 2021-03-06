#include "fifteen.h"
#include "ui_fifteen.h"

Fifteen::Fifteen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fifteen)
{
    ui->setupUi(this);

    MyFont.setPointSize(20);
    move_count = 0;
    btn_width = 90;
    btn_height = 90;

    ui->btnSizeBox->setMinimum(70);
    ui->btnSizeBox->setMaximum(170);
    ui->layoutSizeBox->setMinimum(0);
    ui->layoutSizeBox->setMaximum(15);
    ui->gridLayout->setVerticalSpacing(5);
    ui->gridLayout->setHorizontalSpacing(5);

    vec_btn = {ui->btn1, ui->btn2, ui->btn3, ui->btn4, ui->btn5,
               ui->btn6, ui->btn7, ui->btn8, ui->btn9, ui->btn10,
               ui->btn11, ui->btn12, ui->btn13, ui->btn14, ui->btn15};
    vec_num = {"1", "2", "3", "4", "5", "6", "7", "8",
               "9", "10", "11", "12", "13", "14", "15"};

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

void Fifteen::CurrentImage()
{
    num_rows = sqrt((vec_btn.size())+1);
    img_width = original.width();
    img_height = original.height();
    if(img_width < img_height)
    {
        step = img_width/num_rows;
    }
    else
    {
        step = img_height/num_rows;
    }
    max_width = step * (num_rows - 1);

    for(int i = 0; i<=max_width; i+=step)
    {
        for(int j = 0; j<=max_width; j+=step)
        {
            cropped.push_back(original.copy(QRect(j, i, step, step)));
        }
    }
}

void Fifteen::ImageOnBtn()
{
    CurrentImage();
    for(int k = 0; k < vec_btn.size(); k++)
    {
        vec_btn[k]->setText("");
        vec_btn[k]->setIcon(cropped[k]);
        vec_btn[k]->setIconSize(QSize(btn_width, btn_height));
    }
}

void Fifteen::NumberOnBtn()
{
    MyFont.setPixelSize(btn_width/3);
    for(int i = 0; i < vec_btn.size(); i++)
    {
        vec_btn[i]->setIconSize(QSize(0, 0));
        vec_btn[i]->setText(vec_num[i]);
        vec_btn[i]->setFont(MyFont);
    }
}

void Fifteen::SortVecBtn()
{
    int k = 0;
    int j = 0;
    int margin = ui->gridLayout->margin();

    for (int i = 0; i < vec_btn.size(); i++)
    {
        if(j%4==0 && j!=0)
        {k++; j = 0;}

        vec_btn[i]->setGeometry((ui->gridLayout->verticalSpacing() + btn_width)*j+margin,
        (ui->gridLayout->horizontalSpacing() + btn_height)*k+margin, btn_width, btn_height);
        j++;
    }
    legal_coord.first = (btn_width + ui->gridLayout->verticalSpacing())*3 + ui->gridLayout->margin();
    legal_coord.second = (btn_height + ui->gridLayout->horizontalSpacing())*3 + ui->gridLayout->margin();
}

void Fifteen::ShuffleVecBtn()
{
    int tempXFirst;
    int tempYFirst;
    int tempXSecond;
    int tempYSecond;
    int rand_num;
    int rand_special_pos;

    srand(time(NULL));

    rand_special_pos = rand()%(vec_btn.size()-1);
    for(int i = 0; i < vec_btn.size(); i++)
    {
        if(i == rand_special_pos)
            continue;
        do
        rand_num = rand()%(vec_btn.size()-1); //the situation is solved if and only if
        while(rand_num == i);                 //the number of permutations is a pair number

        tempXFirst = vec_btn[i]->x();
        tempYFirst = vec_btn[i]->y();
        tempXSecond = vec_btn[rand_num]->x();
        tempYSecond = vec_btn[rand_num]->y();

        vec_btn[i]->setGeometry(tempXSecond, tempYSecond, btn_width, btn_height);
        vec_btn[rand_num]->setGeometry(tempXFirst, tempYFirst, btn_width, btn_height);
    }
    for(int i = 0; i < vec_btn.size(); i++) //to keep an empty cell in the same place
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

    ui->controlBox->setGeometry(gridLayout_width+50, 10, 160, 260);

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
    SortVecBtn();
    ShuffleVecBtn();
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
    cropped.clear();
    if(arg1 == "Palm")
    {
        original = QPixmap(":/btn_icon/image/palm.png");
        ImageOnBtn();
    }
    else if(arg1 == "Cat")
    {
       original = QPixmap(":/btn_icon/image/btn_icon.png");
       ImageOnBtn();
    }
    else if(arg1 == "Rome")
    {
        original = QPixmap(":/btn_icon/image/rome.png");
        ImageOnBtn();
    }
    else if(arg1 == "Castle")
    {
        original = QPixmap(":/btn_icon/image/castle.png");
        ImageOnBtn();
    }
    else if(arg1 == "Clasical")
    {
        NumberOnBtn();
    }
}

void Fifteen::on_btnSort_clicked()
{
    move_count = 0;
    ui->count->setText(QString::number(move_count));
    SortVecBtn();
}
