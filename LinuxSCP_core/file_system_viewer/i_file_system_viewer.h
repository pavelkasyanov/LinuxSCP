#ifndef IFILESYSTEMVIEWER_H
#define IFILESYSTEMVIEWER_H

#include "LinuxSCP_core_global.h"

#include <QObject>
#include <QtPlugin>
#include <QDateTime>
#include <QList>

namespace LinuxSCPCore {
    namespace FileSystem {

        enum class LINUXSCP_CORE_EXPORT FileType {FILE, DIR };

        struct LINUXSCP_CORE_EXPORT FileSystemItem {
            QString name;
            QString size;
            FileType type;
            QDateTime created;
            QDateTime last_modified;
        };

        class LINUXSCP_CORE_EXPORT IFileSystemViewer
        {
        public:
            IFileSystemViewer() = default;
            virtual ~IFileSystemViewer() = default;

            virtual QList<FileSystemItem> get_items_by_path() = 0;
        };
    }
}
Q_DECLARE_INTERFACE(LinuxSCPCore::FileSystem::IFileSystemViewer, "com.kPavel.LinuxSCP.core.IFileSystemViewer")

#endif // IFILESYSTEMVIEWER_H
