#pragma once

#include "vendor/imgui/imgui.h"
#include "vendor/imgui/backends/imgui_impl_glfw.h"
#include "vendor/imgui/backends/imgui_impl_opengl3.h"

namespace Raytracer {
	class GUI {
	public:
		void OnInit();
		void OnRender();
	};
}
