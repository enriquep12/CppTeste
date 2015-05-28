#include <iostream>
using namespace std;
class Teste {
    public:
        Teste();
        int x;
        char *txt;
    private:
        int y;
    protected:
        int z;
};
Teste::Teste(){ x = 0;}
int main(){
    Teste t;
    cout<<"Insira o valor de TXT: ";
    //t.x = 12;
    cin >> t.txt;
    cout<<"Valor Inserido = "<<t.txt<<endl;
    return 0;
}
