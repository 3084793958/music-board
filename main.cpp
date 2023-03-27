#include<mywidget.h>
using namespace std;
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    app.setApplicationName("music_board");
    QWidget *app_main=new MyWidget();
    app_main->show();
    return app.exec();
}
