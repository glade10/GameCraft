#include "Core.h"

#pragma once

namespace GameCraft {

	class GAMECRAFT_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();

}