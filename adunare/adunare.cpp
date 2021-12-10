#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

std::fstream fin("adunare.in", std::ios::in);
std::fstream fout("adunare.out", std::ios::out);

int main(){
	int64_t a, b; fin >> a >> b;
	fout << a + b;
	return 0;
}
