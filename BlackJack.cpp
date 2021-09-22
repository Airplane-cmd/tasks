#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
enum Suit
{
	SUIT_TREFU,
	SUIT_BYBNU,
	SUIT_CHERVU,
	SUIT_PIKI,
	MAX_SUITS
};
enum Rank
{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_VALET,
	RANK_DAMA,
	RANK_KOROL,
	RANK_TYZ,
	MAX_RANKS
};
struct Card
{
	Suit suit;
	Rank rank;
};
std::string printCard(Card &card)
{
	std::string abv;
	switch(card.rank)
	{
	case(RANK_2):
		abv += '2';
		break;
	case(RANK_3):
		abv += '3';
		break;
	case(RANK_4):
		abv += '4';
		break;
	case(RANK_5):
		abv += '5';
		break;
	case(RANK_6):
		abv += '6';
		break;
	case(RANK_7):
		abv += '7';
		break;
	case(RANK_8):
		abv += '8';
		break;
	case(RANK_9):
		abv += '9';
		break;
	case(RANK_10):
		abv += '10';
		break;
	case(RANK_VALET):
		abv += 'V';
		break;
	case(RANK_KOROL):
		abv += 'D';
		break;
	case(RANK_DAMA):
		abv += 'D';
		break;
	case(RANK_TYZ):
		abv += 'D';
		break;
	/*case(card.Suit = SUIT_TREFU):
		abv += 'T';
		break;
	case(card.Suit = SUIT_BYBNU):
		abv += 'B';
		break;
	case(card.Suit = SUIT_CHERVU):
		abv += 'C';
		break;
	case(card.Suit = SUIT_PIKI):
		abv += 'P';
		break;*/
		return abv;
	}
}
int main()
{
	int timeN = time(0);
	int timeP = timeN;
	for (int i = 0; i < 10000000000; ++i)
	{
		timeN = time(0);
		if (timeN != timeP)
		{
			std::cout << timeN << std::endl;
			timeP = timeN;
		}
		
	}
}