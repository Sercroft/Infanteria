#include<iostream>
#include<stdio.h>
#include<locale>

using namespace std;
int j=0, mujer=0, hombre=0, cant_curso=0, l=0, n2=0;
struct infanteria
{	
	string nombre, especialidad, curso, sexo;
}inf[1000];

struct cursos
{
	string nom_curso; int cantidad=0;
}c[1000];

int main()
{
	int z=1, op, n;
	setlocale(LC_ALL, "spanish");
	cout<<"Bienvenido al sistema de infanteria."<<endl<<endl;
	system("pause");
	system("cls");
	do
	{
		cout<<"1 -> Ver infantes"<<endl;
		cout<<"2 -> Crear curso"<<endl;
		cout<<"3 -> Inscribir infantes"<<endl;
		cout<<"4 -> Ver cursos"<<endl;
		cout<<"5 -> Salir"<<endl<<endl;
		cout<<"Digite su opción: ";
		cin>>op;
		switch(op)
		{
			case 1:
				system("cls");
				if(inf[0].curso.empty())
				{
					cout<<"No hay infantes."<<endl<<endl;
					system("pause");
					system("cls");
				}else
				{
					for(int i=0;i<j;i++)
					{
						cout<<"Infante "<<i+1<<endl<<endl;
						cout<<"Nombre: "<<inf[i].nombre<<endl;
						if(inf[i].sexo == "Masculino" or inf[i].sexo == "masculino" or inf[i].sexo == "M" or inf[i].sexo == "m")
						{
							cout<<"Sexo: Masculino"<<endl;
						}
						if(inf[i].sexo == "Femenino" or inf[i].sexo == "femenino" or inf[i].sexo == "F" or inf[i].sexo == "f")
						{
							cout<<"Sexo: Femenino"<<endl;
						}
						cout<<"Especialidad: "<<inf[i].especialidad<<endl;
						cout<<"Curso: "<<inf[i].curso<<endl;
						cout<<"-----------------------------------------------"<<endl;
					}
					system("pause");
					system("cls");
				}
			break;
			
			case 2:
				 system("cls");
				cout<<"Digite cuántos cursos desea crear: ";
				cin>>n;
				n2 = n2 + n;
				for(int i=0;i<n;i++)
				{
					cin.ignore();
					cout<<endl<<"Curso "<<l+1<<endl<<endl;
					cout<<"Nombre del curso: ";
					getline(cin,c[l].nom_curso);
					l++;
					cout<<"-----------------------------------------";
				}
				cout<<endl;
				system("pause");
				system("cls");
			break;
			
			case 3:
				system("cls");
				if(c[0].nom_curso.empty())
				{
					cout<<"Necesita primero crear un curso para inscribir a los infantes."<<endl<<endl;
					system("pause");
					system("cls");
				}else
				{
					cout<<"Digite cuántos infantes va a inscribir: ";
					cin>>n;cout<<endl;
					for(int i=0;i<n;i++)
					{
						cin.ignore();
						cout<<"Infante "<<j+1<<endl;
						cout<<"Nombre: ";
						getline(cin,inf[j].nombre);
						cout<<"Sexo (Masculino o Femenino): ";
						getline(cin,inf[j].sexo);
						if(inf[j].sexo == "Masculino" or inf[j].sexo == "masculino" or inf[j].sexo == "M" or inf[j].sexo == "m")
						{
							hombre = hombre + 1;
						}else
						{
							if(inf[j].sexo == "Femenino" or inf[j].sexo == "femenino" or inf[j].sexo == "F" or inf[j].sexo == "f")
							{
								mujer = mujer + 1;
							}
							else
							{
								cout<<"El sexo no existe."<<endl;
								system("pause");
								break;
							}
						}
						
						cout<<"Especialidad: ";
						getline(cin,inf[j].especialidad);
						cout<<"Cursos disponibles: "<<endl;
						string ce;
							for(int k=0;k<n2;k++)
							{
								cout<<c[k].nom_curso<<endl;
							}
						cout<<endl<<"Curso: ";
						getline(cin,inf[j].curso);
							for(int k=0;k<n2;k++)
							{
								ce = c[k].nom_curso;
								if(ce == inf[j].curso)
								{
									c[k].cantidad = c[k].cantidad + 1;
								}
							}
						j++;
						cout<<"----------------------------------------------------"<<endl;
					}
					system("cls");
				}    
				
			break;
			
			case 4:
				system("cls");
				if(c[0].nom_curso.empty())
				{
					cout<<"No hay cursos"<<endl<<endl;
					system("pause");
					system("cls");
				}else
				{
					for(int i=0;i<l;i++)
					{
						cout<<"Curso "<<i+1<<endl<<endl;
						cout<<"Nombre del curso: "<<c[i].nom_curso<<endl;
						cout<<"Infantes en el curso: "<<c[i].cantidad<<endl;
						cout<<"-----------------------------------------------"<<endl;
					}
					cout<<endl;
					system("pause");
					system("cls");
				}
			break;
			
			case 5:
				z=0;
				system("cls");
				cout<<"Programa finalizado.";
			break;
			
			default:
				cout<<"La ocpión no existe."<<endl;
				system("pause");
			break;
		}
	}while(z==1);	
	return 0;
}
