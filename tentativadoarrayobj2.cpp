#include <iostream>
using namespace std;

class ClasseDoMetodoRepeticao{
	int i, j, n;
	int valor[5];
	public:
		metodorepeticao(int valor[5]);
};

int ClasseDoMetodoRepeticao:: metodorepeticao(int valor[5]){
	
	for(i = 0; i < 5; i++){
		cout << "Digite os valores:" << endl;
		cin >> valor[i];		
}
for(i=0; i <5; i++){
	for(j=i; j<5; j++){
	
			if(valor[i] == valor[j]){
					if(i!= j){
				cout << "os numeros repetidos " << valor[i] << " na posicao " << i << " e " << j << endl;
		}
	}
}
}
}

int main(){
	int valor[5];
	ClasseDoMetodoRepeticao NumeroRepetido;
	NumeroRepetido.metodorepeticao(valor);
	
	
return 0;
}
