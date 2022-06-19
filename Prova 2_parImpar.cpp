/*
Faça um programa para ler um conjunto de números inteiros e mostrar ao final.
- O % de números que são pares;
- O % de números que são ímpares;
- A média de todos os números.
O programa deve repetir até que a resposta da pergunta "Deseja continuar (S/N)?" seja 'N' ou 'n'. 
*/

#include<iostream>
using namespace std;

main()
{
	setlocale (LC_ALL,"portuguese");	
	
	int n;
	
	cout<<"Digite a quantidade de números: ";cin >> n;
	cout<<"\n";
		
	int conjunto[n], media[n], par[n], impar[n], somapar=1, somaimpar=1;
	int i;
	char continuar='s';

	do
	{
		
		for (i=0; i<n; i++)
		{
			cout<<"Digite o "<<i+1<<"º número: "; cin>>conjunto[i];
		}
		cout<<"\n";

		media[i] = (conjunto[i]+1)/n;
		
		if ((conjunto[i]%2)==0)
			{
				par[i] = conjunto[i];			
			} 
		else 
			{ 
				impar[i] = conjunto[i];
			} 
			
		somapar=somapar + par[i];
		somaimpar=somaimpar + impar[i];

		cout<<(somapar*100.0)<<"% dos números são pares. \n"; 
		cout<<(somaimpar*100.0)<<"% dos números são ímpares. \n";
		
		cout<<"\nA média de todos os números é "<<media[i]<<".\n";

		
		cout<<"\nDeseja continuar? (s ou n) "<<endl;
		cin>>continuar;
		cout<<"\n";

	}
	while ((continuar == 's') || (continuar == 'S'));

	
}
