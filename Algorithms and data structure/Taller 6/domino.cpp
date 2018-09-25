#include <iostream>
#include <string>
#include <set>
#include "dom.hpp"

int main()
{
	set<Domino>::iterator iter;
	set<Domino> Dominoes;
	int tmpa = 0;
	int tmpb = 0;

	for(int i = 0; i <= 6; i++)
	{
		for(int j = 0; j <= 6; j++)
		{
			Dominoes.insert(Domino(i, j));
			cout << i << " ," << j << "  InEqual: " << (Domino(i, j) != Domino(tmpa, tmpb)) << endl;
				tmpa = i;
				tmpb = j;
		}
	}

	Dominoes.insert(Domino(1, 0));

	cout << "EQS? " << (Domino(0, 6) != Domino(6, 0)) << endl;

	for(iter=Dominoes.begin(); iter!=Dominoes.end(); iter++)
	{
		Domino tmp = *iter;
    	cout << "[" << tmp.getA() << "|" << tmp.getB() << "]" << endl;
	}

	cout << "num : " << Dominoes.size()<< endl;

	/*Domino c(4, 3);
	Domino b(4, 3);

	cout << (c <= b) << (c >= b) << (c != b) << c.getA()<< endl;*/
	cout << (Domino(0,1) == Domino(0, 0)) << endl;

	return 0;
}