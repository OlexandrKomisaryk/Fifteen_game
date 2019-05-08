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
#include<QPixmap>
#include<cmath>

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
    QVector<QString> vec_num;
    QVector<QPixmap> cropped;
    QPair<int, int> legal_coord;
    QPixmap original;

    int btn_width;
    int btn_height;
    int gridLayout_width;
    int gridLayout_height;
    int move_count;

    int img_width;
    int img_height;
    int max_width;
    int step;
    int num_rows;

private:
    void ResizeElement();
    void NumberOnBtn();
    void ImageOnBtn();
    void CurrentImage();
    void SortVecBtn();
    void ShuffleVecBtn();

private slots:
    void Move();
    void on_btn_shufle_clicked();
    void on_btnSizeBox_valueChanged(int arg1);
    void on_layoutSizeBox_valueChanged(int size);

    void on_levelBox_currentTextChanged(const QString &arg1);
    void on_btnSort_clicked();
};

#endif // FIFTEEN_H
