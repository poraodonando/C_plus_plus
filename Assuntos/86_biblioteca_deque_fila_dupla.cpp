/*
    podemos inserir e retirar tanto o incio como no fim
        -pode ser acessado de ambos os lados
    pode trabalhar com o iterator
*/

#include <iostream>
#include <deque>

using namespace std;

void linha(int tam, string txt);
void impd(deque<int>d);


int main(){

    deque<int> dq1;
    deque<int> dq2 (10,5);
    deque<int> dq3 (dq2);
    deque<int> dq4 = {0,1,2,3,4,5,6,7,8,9};

    for(auto it = dq4.begin(); it != dq4.end() ;it++){
        cout << *it << " ";
    }
    cout << endl;

    //linha(50, "Capacidade");
    cout << "Tamanho atual: " << dq4.size()<< endl;
    cout << "Capacidade m�xima: " << dq4.max_size() << endl;
    dq4.resize(15,10);// Altera o tamanho para 15 e preenche os novos espa�os com o numero 10
    cout << "Capacidade alterada: " << dq4.size() << endl;
    dq4.resize(20); // Altera o tamanho para 20 e preenche os novos espa�os com o numeral 0
    cout << "Capacidade alterada novamente: " << dq4.size() << endl;
    //impd(dq4);

    cout << endl;

    linha(50, "Acesso");
    cout << "Terceiro elemento: " <<dq4[2] << endl;
    cout << "Quarto elemento: " << dq4.at(3) << endl;
    cout <<  "Primeiro elemento: " << dq4.front() << endl;
    cout << "Ultimo elemento: " << dq4.back() << endl;

    cout << endl;

    linha(50,"Modificadores");
    //Atribui novos elementos substituindo os valores atuais por 10 numerais 0
    dq4.assign(10,0);
    impd(dq2);
    cout << endl;

    dq2.assign(dq4.begin(), dq4.end());
    impd(dq2);
    cout << endl;

    dq2.push_back(99);
    impd(dq2);
    cout << endl;

    dq2.pop_front();
    impd(dq2);
    cout << endl;

    //dq2.pop_back();
    //dq2.pop_front();
    cout << endl;

    deque<int>::iterator it;
    it = dq2.begin()+5;
    dq2.insert(it,77);
    impd(dq2);

   return 0;
}


void linha(int tam, string txt){
    cout << "\n\n--" << txt << " " ;
    for(int i = 0; i<tam; i++ ){
        cout << "-";
    }
    cout << endl;
}

void impd(deque<int> d){
    for( auto x: d){
        cout << x << " ";
    }
}
