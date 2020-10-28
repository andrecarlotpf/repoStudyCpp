#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl

// This is C++ Interface, a class with Pure Virtual methods only
class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable // Needs to implements GetClassName function(obliged by pure virutal functions)
{
public:
	std::string GetName(){ return "Entity"; }
	virtual std::string GetNameI(){ return "Entity"; }
	std::string GetClassName() override { return "Entity"; }
};


class Player : public Entity
{
private:
	std::string m_PlayerName;

public:
	// Another way to initialize
	Player(const std::string& Name)
		: m_PlayerName(Name){}

	std::string GetName() { return m_PlayerName; }
	std::string GetNameI() override /* <- works without, just make code cleaner */{ return m_PlayerName; }
	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
	LOG(entity->GetName());
}

void PrintNameInhiterance(Entity* entity)
{
	LOG(entity->GetNameI());
}

void PrintInterface(Printable* printable)
{
	LOG(printable->GetClassName());
}

int main()
{
	LOG("==================================");
	LOG("Do not override");
	
	Entity* entity = new Entity();
	PrintName(entity);

	Player* player = new Player("Andre");
	// Player is Entity too
	PrintName(player);

	LOG("==================================");
	LOG("Using virtual function to override");
	PrintNameInhiterance(entity);
	PrintNameInhiterance(player);

	LOG("==================================");
	LOG("Using pure virtual function as Interface");
	PrintInterface(entity);
	PrintNameInhiterance(player);
}