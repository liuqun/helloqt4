#include <QApplication>
#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    QHBoxLayout layout;
    QLabel label;
    QLabel logo;
    QPixmap file;

    label.setText("Logo:");
    label.setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    file.load(":/images/qt-logo.png");
    logo.setPixmap(file);
    layout.addWidget(&label);
    layout.addWidget(&logo);
    window.setLayout(&layout);
    window.show();

    return app.exec();
}
