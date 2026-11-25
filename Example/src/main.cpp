#include <GC.h>
class Sandbox : public GameCraft::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

GameCraft::Application* GameCraft::CreateApplication() {
	return new Sandbox();
}