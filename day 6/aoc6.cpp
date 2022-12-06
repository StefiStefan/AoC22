#include <iostream>
#include <fstream>
#include <string>
using std::cin;
using std::cout;
using std::string;
int check(string caracter)
{
	int y = 0;										//																								;buzi vagyok ezert igy fogom a 
	char temp;										//																								   part 2-t kommentelgetni :)
	for (int x=13; x >= 1; x--)						
	{
		temp = caracter[x];
		for (int z = x-1; z >= 0; z--)
		{	if (temp == caracter[z])
			{/*y--;*/ }
			else {y++;}}
	}
	return y;
}

int vokitoki(string anyad)
{
	string karakter="";
	int x = anyad.size();							//joe mama is so fat,they tried to wrap a string around her waist, but it passed INT_MAX
	x--;											//joe mama drank zero pepsi                        https://www.youtube.com/watch?v=Buxejhpbois&t=20s
	int y = 0;										//where's joe?
	int temp2 = 0;									//is that a gun?
	int ans = 0;									// "Niggas iffy uh, blicky got the stiffy uh,got the blicky uh,drum, it hold fifty uh"-6IX9INE
	for (int i = 0; i <= x; i++)					//egessen vegifuttatjuk
	{
		if (y + 13 <= x)							//ha a vegere er, ne mutasson tul az arrayon!, max az utolso negy betu legyen					;valtoztatva 3-rol 13-ra
		{
			for (int z = y; z < y + 14; z++)		//toltsuk fel																					;valtoztatva +4-rol +14-re
			{
				karakter += anyad[z];				//same shit
			}
			temp2 = check(karakter);				//magiaugyi miniszterium megjelent -->			   https://youtu.be/v4xZUr0BEfE?t=178
			if (temp2 == 91)							//ha pontosan 6 az eredmeny akkor az azt jelenti, hogy nincs benne a negyben egyforma		;valtoztatva 6-rol 91-re 
			{
				ans = y + 14; return ans;			//esku teso ha hozzaadsz a vizsgalt betuk elso indexehez 4-et akkor megkapod a megoldast		;valtoztatva +4-rol +14-re
			}
			karakter = ""; y++;						// format C:\.	es ne alljunk meg		           https://youtu.be/FUXX55WqYZs?t=91
		}
	}	return 666;									//ha nem megy akkor legalabb a devla vigyen el     https://youtu.be/bIU7MJwQrjg?t=74
}
int main()
{	std::ifstream manok;
	string asd;
	manok.open("data.txt");
	manok >> asd;
	cout << vokitoki(asd);							//nem mukodik? :) :( :) https://www.youtube.com/watch?v=enYdAxVcNZA
	manok.close();
}
