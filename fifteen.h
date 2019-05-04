#ifndef FIFTEEN_H
#define FIFTEEN_H

#include <QMainWindow>
#include<ctime>
#include<QVector>
#include<QString>
#include<QPair>
#include<QPushButton>
#include<algorithm>
#include<QFont>
#include<QIcon>
#include<QRect>

namespace Ui {
class Fifteen;
}

class Fifteen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fifteen(QWidget *parent = nullptr);
    ~Fifteen();

private:
    Ui::Fifteen *ui;
    QFont MyFont;

    QVector<QPushButton*> vec_btn;
    QVector<QIcon> vec_icon;
    QVector<QString> vec_num;

    QPair<int, int> legal_coord;
    static const int COUNT_BTN = 15;
    int btn_width;
    int btn_height;
    int gridLayout_width;
    int gridLayout_height;
    int move_count;
private:
    void ResizeElement();
    void NumberOnBtn();
    void ImageOnBtn();

private slots:
    void Move();
    void on_btn_shufle_clicked();
    void on_btnSizeBox_valueChanged(int arg1);
    void on_layoutSizeBox_valueChanged(int size);

    void on_levelBox_currentTextChanged(const QString &arg1);
};

#endif // FIFTEEN_H
