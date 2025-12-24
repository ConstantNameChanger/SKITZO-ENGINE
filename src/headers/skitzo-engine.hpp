#ifndef SKITZO_ENGINE_HPP
#define SKITZO_ENGINE_HPP

#include "glad/glad.h"
#include <GLFW/glfw3.h>


namespace SkitzoNG {

    namespace System {
        void SkitzoNG_Init();

        namespace Log {
            void PrintErr(const char* msg);
        }

    }
}

#endif // SKITZO_ENGINE_HPP
