#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main(void) {
  Display *display = XOpenDisplay(NULL);
  XKeyboardState x;

  if (NULL == display) {
    printf("%s\n", "Cannot open X server");
    return EXIT_FAILURE;
  }

  XGetKeyboardControl(display, &x);
  XCloseDisplay(display);

  printf("Num %s Caps %s Scroll %s\n",
    (x.led_mask & 2 ? "On" : "Off"),
    (x.led_mask & 1 ? "On" : "Off"),
    (x.led_mask & 4 ? "On" : "Off"));

  return EXIT_SUCCESS;
}
