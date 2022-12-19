//Turnurile din Hanoi

#include <stdio.h>

void Turnuri_Hanoi(char sursa, char destinatie, char auxiliar, int n)
{
	if (n <= 0)
		printf("Dati un numar valid de discuri (mai mare decat 0)!");
	else if (n == 1)
		printf("Mutarea discului de pe tija %c pe tija %c. \n", sursa, auxiliar);
	else
	{
		Turnuri_Hanoi(sursa, auxiliar, destinatie, n - 1);
		Turnuri_Hanoi(sursa, destinatie, auxiliar, 1);
		Turnuri_Hanoi(destinatie, sursa, auxiliar, n - 1);
	}
}

void Informatii() {
	printf("\n Turnurile din Hanoi \n");
	printf(" * Joc matematic\n ");
	printf("* Inventat de matematicianul francez Edouard Lucas în anul 1883 \n ");
	printf("* Se dau 3 tije simbolizate prin A,B,C. Pe tija A se gasesc discuri de diametre diferite,\n");
	printf("asezate in ordine descrescatoare a diametrelor privite de jos in sus. Se cere sa se mute \n");
	printf("discurile de pe tija A pe tija C, utilizand ca tija intermediara tija B si respectand anumite reguli. \n");;
}


void Meniu()
{
	int optiune, n;
	
	do {
		
		printf("\n MENIU:\n");
		printf("1. Ce presupune problema si cine a inventat-o? \n");
		printf("2. Reguli reguli reguli\n");		
		printf("3. Legenda din spatele problemei\n");
		printf("4. Care e totusi solutia problemei? \n");
		printf("0. Iesire \n");

		printf("Alegeti o optiune din MENIU: ");
		scanf("%d", &optiune);

		switch (optiune)
		{
		case 1:
			Informatii();
			
			break;

		case 2:
			
			
			break;

		case 3:
		
		
			break;

		case 4:

			printf("Alegeti numarul de discuri: \n");
			scanf("%d", &n);

			printf("\n Solutia pentru %d discuri este: \n", n);
			Turnuri_Hanoi('A', 'B', 'C', n);
			printf("\n Felicitari! Discurile au fost mutate de pe tija A pe tija C. \n");

			
			break;

		case 0:
			exit(1);

		default:
			printf("\nOptiunea nu este valabila. Alegeti din MENIU!\n");
			break;
		}

	} while (1);
}

	int main() {

		Meniu();
		return 0;
	}
