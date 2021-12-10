#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

std::fstream fin("cifra.in", std::ios::in);
std::fstream fout("cifra.out", std::ios::out);

int main(){
	int n; fin >> n;
	while(n--){
		int64_t x, s = 0; fin >> x;
		for(int i = 1; i<=x; i++){
			s += pow(i, i);
		}
		fout << s % 10 << endl;
	}
	return 0;
}
