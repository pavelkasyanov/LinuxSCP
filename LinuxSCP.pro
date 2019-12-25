TEMPLATE = subdirs

SUBDIRS += \
    LinuxSCP_core \
    LinuxSCP_gui

LinuxSCP_core.subdir = LinuxSCP_core
LinuxSCP_gui.subdir = LinuxSCP_gui
LinuxSCP_gui.depends = LinuxSCP_core
