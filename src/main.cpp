#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel label(QStringLiteral("Hello, World!"));
    label.setAlignment(Qt::AlignCenter);
    label.setWindowTitle(QStringLiteral("MinusOne"));
    label.resize(320, 120);
    label.show();

    return QApplication::exec();
}
