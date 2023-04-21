#include "Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie *zombies = zombieHorde(N, "Horde");
	for (int i = 0; i < N; i ++)
		zombies[i].announce();
	delete[] zombies;
	// system("leaks -q Zombie");
	return (0);
}