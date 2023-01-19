#include <emscripten.h>
#include <emscripten/bind.h>

using namespace emscripten;

extern "C" {
int EMSCRIPTEN_KEEPALIVE dummy_init() {
  return 0;
}

EMSCRIPTEN_BINDINGS(dummy) {
  emscripten::function("dummy_init", &dummy_init);
}
}
