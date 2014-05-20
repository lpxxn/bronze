#include <QtGui>
#include<QApplication>
#include "bronzedialog.h"
#include "bronzestyle.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setStyle(new BronzeStyle);
    BronzeDialog dialog;

    dialog.show();
    return app.exec();
}
