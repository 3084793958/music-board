#ifndef MYWEIGHT_H
#define MYWEIGHT_H
#include<QApplication>
#include<QtWidgets>
#include<QMediaPlayer>
#include<cstdlib>
using namespace std;
class MyWidget:public QWidget
{
    Q_OBJECT
public slots:
    void Timer_dock();
    void Music_timer();
    void x1_event();
    void x2_event();
    void x3_event();
    void start_b();
    void pause_b();
    void stop_b();
    void goback();
    void choose_points();
    void b_11();
    void b_12();
    void b_13();
    void b_14();
    void b_21();
    void b_22();
    void b_23();
    void b_24();
    void b_31();
    void b_32();
    void b_33();
    void b_34();
    void b_41();
    void b_42();
    void b_43();
    void b_44();
    void b_51();
    void b_52();
    void b_53();
    void b_54();
    void b_61();
    void b_62();
    void b_63();
    void b_64();
public:
    int points_number=0;
    int way_1;
    int way_2;
    int way_3;
    int way_4;
    int way_5;
    int way_6;
    int button_x;
    int button_y;
    bool is_stop=true;
    bool is_pause=false;
    float xb=1;
    string file_name;
    QMimeDatabase db;
    QMimeType mime;
    QMediaPlayer *play_g=new QMediaPlayer();
    QMediaPlayer *play_gm=new QMediaPlayer();
    QMediaPlayer *play_main=new QMediaPlayer();
    string points_str="points:"+to_string(0);
    QTimer *timer=new QTimer();
    QTimer *music_timer=new QTimer();
    QPushButton *points=new QPushButton(this);
    QPushButton *x1=new QPushButton(this);
    QPushButton *x2=new QPushButton(this);
    QPushButton *x3=new QPushButton(this);
    QPushButton *start_button=new QPushButton(this);
    QPushButton *pause_button=new QPushButton(this);
    QPushButton *stop_button=new QPushButton(this);
    QPushButton *go_back=new QPushButton(this);
    QLabel *button_list1=new QLabel(this);
    QLabel *button_list2=new QLabel(this);
    QLabel *button_list3=new QLabel(this);
    QLabel *button_list4=new QLabel(this);
    QLabel *button_list5=new QLabel(this);
    QLabel *button_list6=new QLabel(this);
    QPushButton *b1_1=new QPushButton(button_list1);
    QPushButton *b1_2=new QPushButton(button_list1);
    QPushButton *b1_3=new QPushButton(button_list1);
    QPushButton *b1_4=new QPushButton(button_list1);
    QPushButton *b2_1=new QPushButton(button_list2);
    QPushButton *b2_2=new QPushButton(button_list2);
    QPushButton *b2_3=new QPushButton(button_list2);
    QPushButton *b2_4=new QPushButton(button_list2);
    QPushButton *b3_1=new QPushButton(button_list3);
    QPushButton *b3_2=new QPushButton(button_list3);
    QPushButton *b3_3=new QPushButton(button_list3);
    QPushButton *b3_4=new QPushButton(button_list3);
    QPushButton *b4_1=new QPushButton(button_list4);
    QPushButton *b4_2=new QPushButton(button_list4);
    QPushButton *b4_3=new QPushButton(button_list4);
    QPushButton *b4_4=new QPushButton(button_list4);
    QPushButton *b5_1=new QPushButton(button_list5);
    QPushButton *b5_2=new QPushButton(button_list5);
    QPushButton *b5_3=new QPushButton(button_list5);
    QPushButton *b5_4=new QPushButton(button_list5);
    QPushButton *b6_1=new QPushButton(button_list6);
    QPushButton *b6_2=new QPushButton(button_list6);
    QPushButton *b6_3=new QPushButton(button_list6);
    QPushButton *b6_4=new QPushButton(button_list6);
    explicit MyWidget(QWidget *parent = nullptr);
    void dragEnterEvent(QDragEnterEvent*event);
    void dropEvent(QDropEvent*event);
    void keyPressEvent(QKeyEvent *event);
};
#endif // MYWEIGHT_H
