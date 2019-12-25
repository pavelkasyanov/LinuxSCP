#ifndef APPCONFIG_H
#define APPCONFIG_H

#include <QObject>
#include <QScopedPointer>
#include <QSettings>

#include <singleton.h>

class AppConfig : public QObject, public Singleton<AppConfig>
{
    Q_OBJECT
public:
    AppConfig();

    QVariant value(const QString& key, const QVariant& default_value = QVariant());
private:
    QScopedPointer<QSettings> _settings;
};

#endif // APPCONFIG_H
