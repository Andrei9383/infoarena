#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

std::fstream fin("fact.in", std::ios::in);
std::fstream fout("fact.out", std::ios::out);

int main(){
	int64_t p, n, a = 1; fin >> p;
	for(int i = 1; i<=p; i++){
		a *= (a + 1);
		if(a % (int)pow(10, p) == 0){
			fout << a;
			return 0;
		}
	}
	return 0;
}
