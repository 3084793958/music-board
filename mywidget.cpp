#include<mywidget.h>
#include<iostream>
using namespace std;
int getRand(int min,int max);
int getRand(int min,int max)
{
    return (rand()%(max-min+1))+min;
}
void MyWidget::Timer_dock()
{
    points_str="points:"+to_string(points_number);
    points->setText(QString::fromStdString(points_str));
    if ((not is_pause)and(not is_stop))
    {
        button_list1->move(0,button_list1->y()+int(20*xb));
        button_list2->move(0,button_list2->y()+int(20*xb));
        button_list3->move(0,button_list3->y()+int(20*xb));
        button_list4->move(0,button_list4->y()+int(20*xb));
        button_list5->move(0,button_list5->y()+int(20*xb));
        button_list6->move(0,button_list6->y()+int(20*xb));
        if (button_list1->y()>649)
        {
            button_list1->move(0,-70);
            way_1=getRand(1,4);
            if (way_1==1)
            {
                b1_1->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b1_1->setStyleSheet("background-color: none");
            }
            if (way_1==2)
            {
                b1_2->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b1_2->setStyleSheet("background-color: none");
            }
            if (way_1==3)
            {
                b1_3->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b1_3->setStyleSheet("background-color: none");
            }
            if (way_1==4)
            {
                b1_4->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b1_4->setStyleSheet("background-color: none");
            }
        }
        if (button_list2->y()>649)
        {
            button_list2->move(0,-70);
            way_2=getRand(1,4);
            if (way_2==1)
            {
                b2_1->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b2_1->setStyleSheet("background-color: none");
            }
            if (way_2==2)
            {
                b2_2->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b2_2->setStyleSheet("background-color: none");
            }
            if (way_2==3)
            {
                b2_3->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b2_3->setStyleSheet("background-color: none");
            }
            if (way_2==4)
            {
                b2_4->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b2_4->setStyleSheet("background-color: none");
            }
        }
        if (button_list3->y()>649)
        {
            button_list3->move(0,-70);
            way_3=getRand(1,4);
            if (way_3==1)
            {
                b3_1->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b3_1->setStyleSheet("background-color: none");
            }
            if (way_3==2)
            {
                b3_2->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b3_2->setStyleSheet("background-color: none");
            }
            if (way_3==3)
            {
                b3_3->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b3_3->setStyleSheet("background-color: none");
            }
            if (way_3==4)
            {
                b3_4->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b3_4->setStyleSheet("background-color: none");
            }
        }
        if (button_list4->y()>649)
        {
            button_list4->move(0,-70);
            way_4=getRand(1,4);
            if (way_4==1)
            {
                b4_1->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b4_1->setStyleSheet("background-color: none");
            }
            if (way_4==2)
            {
                b4_2->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b4_2->setStyleSheet("background-color: none");
            }
            if (way_4==3)
            {
                b4_3->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b4_3->setStyleSheet("background-color: none");
            }
            if (way_4==4)
            {
                b4_4->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b4_4->setStyleSheet("background-color: none");
            }
        }
        if (button_list5->y()>649)
        {
            button_list5->move(0,-70);
            way_5=getRand(1,4);
            if (way_5==1)
            {
                b5_1->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b5_1->setStyleSheet("background-color: none");
            }
            if (way_5==2)
            {
                b5_2->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b5_2->setStyleSheet("background-color: none");
            }
            if (way_5==3)
            {
                b5_3->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b5_3->setStyleSheet("background-color: none");
            }
            if (way_5==4)
            {
                b5_4->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b5_4->setStyleSheet("background-color: none");
            }
        }
        if (button_list6->y()>649)
        {
            button_list6->move(0,-70);
            way_6=getRand(1,4);
            if (way_6==1)
            {
                b6_1->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b6_1->setStyleSheet("background-color: none");
            }
            if (way_6==2)
            {
                b6_2->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b6_2->setStyleSheet("background-color: none");
            }
            if (way_6==3)
            {
                b6_3->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b6_3->setStyleSheet("background-color: none");
            }
            if (way_6==4)
            {
                b6_4->setStyleSheet("background-color: rgb(11,45,14)");
            }
            else
            {
                b6_4->setStyleSheet("background-color: none");
            }
        }
    }
}
void MyWidget::x1_event()
{
    x1->setStyleSheet("background-color: rgb(0,255,255)");
    x2->setStyleSheet("background-color: none");
    x3->setStyleSheet("background-color: none");
    xb=0.5;
}
void MyWidget::x2_event()
{
    x2->setStyleSheet("background-color: rgb(0,255,255)");
    x1->setStyleSheet("background-color: none");
    x3->setStyleSheet("background-color: none");
    xb=1;
}
void MyWidget::x3_event()
{
    x3->setStyleSheet("background-color: rgb(0,255,255)");
    x2->setStyleSheet("background-color: none");
    x1->setStyleSheet("background-color: none");
    xb=2;
}
void MyWidget::start_b()
{
    start_button->setStyleSheet("background-color: rgb(0,255,255)");
    pause_button->setStyleSheet("background-color: none");
    stop_button->setStyleSheet("background-color: none");
    play_main->play();
    is_pause=false;
    is_stop=false;
}
void MyWidget::pause_b()
{
    if (not is_stop){
    pause_button->setStyleSheet("background-color: rgb(0,255,255)");
    start_button->setStyleSheet("background-color: none");
    stop_button->setStyleSheet("background-color: none");
    play_main->pause();
    is_pause=true;
    }
}
void MyWidget::stop_b()
{
    is_stop=true;
    stop_button->setStyleSheet("background-color: rgb(0,255,255)");
    pause_button->setStyleSheet("background-color: none");
    start_button->setStyleSheet("background-color: none");
    play_main->stop();
    button_list1->move(0,50);
    button_list2->move(0,170);
    button_list3->move(0,290);
    button_list4->move(0,410);
    button_list5->move(0,530);
    button_list6->move(0,-70);
    b1_1->setStyleSheet("background-color: none");
    b1_2->setStyleSheet("background-color: none");
    b1_3->setStyleSheet("background-color: none");
    b1_4->setStyleSheet("background-color: none");
    b2_1->setStyleSheet("background-color: none");
    b2_2->setStyleSheet("background-color: none");
    b2_3->setStyleSheet("background-color: none");
    b2_4->setStyleSheet("background-color: none");
    b3_1->setStyleSheet("background-color: none");
    b3_2->setStyleSheet("background-color: none");
    b3_3->setStyleSheet("background-color: none");
    b3_4->setStyleSheet("background-color: none");
    b4_1->setStyleSheet("background-color: none");
    b4_2->setStyleSheet("background-color: none");
    b4_3->setStyleSheet("background-color: none");
    b4_4->setStyleSheet("background-color: none");
    b5_1->setStyleSheet("background-color: none");
    b5_2->setStyleSheet("background-color: none");
    b5_3->setStyleSheet("background-color: none");
    b5_4->setStyleSheet("background-color: none");
    b6_1->setStyleSheet("background-color: none");
    b6_2->setStyleSheet("background-color: none");
    b6_3->setStyleSheet("background-color: none");
    b6_4->setStyleSheet("background-color: none");
}
void MyWidget::goback()
{
    is_stop=true;
    points_number=0;
    play_main->stop();
    button_list1->move(0,50);
    button_list2->move(0,170);
    button_list3->move(0,290);
    button_list4->move(0,410);
    button_list5->move(0,530);
    button_list6->move(0,-70);
    stop_b();
    is_pause=true;
}
void MyWidget::choose_points()
{
    if ((not is_pause)and(not is_stop))
    {
    play_g->stop();
    play_gm->stop();
    if (button_x==1)
    {
        if (button_y==way_1)
        {
            play_g->play();
            points_number++;
            play_main->setVolume(100);
            if (way_1==1)
                b1_1->setStyleSheet("background-color: none");
            if (way_1==2)
                b1_2->setStyleSheet("background-color: none");
            if (way_1==3)
                b1_3->setStyleSheet("background-color: none");
            if (way_1==4)
                b1_4->setStyleSheet("background-color: none");
            way_1=0;
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if (button_x==2)
    {
        if (button_y==way_2)
        {
            play_g->play();
            points_number++;
            play_main->setVolume(100);
            if (way_2==1)
                b2_1->setStyleSheet("background-color: none");
            if (way_2==2)
                b2_2->setStyleSheet("background-color: none");
            if (way_2==3)
                b2_3->setStyleSheet("background-color: none");
            if (way_2==4)
                b2_4->setStyleSheet("background-color: none");
            way_2=0;
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if (button_x==3)
    {
        if (button_y==way_3)
        {
            play_g->play();
            points_number++;
            play_main->setVolume(100);
            if (way_3==1)
                b3_1->setStyleSheet("background-color: none");
            if (way_3==2)
                b3_2->setStyleSheet("background-color: none");
            if (way_3==3)
                b3_3->setStyleSheet("background-color: none");
            if (way_3==4)
                b3_4->setStyleSheet("background-color: none");
            way_3=0;
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if (button_x==4)
    {
        if (button_y==way_4)
        {
            play_g->play();
            points_number++;
            play_main->setVolume(100);
            if (way_4==1)
                b4_1->setStyleSheet("background-color: none");
            if (way_4==2)
                b4_2->setStyleSheet("background-color: none");
            if (way_4==3)
                b4_3->setStyleSheet("background-color: none");
            if (way_4==4)
                b4_4->setStyleSheet("background-color: none");
            way_4=0;
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if (button_x==5)
    {
        if (button_y==way_5)
        {
            play_g->play();
            points_number++;
            play_main->setVolume(100);
            if (way_5==1)
                b5_1->setStyleSheet("background-color: none");
            if (way_5==2)
                b5_2->setStyleSheet("background-color: none");
            if (way_5==3)
                b5_3->setStyleSheet("background-color: none");
            if (way_5==4)
                b5_4->setStyleSheet("background-color: none");
            way_5=0;
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if (button_x==6)
    {
        if (button_y==way_6)
        {
            play_g->play();
            points_number++;
            play_main->setVolume(100);
            if (way_6==1)
                b6_1->setStyleSheet("background-color: none");
            if (way_6==2)
                b6_2->setStyleSheet("background-color: none");
            if (way_6==3)
                b6_3->setStyleSheet("background-color: none");
            if (way_6==4)
                b6_4->setStyleSheet("background-color: none");
            way_6=0;
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    }
}
void MyWidget::b_11()
{
    button_x=1;
    button_y=1;
    choose_points();
}
void MyWidget::b_12()
{
    button_x=1;
    button_y=2;
    choose_points();
}
void MyWidget::b_13()
{
    button_x=1;
    button_y=3;
    choose_points();
}
void MyWidget::b_14()
{
    button_x=1;
    button_y=4;
    choose_points();
}
void MyWidget::b_21()
{
    button_x=2;
    button_y=1;
    choose_points();
}
void MyWidget::b_22()
{
    button_x=2;
    button_y=2;
    choose_points();
}
void MyWidget::b_23()
{
    button_x=2;
    button_y=3;
    choose_points();
}
void MyWidget::b_24()
{
    button_x=2;
    button_y=4;
    choose_points();
}
void MyWidget::b_31()
{
    button_x=3;
    button_y=1;
    choose_points();
}
void MyWidget::b_32()
{
    button_x=3;
    button_y=2;
    choose_points();
}
void MyWidget::b_33()
{
    button_x=3;
    button_y=3;
    choose_points();
}
void MyWidget::b_34()
{
    button_x=3;
    button_y=4;
    choose_points();
}
void MyWidget::b_41()
{
    button_x=4;
    button_y=1;
    choose_points();
}
void MyWidget::b_42()
{
    button_x=4;
    button_y=2;
    choose_points();
}
void MyWidget::b_43()
{
    button_x=4;
    button_y=3;
    choose_points();
}
void MyWidget::b_44()
{
    button_x=4;
    button_y=4;
    choose_points();
}
void MyWidget::b_51()
{
    button_x=5;
    button_y=1;
    choose_points();
}
void MyWidget::b_52()
{
    button_x=5;
    button_y=2;
    choose_points();
}
void MyWidget::b_53()
{
    button_x=5;
    button_y=3;
    choose_points();
}
void MyWidget::b_54()
{
    button_x=5;
    button_y=4;
    choose_points();
}
void MyWidget::b_61()
{
    button_x=6;
    button_y=1;
    choose_points();
}
void MyWidget::b_62()
{
    button_x=6;
    button_y=2;
    choose_points();
}
void MyWidget::b_63()
{
    button_x=6;
    button_y=3;
    choose_points();
}
void MyWidget::b_64()
{
    button_x=6;
    button_y=4;
    choose_points();
}
void MyWidget::Music_timer()
{
    play_main->setVolume(50);
}
MyWidget::MyWidget(QWidget *parent)
    :QWidget(parent)
{
    play_g->setMedia(QUrl::fromLocalFile(QDir::current().absoluteFilePath("files/sound/G.ogg")));
    play_gm->setMedia(QUrl::fromLocalFile(QDir::current().absoluteFilePath("files/sound/ngm.ogg")));
    setAcceptDrops(true);
    setWindowIcon(QIcon("files/image/github_timer.gif"));
    timer->setInterval(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(Timer_dock()));
    music_timer->setInterval(1000);
    connect(music_timer,SIGNAL(timeout()),this,SLOT(Music_timer()));
    setWindowFlags(Qt::WindowMinimizeButtonHint|Qt::WindowCloseButtonHint);
    resize(400,700);
    points->resize(100,50);
    points->setText(QString::fromStdString(points_str));
    points->setStyleSheet("font-size:15px");
    x1->resize(100,50);
    x1->setText("0.5x");
    x1->setStyleSheet("font-size:15px");
    x1->move(100,0);
    x2->resize(100,50);
    x2->setText("1.0x");
    x2->setStyleSheet("font-size:15px;background-color: rgb(0,255,255)");
    x2->move(200,0);
    x3->resize(100,50);
    x3->setText("2.0x");
    x3->setStyleSheet("font-size:15px");
    x3->move(300,0);
    start_button->resize(100,50);
    start_button->setText("start");
    start_button->setStyleSheet("font-size:15px");
    start_button->move(0,650);
    pause_button->resize(100,50);
    pause_button->setText("pause");
    pause_button->setStyleSheet("font-size:15px");
    pause_button->move(100,650);
    stop_button->resize(100,50);
    stop_button->setText("stop");
    stop_button->setStyleSheet("font-size:15px;background-color: rgb(0,255,255)");
    stop_button->move(200,650);
    go_back->resize(100,50);
    go_back->setText("go_back");
    go_back->setStyleSheet("font-size:15px");
    go_back->move(300,650);
    button_list1->move(0,50);
    button_list2->move(0,170);
    button_list3->move(0,290);
    button_list4->move(0,410);
    button_list5->move(0,530);
    button_list6->move(0,-70);
    button_list1->lower();
    button_list2->lower();
    button_list3->lower();
    button_list4->lower();
    button_list5->lower();
    button_list6->lower();
    button_list1->resize(400,120);
    button_list2->resize(400,120);
    button_list3->resize(400,120);
    button_list4->resize(400,120);
    button_list5->resize(400,120);
    button_list6->resize(400,120);
    b1_1->resize(100,120);
    b1_2->resize(100,120);
    b1_3->resize(100,120);
    b1_4->resize(100,120);
    b2_1->resize(100,120);
    b2_2->resize(100,120);
    b2_3->resize(100,120);
    b2_4->resize(100,120);
    b3_1->resize(100,120);
    b3_2->resize(100,120);
    b3_3->resize(100,120);
    b3_4->resize(100,120);
    b4_1->resize(100,120);
    b4_2->resize(100,120);
    b4_3->resize(100,120);
    b4_4->resize(100,120);
    b5_1->resize(100,120);
    b5_2->resize(100,120);
    b5_3->resize(100,120);
    b5_4->resize(100,120);
    b6_1->resize(100,120);
    b6_2->resize(100,120);
    b6_3->resize(100,120);
    b6_4->resize(100,120);
    b1_2->move(100,0);
    b1_3->move(200,0);
    b1_4->move(300,0);
    b2_2->move(100,0);
    b2_3->move(200,0);
    b2_4->move(300,0);
    b3_2->move(100,0);
    b3_3->move(200,0);
    b3_4->move(300,0);
    b4_2->move(100,0);
    b4_3->move(200,0);
    b4_4->move(300,0);
    b5_2->move(100,0);
    b5_3->move(200,0);
    b5_4->move(300,0);
    b6_2->move(100,0);
    b6_3->move(200,0);
    b6_4->move(300,0);
    connect(x1,SIGNAL(clicked()),this,SLOT(x1_event()));
    connect(x2,SIGNAL(clicked()),this,SLOT(x2_event()));
    connect(x3,SIGNAL(clicked()),this,SLOT(x3_event()));
    connect(start_button,SIGNAL(clicked()),this,SLOT(start_b()));
    connect(pause_button,SIGNAL(clicked()),this,SLOT(pause_b()));
    connect(stop_button,SIGNAL(clicked()),this,SLOT(stop_b()));
    connect(go_back,SIGNAL(clicked()),this,SLOT(goback()));
    connect(b1_1,SIGNAL(clicked()),this,SLOT(b_11()));
    connect(b1_2,SIGNAL(clicked()),this,SLOT(b_12()));
    connect(b1_3,SIGNAL(clicked()),this,SLOT(b_13()));
    connect(b1_4,SIGNAL(clicked()),this,SLOT(b_14()));
    connect(b2_1,SIGNAL(clicked()),this,SLOT(b_21()));
    connect(b2_2,SIGNAL(clicked()),this,SLOT(b_22()));
    connect(b2_3,SIGNAL(clicked()),this,SLOT(b_23()));
    connect(b2_4,SIGNAL(clicked()),this,SLOT(b_24()));
    connect(b3_1,SIGNAL(clicked()),this,SLOT(b_31()));
    connect(b3_2,SIGNAL(clicked()),this,SLOT(b_32()));
    connect(b3_3,SIGNAL(clicked()),this,SLOT(b_33()));
    connect(b3_4,SIGNAL(clicked()),this,SLOT(b_34()));
    connect(b4_1,SIGNAL(clicked()),this,SLOT(b_41()));
    connect(b4_2,SIGNAL(clicked()),this,SLOT(b_42()));
    connect(b4_3,SIGNAL(clicked()),this,SLOT(b_43()));
    connect(b4_4,SIGNAL(clicked()),this,SLOT(b_44()));
    connect(b5_1,SIGNAL(clicked()),this,SLOT(b_51()));
    connect(b5_2,SIGNAL(clicked()),this,SLOT(b_52()));
    connect(b5_3,SIGNAL(clicked()),this,SLOT(b_53()));
    connect(b5_4,SIGNAL(clicked()),this,SLOT(b_54()));
    connect(b6_1,SIGNAL(clicked()),this,SLOT(b_61()));
    connect(b6_2,SIGNAL(clicked()),this,SLOT(b_62()));
    connect(b6_3,SIGNAL(clicked()),this,SLOT(b_63()));
    connect(b6_4,SIGNAL(clicked()),this,SLOT(b_64()));
    connect(play_main,&QMediaPlayer::stateChanged,[=]()
    {
            switch(play_main->state())
            {
            case QMediaPlayer::StoppedState:
            {
                stop_b();
                break;
            }
            case QMediaPlayer::PlayingState:
            {
                ;
            }
            case QMediaPlayer::PausedState:
            {
                ;
            }
            }
    });
    timer->start();
    show();
}
void MyWidget::dragEnterEvent(QDragEnterEvent*event)
{
    event->acceptProposedAction();
}
void MyWidget::dropEvent(QDropEvent*event)
{
    const QMimeData*qm=event->mimeData();
    mime=db.mimeTypeForFile(qm->urls()[0].toLocalFile());
    if (mime.name().startsWith("audio/"))
    {
        play_main->stop();
        play_main->setMedia(QUrl::fromLocalFile(QDir::current().absoluteFilePath(qm->urls()[0].toLocalFile())));
    }
}
void MyWidget::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_1)
    {
        if ((way_1==1)or(way_2==1)or(way_3==1)or(way_4==1)or(way_5==1)or(way_6==1))
        {
            button_y=1;
            while (true)
            {
                if (way_1==1)
                {
                    button_x=1;
                    break;
                }
                if (way_2==1)
                {
                    button_x=2;
                    break;
                }
                if (way_3==1)
                {
                    button_x=3;
                    break;
                }
                if (way_4==1)
                {
                    button_x=4;
                    break;
                }
                if (way_5==1)
                {
                    button_x=5;
                    break;
                }
                if (way_6==1)
                {
                    button_x=6;
                    break;
                }
            }
            choose_points();
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if(event->key()==Qt::Key_2)
    {
        if ((way_1==2)or(way_2==2)or(way_3==2)or(way_4==2)or(way_5==2)or(way_6==2))
        {
            button_y=2;
            while (true)
            {
                if (way_1==2)
                {
                    button_x=1;
                    break;
                }
                if (way_2==2)
                {
                    button_x=2;
                    break;
                }
                if (way_3==2)
                {
                    button_x=3;
                    break;
                }
                if (way_4==2)
                {
                    button_x=4;
                    break;
                }
                if (way_5==2)
                {
                    button_x=5;
                    break;
                }
                if (way_6==2)
                {
                    button_x=6;
                    break;
                }
            }
            choose_points();
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if(event->key()==Qt::Key_3)
    {
        if ((way_1==3)or(way_2==3)or(way_3==3)or(way_4==3)or(way_5==3)or(way_6==3))
        {
            button_y=3;
            while (true)
            {
                if (way_1==3)
                {
                    button_x=1;
                    break;
                }
                if (way_2==3)
                {
                    button_x=2;
                    break;
                }
                if (way_3==3)
                {
                    button_x=3;
                    break;
                }
                if (way_4==3)
                {
                    button_x=4;
                    break;
                }
                if (way_5==3)
                {
                    button_x=5;
                    break;
                }
                if (way_6==3)
                {
                    button_x=6;
                    break;
                }
            }
            choose_points();
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
    if(event->key()==Qt::Key_4)
    {
        if ((way_1==4)or(way_2==4)or(way_3==4)or(way_4==4)or(way_5==4)or(way_6==4))
        {
            button_y=4;
            while (true)
            {
                if (way_1==4)
                {
                    button_x=1;
                    break;
                }
                if (way_2==4)
                {
                    button_x=2;
                    break;
                }
                if (way_3==4)
                {
                    button_x=3;
                    break;
                }
                if (way_4==4)
                {
                    button_x=4;
                    break;
                }
                if (way_5==4)
                {
                    button_x=5;
                    break;
                }
                if (way_6==4)
                {
                    button_x=6;
                    break;
                }
            }
            choose_points();
        }
        else
        {
            play_gm->play();
            points_number--;
        }
    }
}
