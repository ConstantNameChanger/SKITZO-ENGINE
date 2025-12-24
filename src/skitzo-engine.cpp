// SKITZO-ENGINE.CPP : MAIN MODULE OF THE ENGINE:
// RESPONSIBLE FOR: INIT SYSTEM

#include "glad/glad.h"
#include <GLFW/glfw3.h>


namespace SkitzoNG {

    namespace System {
        void SkitzoNG_Init() {
            glfwInit();
            glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
            glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
            glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        }

    }


}
