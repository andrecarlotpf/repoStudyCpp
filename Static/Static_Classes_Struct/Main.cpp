#include <iostream>

#define LOG(x,y) std::cout << x << ", " << y << std::endl

struct Player
{
	static int hp;
	static int stamina;

	static void Print()
	{
		LOG(hp, stamina);
	}
};

int Player::hp;
int Player::stamina;

int main()
{
	/*
	Player p1;
	p1.hp = 100;
	p1.stamina = 100;

	Player p2;
	p2.hp = 85;
	p2.stamina = 85;

	// Static variables inside struct/classes share memory with all instances of that structure
	LOG("Static variables inside struct/classes share memory with all instances of that structure", "Thats why both have same values for static variables");
	p1.Print();
	p2.Print();
	*/
	// Another way to write

	Player::hp = 100;
	Player::stamina = 85;
	Player::Print();

}