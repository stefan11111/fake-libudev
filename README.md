# fake-libudev

Notice:
Seems like steam fixed it's shit and this hack is no longer needed.

This is a placeholder shared library for libudev.
I wrote this to get steam to work with a static /dev, as it only needs these functions to be defined, not to actually work.
All the functions in this library return 0 without doing anything.
This may be of help for other applications that only use libudev just because they can and don't actually need any functionality.
