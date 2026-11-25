#pragma once
#include "../Core.h"
#include <iostream>

namespace GameCraft {
	class GCAPI Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Defined in CLIENT
	Application* CreateApplication();
}