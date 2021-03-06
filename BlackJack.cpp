#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<array>
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
	RANK_TYZ,
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
	MAX_RANKS
};
struct Card
{
	Suit suit;
	Rank rank;
};
void printCard(Card &card)
{
	std::string abv;
	switch (card.rank)
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
		abv += "10";
		break;
	case(RANK_VALET):
		abv += 'V';
		break;
	case(RANK_KOROL):
		abv += 'K';
		break;
	case(RANK_DAMA):
		abv += 'D';
		break;
	case(RANK_TYZ):
		abv += 'T';
		break;
	}
	switch (card.suit)
	{
	case(SUIT_TREFU):
		abv += 'T';
		break;
	case(SUIT_BYBNU):
		abv += 'B';
		break;
	case(SUIT_CHERVU):
		abv += 'C';
		break;
	case(SUIT_PIKI):
		abv += 'P';
		break;
	}
	std::cout << abv;// << std::endl;
}
std::array<Card, 52>cards;
void inicialisation()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int k = 0; k < 13; ++k)
		{
			cards[i * 13 + k].suit = static_cast<Suit>(i);
			cards[i * 13 + k].rank = static_cast<Rank>(k);
		}
	}
}
void printCards(const std::array<Card, 52> &arr)
{
	for (int i = 0; i < 52; ++i)
	{
		printCard(static_cast<Card>(arr[i]));
		std::cout << ' ';
	}
	std::cout << std::endl;
}
void swapCard(Card &a, Card &b)
{
	Card c;
	c = a;
	a = b;
	b = c;
}
void shuffleDeck()
{
	int k = 0;
	for (const auto& card : cards)
	{
		swapCard(cards[k], cards[rand() % 52]);
		++k;
	}
}
int getCardValue(Card &card)
{
	switch (card.rank)
	{
	case(RANK_2):
		return 2;
		break;
	case(RANK_3):
		return 3;
		break;
	case(RANK_4):
		return 4;
		break;
	case(RANK_5):
		return 5;
		break;
	case(RANK_6):
		return 6;
		break;
	case(RANK_7):
		return 7;
		break;
	case(RANK_8):
		return 8;
		break;
	case(RANK_9):
		return 9;
		break;
	case(RANK_10):
		return 10;
		break;
	case(RANK_VALET):
		return 10;
		break;
	case(RANK_KOROL):
		return 10;
		break;
	case(RANK_DAMA):
		return 10;
		break;
	case(RANK_TYZ):
		return 11;
		break;
	case(MAX_RANKS):
		return 0;
		break;
	}
}
bool playBlackJack(const std::array<Card, 52> &arr )
{
	Card* cardPtr = &(static_cast<Card>(arr[0]));//arr[0];//static_cast<&Card>(arr[0]);
	int diller = 0;
	int user = 0;
	shuffleDeck();

	if (user > diller)
		return true;
	else
		return false;
}
int main()
{
	srand(time(0));
	rand();
	inicialisation();

	printCards(cards);
	shuffleDeck();
	printCards(cards);
}
