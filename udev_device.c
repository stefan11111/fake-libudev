#include "udev.h"
#include "udev_list.h"

const char *udev_device_get_syspath(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_sysname(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_sysnum(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_devpath(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_devnode(struct udev_device *udev_device)
{
    return 0;
}

unsigned long long udev_device_get_seqnum(struct udev_device *udev_device)
{
    return 0;
}

unsigned long long udev_device_get_usec_since_initialized(struct udev_device *udev_device)
{
    return 0;
}

int udev_device_get_devnum(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_devtype(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_subsystem(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_driver(struct udev_device *udev_device)
{
    return 0;
}

struct udev *udev_device_get_udev(struct udev_device *udev_device)
{
    return 0;
}

struct udev_device *udev_device_get_parent(struct udev_device *udev_device)
{
    return 0;
}

struct udev_device *udev_device_get_parent_with_subsystem_devtype(struct udev_device *udev_device, const char *subsystem, const char *devtype)
{
    return 0;
}

int udev_device_get_is_initialized(struct udev_device *udev_device)
{
    return 1;
}

const char *udev_device_get_action(struct udev_device *udev_device)
{
    return 0;
}

int udev_device_has_tag(struct udev_device *udev_device, const char *tag)
{
    return 0;
}

struct udev_list_entry *udev_device_get_devlinks_list_entry(struct udev_device *udev_device)
{
    return 0;
}

struct udev_list_entry *udev_device_get_properties_list_entry(struct udev_device *udev_device)
{
    return 0;
}

struct udev_list_entry *udev_device_get_tags_list_entry(struct udev_device *udev_device)
{
    return 0;
}

struct udev_list_entry *udev_device_get_sysattr_list_entry(struct udev_device *udev_device)
{
    return 0;
}

const char *udev_device_get_property_value(struct udev_device *udev_device, const char *key)
{
    return 0;
}

const char *udev_device_get_sysattr_value(struct udev_device *udev_device, const char *sysattr)
{
    return 0;
}

int udev_device_set_sysattr_value(struct udev_device *udev_device, const char *sysattr, const char *value)
{
    return 0;
}

struct udev_device *udev_device_new_from_syspath(struct udev *udev, const char *syspath)
{
    return 0;
}

struct udev_device *udev_device_new_from_devnum(struct udev *udev, char type, int devnum)
{
    return 0;
}

struct udev_device *udev_device_new_from_subsystem_sysname(struct udev *udev, const char *subsystem, const char *sysname)
{
    return 0;
}

struct udev_device *udev_device_new_from_device_id(struct udev *udev, const char *id)
{
    return 0;
}

struct udev_device *udev_device_new_from_environment(struct udev *udev)
{
    return 0;
}

struct udev_device *udev_device_ref(struct udev_device *udev_device)
{
    return 0;
}

struct udev_device *udev_device_unref(struct udev_device *udev_device)
{
    return 0;
}
