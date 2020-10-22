#include "errors_handler.h"

/*
 *  Outputs errors and frees memory
 */
void
error_handler(const int err, struct pos** arr) {
  if (err > 0) {
    fprintf(stderr, "Error occured: %s!\n", strerror(err));
  } else if (err == TYPE_ERR) {
    fprintf(stderr, "Incorrect type error!\n");
  }

  arrfree(arr);
}
