#pragma once

namespace Raytracer {
	class Guibstaction {
	private:
		bool m_ShoudClose = false;

	public:
		void ShowExampleAppDockSpace();
		bool ApplicationCose();
	};
}