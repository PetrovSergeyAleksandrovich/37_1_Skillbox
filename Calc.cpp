#include <QApplication>
#include <QPushButton>
#include "CallerMainWindow.h"
#include "./ui_Skillbox_37_1_lessons.h"
#include "CalcMainWindow.h"
#include "cmake-build-debug/37_1_Skillbox_autogen/include/ui_Skillbox_37_1_lessons.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui::MainWindow calс;
    calс.setupUi(&window);
    window.lineEdit = calс.lineEdit;
    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
