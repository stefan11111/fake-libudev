#include "udev.h"
#include "udev_list.h"

int udev_enumerate_add_match_subsystem(struct udev_enumerate *udev_enumerate, const char *subsystem)
{
    return 0;
}

int udev_enumerate_add_nomatch_subsystem(struct udev_enumerate *udev_enumerate, const char *subsystem)
{
    return 0;
}

int udev_enumerate_add_match_sysattr(struct udev_enumerate *udev_enumerate, const char *sysattr, const char *value)
{
    return 0;
}

int udev_enumerate_add_nomatch_sysattr(struct udev_enumerate *udev_enumerate, const char *sysattr, const char *value)
{
    return 0;
}
int udev_enumerate_add_match_property(struct udev_enumerate *udev_enumerate, const char *property, const char *value)
{
    return 0;
}

int udev_enumerate_add_match_sysname(struct udev_enumerate *udev_enumerate, const char *sysname)
{
    return 0;
}

int udev_enumerate_add_match_tag(struct udev_enumerate *udev_enumerate, const char *tag)
{
    return 0;
}

int udev_enumerate_add_match_parent(struct udev_enumerate *udev_enumerate, struct udev_device *parent)
{
    return 0;
}

int udev_enumerate_add_match_is_initialized(struct udev_enumerate *udev_enumerate)
{
    return 0;
}

int udev_enumerate_scan_devices(struct udev_enumerate *udev_enumerate)
{
    return 0;
}

int udev_enumerate_scan_subsystems(struct udev_enumerate *udev_enumerate)
{
    return 0;
}

struct udev_list_entry *udev_enumerate_get_list_entry(struct udev_enumerate *udev_enumerate)
{
    return 0;
}

int udev_enumerate_add_syspath(struct udev_enumerate *udev_enumerate, const char *syspath)
{
    return 0;
}

struct udev *udev_enumerate_get_udev(struct udev_enumerate *udev_enumerate)
{
    return 0;
}

struct udev_enumerate *udev_enumerate_new(struct udev *udev)
{
    return 0;
}

struct udev_enumerate *udev_enumerate_ref(struct udev_enumerate *udev_enumerate)
{
    return 0;
}

struct udev_enumerate *udev_enumerate_unref(struct udev_enumerate *udev_enumerate)
{
    return 0;
}
