#include <iostream>
#include "core/core.h"
#include "renderer/renderer.h"
#include "audio/audio.h"

int main() {
    initCore();
    initRenderer();
    initAudio();
    std::cout << "Hello, world" << std::endl;
    return 0;
}
