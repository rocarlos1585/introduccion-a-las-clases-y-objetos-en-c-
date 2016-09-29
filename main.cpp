#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::getline;

class LibroCalificaciones{
private:string nombreCurso;
        int numeroDeSemestre;

public:
        void setNombreCurso(string nombre){
            nombreCurso=nombre;
        }

        string getNombreCurso(){
        return nombreCurso;
        }

        void setSemestre(int numeroSemestre){
            numeroDeSemestre=numeroSemestre;
        }

        int getSemestre(){
            return numeroDeSemestre;
        }

        void imprimirMensaje(){
        cout<<"Bienvenido al Libro de Calificaciones para "<<getNombreCurso()<<" del semestre "<<getSemestre()<<endl;
        }
};

int main(){

    string curso;
    int semestre;

    LibroCalificaciones miLibroCalificaciones;

    cout<<"Ingrese el nombre del curso:"<<endl;
    getline(cin, curso);
    miLibroCalificaciones.setNombreCurso(curso);

    cout<<"ingrese el semestre:"<<endl;
    cin>>semestre;
    miLibroCalificaciones.setSemestre(semestre);
    cout<<endl;

    miLibroCalificaciones.imprimirMensaje();
    return 0;
}
