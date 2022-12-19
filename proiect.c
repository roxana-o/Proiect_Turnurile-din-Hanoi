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

	int main() {

		int n;

		printf("Alegeti numarul de discuri: \n");
		scanf("%d", &n);

		printf("\n Solutia pentru %d discuri este: \n", n);
		Turnuri_Hanoi('A', 'B', 'C', n);
		printf("\n Felicitari! Discurile au fost mutate de pe tija A pe tija C. \n");

		return 0;
	}
