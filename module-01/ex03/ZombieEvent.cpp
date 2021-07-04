#include <cstdlib>

#include "ZombieEvent.hpp"
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

const std::string RAND_TYPE[] = {
	"Fresh 🏝",
	"Slow 💤",
	"Bom 💣",
	"Runner 🏃‍♀️",
	"Fire 🔥"};

const int RAND_TYPE_SIZE = (sizeof(RAND_TYPE) / sizeof(std::string));

ZombieEvent::ZombieEvent(void)
{
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie;

	newZombie = new Zombie(name);
	newZombie->setZombieType("Fresh 🏝");
	return (newZombie);
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *randZombie;

	randZombie = new Zombie(RAND_NAME[rand() % RAND_NAME_SIZE]);
	randZombie->setZombieType(RAND_TYPE[rand() % RAND_TYPE_SIZE]);
	randZombie->announce();
	return (randZombie);
}

ZombieEvent::~ZombieEvent()
{
}
