#include "AudioManager.h"
#include <iostream>
class  GameManger {
	inline static int score{};
	inline static int level{};
	GameManger() {}
public:
	static int GetScore() {
		return score;
	}

	static int GetLevel() {
		return level;
	}
};

int main() {
	AudioManager & a = AudioManager::getInstance();
	std::cout<<GameManger::GetScore();
	return 0;
}