#include <iostream>
#include <string.h>
using namespace std;
struct gierka
{
	string tytul;
	string gatunek;
	int ocena_od_zera_do_dziesiec; 
};

int main ()
{
	gierka gierka1;
	gierka1.tytul="League Of Legends";
	gierka1.gatunek="MOBA";
	gierka1.ocena_od_zera_do_dziesiec=9;
	cout<<"Tytul Pierwszej gry:"<<gierka1.tytul; 
	cout<<"Gatunek gry to: "<<gierka1.gatunek;
	cout<<"ocena 0-10 to:"<<gierka1.ocena_od_zera_do_dziesiec<<endl;
		gierka gierka2;
		gierka2.tytul="CS 1.6";
		gierka2.gatunek="FPS";
		gierka2.ocena_od_zera_do_dziesiec=8;
		cout<<"Tytul Pierwszej gry:"<<gierka2.tytul; 
		cout<<"Gatunek gry to: "<<gierka2.gatunek;
		cout<<"Ocena 0-10 to:"<<gierka2.ocena_od_zera_do_dziesiec<<endl;
		return 0;
}

