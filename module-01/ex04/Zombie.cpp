#include <iostream>
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

Zombie::Zombie()
{
	this->name = RAND_NAME[random() % RAND_NAME_SIZE];
	this->type = RAND_TYPE[random() % RAND_TYPE_SIZE];
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setZombieType(std::string type)
{
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> is dead... ⚰️" << std::endl;
}
