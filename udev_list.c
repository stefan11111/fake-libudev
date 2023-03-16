#include "udev.h"
#include "udev_list.h"

void udev_list_entry_init(struct udev_list_entry *list_entry)
{
}

void udev_list_entry_free(struct udev_list_entry *list_entry)
{
}

void udev_list_entry_free_all(struct udev_list_entry *list_entry)
{
}

struct udev_list_entry *udev_list_entry_add(struct udev_list_entry *list_entry, const char *name, const char *value, int uniq)
{
    return 0;
}

struct udev_list_entry *udev_list_entry_get_next(struct udev_list_entry *list_entry)
{
    return 0;
}

struct udev_list_entry *udev_list_entry_get_by_name(struct udev_list_entry *list_entry, const char *name)
{
    return 0;
}

const char *udev_list_entry_get_name(struct udev_list_entry *list_entry)
{
    return 0;
}

const char *udev_list_entry_get_value(struct udev_list_entry *list_entry)
{
    return 0;
}
