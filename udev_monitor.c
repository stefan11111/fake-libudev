#include "udev.h"
#include "udev_list.h"

struct udev_device *udev_monitor_receive_device(struct udev_monitor *udev_monitor)
{
    return 0;
}

int udev_monitor_enable_receiving(struct udev_monitor *udev_monitor)
{
    return 0;
}

int udev_monitor_set_receive_buffer_size(struct udev_monitor *udev_monitor, int size)
{
    return 0;
}

int udev_monitor_get_fd(struct udev_monitor *udev_monitor)
{
    return 0;
}

struct udev *udev_monitor_get_udev(struct udev_monitor *udev_monitor)
{
    return 0;
}

int udev_monitor_filter_update(struct udev_monitor *udev_monitor)
{
    return 0;
}

int udev_monitor_filter_remove(struct udev_monitor *udev_monitor)
{
    return 0;
}

int udev_monitor_filter_add_match_subsystem_devtype(struct udev_monitor *udev_monitor, const char *subsystem, const char *devtype)
{
    return 0;
}

int udev_monitor_filter_add_match_tag(struct udev_monitor *udev_monitor, const char *tag)
{
    return 0;
}

struct udev_monitor *udev_monitor_new_from_netlink(struct udev *udev, const char *name)
{
    return 0;
}

struct udev_monitor *udev_monitor_ref(struct udev_monitor *udev_monitor)
{
    return 0;
}

struct udev_monitor *udev_monitor_unref(struct udev_monitor *udev_monitor)
{
    return 0;
}
