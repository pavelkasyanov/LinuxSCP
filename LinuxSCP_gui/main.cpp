#include "main_window.h"

#include <QApplication>
#include <QTranslator>
#include <app_config.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString app_lang = AppConfig::instance().value("global/language", "en").toString();

    QTranslator translator;
    translator.load("language/local_" + app_lang);
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}
