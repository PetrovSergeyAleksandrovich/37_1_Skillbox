#include <QApplication>
#include <QPushButton>
#include "CallerMainWindow.h"
#include "./ui_Skillbox_37_1_lessons.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CallerMainWindow window(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&window);
    window.lineEdit = caller.lineEdit;
    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
