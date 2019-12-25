#ifndef LOCALFILESYSTEMVIEWER_H
#define LOCALFILESYSTEMVIEWER_H

#include "LinuxSCP_core_global.h"

#include <QObject>

#include "i_file_system_viewer.h"

namespace LinuxSCPCore {
    namespace FileSystem {

        class LINUXSCP_CORE_EXPORT LocalFileSystemViewer : public QObject, public IFileSystemViewer
        {
            Q_OBJECT
            Q_INTERFACES(IFileSystemViewer)
        public:
            LocalFileSystemViewer();
            ~LocalFileSystemViewer() override;
        };
    }
}
#endif // LOCALFILESYSTEMVIEWER_H
