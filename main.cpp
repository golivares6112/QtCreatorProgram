#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algorithm>

struct Persona
{
    std::string name;
    int age;
    std::string dir;

    Persona(std::string n, int a, std::string d)
        :name(n),
         age(a),
         dir(d)
    {
    }
};

void ImprimirPersona(const Persona &p)
{
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Nombre      : "<<p.name<<std::endl;
    std::cout<<"Age         : "<<p.age<<std::endl;
    std::cout<<"Direccion   : "<<p.dir<<std::endl;


}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Persona p1("Guillermo",36,"Olivares");
    Persona p2("Andres",40,"Zamora");
    Persona p3("La Vieja",36,"Arancibia");

    std::vector<Persona> lista;

    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);

    std::for_each(lista.begin(), lista.end(), ImprimirPersona);


    return a.exec();
}
