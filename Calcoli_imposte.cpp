#include<cstdlib>
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
   {
	   float netto; // importo netto dell'imposta
	   float lordo; // importo lordo dell'imposta
	   int aliquota; // aliquota dell'imposta considerata
	   int scelta; // scelta dell'utente che decide se calcolare l'importo netto o lordo di un'imposta
	   char continua; // 0/1: l'utente decide se eseguire un nuovo calcolo o se terminare il programma
	   cout<<"Programma che permette il calcolo di importi al netto o al lordo di un\'imposta." <<'\n';
	   do
	   {
        netto=0;
        lordo=0;
		cout<<'\n';
		cout<<"		1. Calcolo importo al lordo di un\'imposta" <<'\n';
		cout<<"		2. Calcolo importo al netto di un\'imposta" <<'\n';
		cout<<'\n';
		cout<<"Digita il numero corrispondente all\'opzione che scegli e premi invio." <<'\n';
		cin >> scelta;
		cout <<'\n';
		switch(scelta)
		{
			case 1:
				{
					cout<<"Inserisci l\'imposta netta e premi invio." <<'\n';
					cin >> netto;
					do
					{
						cout<<"Inserisci il valore dell\'aliquota e premi invio." <<'\n';
						cin >> aliquota;
						if (aliquota!=20 && aliquota!=10 && aliquota!=4)
							{
								cout<<"Valore dell\'aliquota non valido. Puoi digitare solo 20, 10 o 4.";
								cout<<'\n';
							} // fine if di controllo aliquota
					} // fine ciclo di controllo valore aliquota
					while(aliquota!=20 && aliquota!=10 && aliquota!=4);
					lordo=netto+(netto*aliquota/100);
					cout<<'\n';
					cout<<"Imposta netta: " <<netto <<'\n';
					cout<<"Aliquota: " <<aliquota <<"%" <<'\n';
					cout<<"Imposta lorda: " <<lordo <<'\n';
				} break; // fine caso 1
			case 2:
				{
					cout<<"Inserisci l\'imposta lorda e premi invio." <<'\n';
					cin >> lordo;
					do
					{
						cout<<"Inserisci il valore dell\'aliquota e premi invio." <<'\n';
						cin >> aliquota;
						if (aliquota!=20 && aliquota!=10 && aliquota!=4)
							{
								cout<<"Valore dell\'aliquota non valido. Puoi digitare solo 20, 10 o 4.";
								cout<<'\n';
							} // fine if di controllo aliquota
					} // fine ciclo di controllo valore aliquota
					while(aliquota!=20 && aliquota!=10 && aliquota!=4);
					netto=lordo/(1+(aliquota/100));
					cout<<'\n';
					cout<<"Imposta lorda: " <<lordo <<'\n';
					cout<<"Aliquota: " <<aliquota <<"%" <<'\n';
					cout<<"Imposta netta: " <<netto <<'\n';
				} break; // fine caso 2
			default: cout<<"Non sono stati inseriti parametri di scelta corretti." <<'\n'; // fine caso di dafault
		} // fine switch
		cout<<'\n';
		cout<<"Vuoi tornare al menu iniziale? Rispondi con 'S' o 'N' e premi invio.";
		cin >> continua;
	   } // fine ciclo che permette di ritornare al menu iniziale.
	   while(continua=='S' || continua=='s');
	   cout<<'\n';
	system("PAUSE");
	return EXIT_SUCCESS;
   } // fine main

