#ifndef X11_WINDOW_H
#define X11_WINDOW_H

#include "core/types/string/string.h"
#include "core/types/typedefs.h"

#include "platform/linuxbsd/x11/display_server.h"
#include "platform/window.h"

#include <X11/Xlib.h>

static const long EVENT_MASK = ExposureMask | KeyPressMask | KeyReleaseMask | ButtonPressMask |
		ButtonReleaseMask | PointerMotionMask | EnterWindowMask | LeaveWindowMask | CWColormap;

typedef struct {
	Window window;

	int32 width;
	int32 height;
	String title;

	bool maximized;

	Display *display;
} X11Window;

X11Window *x11_window_create(const X11Server *server, String title, int32 width, int32 height);
void x11_window_destroy(X11Window *window);

PlatformInput *x11_window_poll(const X11Window *window);

void x11_window_set_title(const X11Window *window, String title);
void x11_window_set_size(const X11Window *window, int32 width, int32 height);

#endif // X11_WINDOW_H