#include<iostream>
#include<string>
#include<cstdlib>

	

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
class MonsterGenerator
{
static Monster generateMonster()
{
	int r_health = srand();
	std::string r_name;
	Monster::MonsterType r_type;
	Monster obj;
	return obj;
}
};
int main()
{
 Monster def;
 Monster Jack(100, "Jack", Monster::Orc);
 Jack.print();
 def.print();
 return 0;
}
