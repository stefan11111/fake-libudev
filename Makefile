.POSIX:

PREFIX = /usr/local
LIBDIR = ${PREFIX}/lib
INCLUDEDIR = ${PREFIX}/include
PKGCONFIGDIR = ${LIBDIR}/pkgconfig
XCFLAGS = ${CPPFLAGS} ${CFLAGS} -nostdlib -std=c99 -fPIC -pthread -D_XOPEN_SOURCE=700 \
		  -Wall -Wextra -Wpedantic -Wmissing-prototypes -Wstrict-prototypes \
		  -Wno-unused-parameter
XLDFLAGS = ${LDFLAGS} -shared -Wl,-soname,libudev.so.1
XARFLAGS = -rc
AR = ar

OBJ = \
	  udev.o \
	  udev_list.o \
	  udev_device.o \
	  udev_monitor.o \
	  udev_enumerate.o

all: libudev.so.1

.c.o:
	${CC} ${XCFLAGS} -c -o $@ $<

libudev.so.1: ${OBJ}
	${CC} ${XCFLAGS} -o $@ ${OBJ} ${XLDFLAGS}

install: libudev.so.1
	cp -f libudev.so.1 ${DESTDIR}/lib64/libudev.so.1.fake
	ln -sf ${DESTDIR}/lib64/libudev.so.1.fake ${DESTDIR}/lib64/libudev.so.1

uninstall:
	rm -f ${DESTDIR}/lib64/libudev.so.1.fake ${DESTDIR}/lib64/libudev.so.1

clean:
	rm -f libudev.so.1 libudev.a libudev.pc ${OBJ}

.PHONY: all clean install-headers install-pkgconfig install-shared \
	install-static install uninstall