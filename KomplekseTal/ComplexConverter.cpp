
//=========================================================
//	Filnavn		:	
//	Forfatter	:	Jeppe Reinsborg
//	Dato	  	:	
//	Beskrivelse :
//
//
//---------------------------------------------------------
//	Udgave      :	
//	Revideret   :
//=========================================================  


//======== Inkluderede filer ==============================
#include <iostream>
#include <conio.h>
#include "KomplekseTal.h"
using namespace std;
#define æ "\x91"

int main()
{
	//======== Varible & Arrays ===============================
	ComplexNumber z1 ;
	char mode;
	double rez;
	double imz;
	double mod;
	double arg;

	//======== Program ========================================
	
	while (true)
	{
		
		
		cout << "Tast 's' for Sumform, Tast 'p' for Pol"æ"rform" << endl;

		mode = _getch();

		if (mode == 's')
		{

			cout << "Indtast Re(z) efterfulgt af Im(z) afslut med enter" << endl;
			cin >> rez;
			cin >> imz;

			z1.setSum( rez, imz);
		}
		else if (mode == 'p')
		{
			cout << "Indtast Mod(z) efterfulgt af Arg(z) afslut med enter" << endl;
			cin >> mod;
			cin >> arg;

			z1.setPol(mod, arg);
		}

		cout << endl;
		cout << z1.getRez() << (z1.getImz() > 0 ? "+" : "") << z1.getImz() << "j" << endl;
		cout << z1.getMod() << " <" << z1.getArg() << " rad" << endl;
		cout << endl;

	}




	return 0;
}
