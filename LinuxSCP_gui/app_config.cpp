#include "app_config.h"

AppConfig::AppConfig()
{
    _settings.reset(new QSettings("settings.ini", QSettings::IniFormat));
}

QVariant AppConfig::value(const QString &key, const QVariant &default_value)
{
    return _settings->value(key, default_value);
}


