#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::getline;

class LibroCalificaciones{
public:void imprimirMensaje(string curso, int semestre){
        cout<<"Bienvenido al Libro de Calificaciones para "<<curso<<" del semestre "<<semestre<<endl;
    }
};

int main(){
    string curso;
    int semestre;

    LibroCalificaciones miLibroCalificaciones;

    cout<<"Ingrese el nombre del curso:"<<endl;
    getline(cin, curso);
    cout<<"ingrese el semestre:"<<endl;
    cin>>semestre;
    cout<<endl;

    miLibroCalificaciones.imprimirMensaje(curso, semestre);
    return 0;
}
