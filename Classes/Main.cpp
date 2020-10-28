#include <iostream>

#define LOG(x) std::cout << x << std::endl

// All things inside classes are private by default
class Player
{
public:

	int hp, stamina;
	// Player() = delete; -- destroy default Constructor

	// Constructors
	Player()
	{
		hp = 50;
		stamina = 35;
	}

	// Overload constructors
	Player(int Hp, int Stamina)
	{
		hp = Hp;
		stamina = Stamina;
	}

	// Destructor
	~Player()
	{
		LOG("Destroyed object!");
	}
};


int main()
{
	Player player;
	Player player2(100, 45);

	LOG(player.hp);
	LOG(player2.hp);
}