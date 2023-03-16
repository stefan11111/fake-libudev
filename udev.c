#include "udev.h"

struct udev *udev_new(void)
{
    return 0;
}

struct udev *udev_ref(struct udev *udev)
{
    return 0;
}

struct udev *udev_unref(struct udev *udev)
{
    return 0;
}

void udev_set_log_fn(struct udev *udev, void (*log_fn)(struct udev *udev,
            int priority, const char *file, int line, const char *fn,
            const char *format, va_list args))
{
}

void udev_set_log_priority(struct udev *udev, int priority)
{
}

int udev_get_log_priority(struct udev *udev)
{
    return 0;
}

struct udev_hwdb *udev_hwdb_new(struct udev *udev)
{
    return 0;
}

struct udev_hwdb *udev_hwdb_ref(struct udev_hwdb *hwdb)
{
    return 0;
}

struct udev_hwdb *udev_hwdb_unref(struct udev_hwdb *hwdb)
{
    return 0;
}

struct udev_list_entry *udev_hwdb_get_properties_list_entry(struct udev_hwdb *hwdb, const char *modalias, unsigned int flags)
{
    return 0;
}
