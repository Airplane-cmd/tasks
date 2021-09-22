#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
//
//class Name;
	

class Monster
{
	public:
		enum MonsterType
		{
			Dragon,
			Goblin,
			Ogre,
			Orc,
			Skeleton,
			Troll,
			Vampire,
			Zombie,
			MAX_MONSTER
	
		};
	private:
	std::string m_name;
	int m_health;
	MonsterType m_Type;
	public:
	Monster(int health = 10, std::string name = "Dick", MonsterType type = Skeleton) : m_health{health}, m_name{name}, m_Type{type}{}
	std::string cast(MonsterType castingType)
	{
		switch(castingType)
		{
		case (Dragon):
			return "Dragon";
			break;
		case (Goblin):
			return "Goblin";
			break;
		case (Ogre):
			return "Ogre";
			break;
		case (Orc):
			return "Orc";
			break;
		case (Skeleton):
			return "Skeleton";
			break;
		case (Troll):
			return "Troll";
			break;
		case (Vampire):
			return "Vampire";
			break;
		case (Zombie):
			return "Zombie";
			break;
	}}
	void print()
	{
		std::cout<<m_name<<" is the "<<cast(m_Type)<<" that has " <<m_health<<" health points."<<std::endl;
	}
};
class Name
{
	public:
	static std::string Generation()
	{
		int length = rand() % 10;
		std::string name;
		for (int i = 0; i < length; ++i)
		{
			int literal = rand() % 26;
			char literalCh;
			switch(literal)
		{
		case (1):
			literalCh = 'a';
			break;
		case (2):
			literalCh = 'b';
			break;
		case (3):
			literalCh = 'c';
			break;
		case (4):
			literalCh = 'd';
			break;
		case (5):
			literalCh = 'e';
			break;
		case (6):
			literalCh = 'f';
			break;
		case (7):
			literalCh = 'g';
			break;
		case (8):
			literalCh = 'h';
			break;
			case (9):
			literalCh = 'i';
			break;
			case (10):
			literalCh = 'j';
			break;
			case (11):
			literalCh = 'k';
			break;
			case (12):
			literalCh = 'l';
			break;
			case (13):
			literalCh = 'm';
			break;
			case (14):
			literalCh = 'n';
			break;
			case (15):
			literalCh = 'o';
			break;
			case (16):
			literalCh = 'p';
			break;
			case (17):
			literalCh = 'r';
			break;
			case (18):
			literalCh = 's';
			break;
			case (19):
			literalCh = 't';
			break;
			case (20):
			literalCh = 'u';
			break;
			case (21):
			literalCh = 'v';
			break;
			case (22):
			literalCh = 'w';
			break;
			case (23):
			literalCh = 'x';
			break;
			case (24):
			literalCh = 'y';
			break;
			case (25):
			literalCh = 'z';
			break;
		};
			name += literalCh;
		};
		return name;
	}
};
class Type
{
	public:
	static Monster::MonsterType Generation()
	{
		int number = rand() % 8;
		std::string name;
		
			switch(number)
		{
			case (0):
			return Monster::Dragon;
			break;
			case (1):
			return Monster::Goblin;
			break;
			case (2):
			return Monster::Ogre;
			break;
			case (3):
			return Monster::Orc;
			break;
			case (4):
			return Monster::Skeleton;
			break;
			case (5):
			return Monster::Troll;
			break;
			case (6):
			return Monster::Vampire;
			break;
			case (7):
			return Monster::Zombie;
			break;
		};
		};
};
class MonsterGenerator
{
	public:
static Monster generateMonster()
{
	int r_health = rand() % 100;
	std::string r_name = Name::Generation();
	Monster::MonsterType r_type = Type::Generation();;
	Monster obj(r_health, r_name, r_type);
	return obj;
}
};

int main()
{
	srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения

	rand();


 Monster def = MonsterGenerator::generateMonster();
 Monster cock = MonsterGenerator::generateMonster();
 Monster fuck = MonsterGenerator::generateMonster();
 Monster Jack(100, "Jack", Monster::Orc);
 Jack.print();
 def.print();
 cock.print();
 fuck.print();
 return 0;
}
