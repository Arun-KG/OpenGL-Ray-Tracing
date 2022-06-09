#include "GUI.h"

namespace Raytracer {


	bool window = true;
	bool tool_active = true;
	bool show_demo_window = true;

	void GUI::OnInit() {
		
	}

	void GUI::OnRender() {
		if (window) {
			

			if (show_demo_window)
				ImGui::ShowDemoWindow(&show_demo_window);

			ImGui::Begin("Hello, world!");
			ImGui::Text("This is some useful text.");
			ImGui::Checkbox("Demo Window", &show_demo_window);

			ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
			ImGui::End();
			
		}
	}

}