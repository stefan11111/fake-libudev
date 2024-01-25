.POSIX:

XCFLAGS ?= ${CPPFLAGS} ${CFLAGS} -nostdlib -std=c99 -fPIC -pthread -D_XOPEN_SOURCE=700 \
		  -Wall -Wextra -Wpedantic -Wmissing-prototypes -Wstrict-prototypes \
		  -Wno-unused-parameter
XLDFLAGS = ${LDFLAGS} -shared -Wl,-soname,libudev.so.1

LIBDIR ?= /lib64

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
	mkdir -p ${DESTDIR}${LIBDIR}
	cp -f libudev.so.1 ${DESTDIR}${LIBDIR}/libudev.so.1.fake
	ln -rsf ${DESTDIR}${LIBDIR}/libudev.so.1.fake ${DESTDIR}${LIBDIR}/libudev.so.1
	mkdir -p ${DESTDIR}/usr${LIBDIR}/pkgconfig
	cp -f libudev.pc ${DESTDIR}/usr${LIBDIR}/pkgconfig
	mkdir -p ${DESTDIR}/usr/include
	cp -f libudev.h ${DESTDIR}/usr/include
uninstall:
	rm -f ${DESTDIR}${LIBDIR}/libudev.so.1.fake ${DESTDIR}${LIBDIR}/libudev.so.1 ${DESTDIR}/usr/include/libudev.h

clean:
	rm -f libudev.so.1 ${OBJ}

.PHONY: all clean install uninstall
