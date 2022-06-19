/*
Ler o nome e o salário bruto de N funcionários, onde N deverá ser lido no início do programa.
Para cada funcionário faça:
- Calcule e mostre o INSS que de 8% do salário bruto;
- Calcule e mostre o Imposto de Renda que varia de acordo com o salário:
- 0%: para salário bruto menor que R$1500;
- 10%: para o salário bruto maior que R$1500 e menor que R$5000;
- 20%: para o salário bruto maior que R$5000;
- Calcule o mostre o salário líquido (salário bruto menos os descontos).
Pede-se também que apresente:
- A relação com todos os funcionários, salario bruto, INSS, IR e salário líquido;
- A média de todos os salários brutos.
*/

#include <iostream>
using namespace std;

main()
{
	setlocale (LC_ALL,"portuguese");	
	
	int n;
	
	cout<<"Digite o número de funcionários: ";cin >> n;
	cout<<"\n";
	
	string nome[n];
	float sb[n], inss[n], ir[n], sl[n], mediasb=0, soma=0;
	int i, cont_0=0, cont_10=0, cont_20=0;
	
	for (i=0; i<n; i++)	// entrada de dados
	{
		cout<<"\nNome do "<<i+1<<"º funcionário: ";cin >> nome[i];
		cout<<"Salário bruto do "<<i+1<<"º funcionário: ";cin >> sb[i];
		cout<<"\n";
	
	soma+=sb[i];
	
	inss[i]=(sb[i]*0.08);
    cout<<"O INSS para o "<<i+1<<"º funcionário é: "<<inss[i]<<endl;
    
    
			if (sb[i] <= 1500) {
				ir[i]=sb[i]*0;
				cont_0++;
			}
			else if (sb[i] > 1500) {
				ir[i]=sb[i]*0.1;
				cont_10++;
			}
			else (sb[i] >= 5000); {
				ir[i]=sb[i]*0.2;
				cont_20++;
			}
			
   	cout<<"O imposto de renda para o "<<i+1<<"º funcionario é: "<<ir[i]<<endl;
    
    sl[i]=(sb[i]-inss[i]-ir[i]);
    cout<<"O salário líquido para o "<<i+1<<"º funcionário é: "<<sl[i]<<endl;
	cout<<"----------------------------------------------------";
    cout<<"\n";
    
    }
    
    cout<<"\n\n----------  ----------\n";
    cout<<"  Relação Geral \n";
    cout<<"----------  ----------\n";

	cout<<"\nNome\tSBruto\tINSS\tImposto\tSLíquido\n";
	for (i=0; i<n; i++)
	{
		cout<<nome[i]<<"\t"<<sb[i]<<"\t"<<inss[i]<<"\t"<<ir[i]<<"\t"<<sl[i]<<"\t"<<endl;  
    }
    
    mediasb = soma/n;
    cout<<"\nA média de todos os salários: "<<mediasb<<"\n";

}
    
	   