CFLAGS += -std=gnu99
DEFINES += -DEMSCRIPTEN
INCLUDE += -I$(ROOT)/targets/emscripten
SOURCES +=                              \
targets/emscripten/main.c                    \
targets/emscripten/jshardware.c
LIBS += -lc
#LIBS += -lstdc++
LDFLAGS += -s EXPORTED_FUNCTIONS='["_jsInit","_jsIdle","_jshPushIOCharEvent","_jshGetDeviceToTransmit","_jshGetCharToTransmit","_jsGfxChanged","_jsGfxGetPtr"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]' -s WASM=0 -s ASSERTIONS=1 --memory-init-file 0 -Oz 

