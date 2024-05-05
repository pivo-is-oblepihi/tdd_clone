#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <QLabel>

using namespace std;

int exe(QApplication& app) {
    return app.exec();
}

int main(int arge, char **argv){
    cerr << "create app \n ";
    QApplication app(arge, argv);

    int result = exe(app);
    cerr << " at qpp redult: " << result << endl;
    return result;

}
