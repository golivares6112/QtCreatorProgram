#include <QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout<<"Hello World from QT Creator"<<std::endl;
    return a.exec();
}
