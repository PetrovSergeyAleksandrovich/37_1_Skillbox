#include <QApplication>
#include <QPushButton>
#include "./ui_Skillbox_37_1_lessons.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QMainWindow window(nullptr);
    Ui:Ui::MainWindow caller;
    caller.setupUi(&window);
    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
