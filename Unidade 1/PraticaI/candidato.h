#ifndef CANDIDATO_H
#define CANDIDATO_H
#include <string>
using namespace std;

class Candidato{

public:
    string nome, sobrenome;
    float nota;
    Candidato(string linha);

    void setNome(string nome);
    void setSobrenome(string sobrenome);
    void setNota(float nota);

    string getNome();
    string getSobrenome();
    float getNota();

    string toString();
    bool igual(string n, string s);

};

#endif // CANDIDATO_H