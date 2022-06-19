/*
Ler o nome, idade e altura em vetores com N posições - onde N deverá ser lido no início do programa.										 	(2,5)
O programa deverá:
a) Apresentar a relaçãoo de todos os nomes, idades e alturas dos vetores
b) Mostrar a maior idade 
c) Listar o nome e a altura da(s) pessoa(s) com a maior idade 
d) Mostrar o percentual de pessoas que tem a altura maior ou igual a 2 metros.
*/

#include<iostream>
using namespace std;

main()
{
	setlocale (LC_ALL,"portuguese");	
	
	int n;
	
	cout<<"Digite o número de alunos: ";cin >> n;
	cout<<"\n";
	
	string nome[n];
	float altura[n], maioridade=0, maiorAltura=0;
	int idade[n],i;
	
	for (i=0; i<n; i++)	// entrada de dados
	{
		cout<<"Nome do "<<i+1<<"º aluno: ";cin >> nome[i];
		cout<<"Idade do "<<i+1<<"º aluno: ";cin >> idade[i];
		cout<<"Altura do "<<i+1<<"º aluno: ";cin >> altura[i];
		cout<<"\n";
    }
    
    cout<<"----------  ----------\n";
    cout<<"  Relação Geral \n";
    cout<<"----------  ----------\n";

	cout<<"\nNome\tIdade\tAltura\n";
	for (i=0; i<n; i++)
	{
		cout<<nome[i]<<"\t"<<idade[i]<<"\t"<<altura[i]<<"\t"<<endl;  
    }
    

    for (i=0; i<n; i++)
    {
    	if (idade[i]>maioridade) 
		{
			maioridade=idade[i];  
		}
	}
	cout<<"\nA maior idade é de: "<<maioridade<<" anos. \n"<<endl; 
		
	maioridade=idade[i];
	
	/*
	cout<<"Nome e a altura da(s) pessoa(s) com a maior idade:";
	cout<<"\nNome\tAltura\n";
	for (i=0; i<maioridade-1; i++)
	{
		if (idade[i]>maioridade) 
		{ 
			cout<<nome[i]<<"\t"<<altura[i]<<"\t"<<endl;   
		} 
    }
    
    for (i=0; i<n; i++)
    {
    	if (altura[i]>=2) 
		{
			maiorAltura=altura[i];  
		}
	}
	cout<<"\n>> O Percentual de pessoas que tem a altura maior ou igual a 2 metros � de "<<(maiorAltura*100.0)/n<<"%.\n"<<endl;
	*/
}
    
