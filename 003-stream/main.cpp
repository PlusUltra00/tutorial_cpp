#include <iostream>

int main() {
	// output(出力)
	std::cout << "Hello, world!" << std::endl;

	// input(入力)
	int i;           // 変数を宣言
	std::cin >> i;   // cinを用いて出力

	// 一度に複数の出力を与えることも可能．
	std::cout << "入力されたのは" << i << "です。" << std::endl;

	// 一度に複数の入力を与えることも可能．
	int j, k, l;
	// if文により入力成功の判定
	if (std::cin >> j >> k >> l)
		// 入力成功
		std::cout << j << " " << k << " " << l << " " << std::endl;
	else
		// 入力失敗
		std::cout << "invaild input." << std::endl;
}