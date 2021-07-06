#include <ctime>
#include "Zombie.hpp"

const std::string RAND_NAME[] = {
	"⚡️spark⚡️",
	"😵skim😵",
	"🚀yjung🚀",
	"👻hyunlee👻",
	"🎮hkwon🎮",
	"👽jaemkim👽",
	"👾michoi👾",
	"🤖hangkim🤖"};

const int RAND_NAME_SIZE = (sizeof(RAND_NAME) / sizeof(std::string));

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Zombie stackZombie = Zombie("stackZombie");
	stackZombie.announce();

	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;

	for (int i = 0; i < 42; ++i)
		randomChump(RAND_NAME[rand() % RAND_NAME_SIZE]);

	return (0);
}
