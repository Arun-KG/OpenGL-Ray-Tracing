#include "GUI.h"

namespace Raytracer {


	bool window = true;
	bool tool_active = true;









	void GUI::OnInit() {
		
	}

	void GUI::OnRender() {

		//ImGui::Begin("My First Tool", &tool_active, ImGuiWindowFlags_MenuBar);
		//if (ImGui::BeginMenuBar())
		//{
		//	if (ImGui::BeginMenu("File"))
		//	{
		//		if (ImGui::MenuItem("Open..", "Ctrl+O")) { /* Do stuff */ }
		//		if (ImGui::MenuItem("Save", "Ctrl+S")) { /* Do stuff */ }
		//		if (ImGui::MenuItem("Close", "Ctrl+W")) { tool_active = false; }
		//		ImGui::EndMenu();
		//	}
		//	ImGui::EndMenuBar();
		//}


		if (window) {
			ImGui::Begin("Test Window", &window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
			ImGui::Text("Hello from another window!");
			if (ImGui::Button("Close Me"))
				window = false;
			ImGui::End();

		}
	}

}