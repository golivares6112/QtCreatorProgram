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

template <class tipo>
tipo mayor(tipo dato1, tipo dato2)
{
    return (dato1 > dato2 ? dato1 : dato2);
}

//se define la clase de tipo T, definira a esta clase para que pueda
//ser de cualquier tipo
template <class T>
//se crea la clase coordenda, podra ser de tipo int, float, etc
class Coordenada
{
public:
    //definimos el constructor, en las clases de tipo T
    //se pueden definir sus funciones miembro fuera de la clase
    Coordenada(T x=0, T y=0);
    T getX(){return x;}
    T getY(){return y;}
    void setX(T x){this->x = x;}
    void setY(T y){this->y = y;}
    T getResult(){return this->x + this->y;}
private:
    //se deben definir sus miembros de tipo T ya que podran ser de cualquier tipo
    T x;
    T y;
    T result;
};

//la definicion del constructor se escribe fuera de la clase
template <class T>
Coordenada<T>::Coordenada(T x, T  y)
{
    this->x = x;
    this->y = y;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int ab = 10, ac = 12, at = 0;
    float bc = 1.8f, br = 1.5f, by = 0;

    Persona p1("Guillermo",36,"Olivares");
    Persona p2("Andres",40,"Zamora");
    Persona p3("La Vieja",36,"Arancibia");

    std::vector<Persona> lista;

    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);

    std::for_each(lista.begin(), lista.end(), ImprimirPersona);

    at = mayor(ab, ac);
    by = mayor(bc, br);

    std::cout<<"Valor de at : "<<at<<std::endl;
    std::cout<<"Valor de by : "<<by<<std::endl;

    Coordenada<int> cor(2, 5);
    Coordenada<float> cor2(2.6f, 5.9f);

    std::cout<<"Resultado Template Suma int :" <<cor.getResult()<<std::endl;
    std::cout<<"Resultado Template Suma float :" <<cor2.getResult()<<std::endl;

    return a.exec();
}
