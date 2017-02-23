#include <iostream>
#include <string>
#include <ctime>

using namespace std;

enum class Weapon
{
	fists, gun,shotgun,revolver,sniper,machine_gun,max
};

class Zombie;

class Player
{
	Weapon weapon;
	float precision;
	int life;

	public:
		void attack(Zombie &)
		{
			
		};
		bool isAlive();

		Player() : weapon{static_cast<Weapon>(rand()%7)}, 
			precision{((double) rand()/(RAND_MAX+1))},
			life{rand()%10/10.0f}  {};

};

class Zombie
{
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	

public:
	void attack(Player &)
	{
		if (distanceToPlayer <= 0)
		{

		}
	};
	bool isAlive();

	Zombie() : distanceToPlayer{(rand()%(200-20))+20},
		speed{ rand() %20}, damage{ rand() % 20 }, life{ rand() % 100} {};
};



int main()
{
	srand(time(nullptr));
	
	Zombie zombies[10];

}