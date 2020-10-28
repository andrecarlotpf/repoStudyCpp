#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl

class Entity
{

private:
	int privado = 1;

// Protected only visible on inhiterance not on instance of class
protected:
	int protegido = 2;

public:

	int X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

	void Explode()
	{
		LOG("PARENT BOOOOM");
	}
};

class Player : public Entity
{
public:
	int Hp;
	int Stamina;

	Player()
	{
		Hp = 100;
		Stamina = 50;
	}

	void PrintProtected()
	{
		LOG("Protected variable visible inside child class not on instance of child class");
		LOG(protegido);
	}
	void TakeDamage(int damage)
	{
		Hp -= protegido;
	}

	void Explode()
	{
		LOG("CHILD BOOOOM");
	}
};


int main()
{
	Player p;
	p.Move(3.0f, 4.0f);
	LOG(p.X);

	// Error because variable privado is in private section from parent class
	// LOG(p.privado);

	// Error because variable protegido is in protected section from parent class
	// LOG(p.protegido); instead >
	p.PrintProtected(); 

	// This is not overriding function -- Check Virtual_Function.cpp file to see it
	p.Explode();
}