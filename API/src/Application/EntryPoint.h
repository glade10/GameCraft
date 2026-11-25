#pragma once

extern GameCraft::Application* GameCraft::CreateApplication();

int main(int argc, char** argv) {
	auto app = GameCraft::CreateApplication();
	app->Run();
	delete app;
	return 0;
}