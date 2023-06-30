.POSIX:

XCFLAGS = ${CPPFLAGS} ${CFLAGS} -nostdlib -std=c99 -fPIC -pthread -D_XOPEN_SOURCE=700 \
		  -Wall -Wextra -Wpedantic -Wmissing-prototypes -Wstrict-prototypes \
		  -Wno-unused-parameter
XLDFLAGS = ${LDFLAGS} -shared -Wl,-soname,libudev.so.1

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
	mkdir -p ${DESTDIR}/lib64
	cp -f libudev.so.1 ${DESTDIR}/lib64/libudev.so.1.fake
	ln -rsf ${DESTDIR}/lib64/libudev.so.1.fake ${DESTDIR}/lib64/libudev.so.1
	mkdir -p ${DESTDIR}/usr/lib64/pkgconfig
	cp -f libudev.pc ${DESTDIR}/usr/lib64/pkgconfig
uninstall:
	rm -f ${DESTDIR}/lib64/libudev.so.1.fake ${DESTDIR}/lib64/libudev.so.1

clean:
	rm -f libudev.so.1 ${OBJ}

.PHONY: all clean install uninstall
