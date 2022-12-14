#pragma once

namespace term {
enum {
  T_ENTER_CA,
  T_EXIT_CA,
  T_SHOW_CURSOR,
  T_HIDE_CURSOR,
  T_CLEAR_SCREEN,
  T_SGR0,
  T_UNDERLINE,
  T_BOLD,
  T_BLINK,
  T_REVERSE,
  T_ENTER_KEYPAD,
  T_EXIT_KEYPAD,
  T_ENTER_MOUSE,
  T_EXIT_MOUSE,
  T_FUNCS_NUM,
};

extern const char **keys;
extern const char **funcs;

bool extract_event(struct tb_event *event, struct ringbuffer *inbuf,
                   int inputmode);
int init_term(void);
void shutdown_term(void);
} // namespace term
