#include <iostream>

int main() {
	// if 文
	// if (条件A) {
	//		処理A
	// }
	// else if (条件B)
	//		処理B
	// }
	// else {
	//		処理C
	// }

	// 上記のコードは条件Aに当てはまった時に処理A,
	// 条件Bに当てはまった時は処理B,
	// それ以外であれば処理Cを行う．

	// 整数を入力で受け取る．
	int i;
	std::cin >> i;

	if (i > 100) {
		// 100より大きい
		std::cout << "Large" << std::endl;
	}
	else if (i > 0) {
		// 100以下かつ0より大きい
		std::cout << "Small" << std::endl;
	}
	else {
		// 負の数
		std::cout << "Negative number" << std::endl;
	}

	// for 文
	// 処理を一定回数繰り返すときに用いられる．
	// 下の例では i を 0 で初期化したのち，i に 1 を足しながら出力する動作を 10 回繰り返す．
	// int i = 0; でループ用の変数 i を初期化
	// ++i でループが1回終わるごとに i に1を加える．
	// i < 10; で i の範囲を指定します．10より小さい時だけループを継続するという書き方になります．
	for (int i = 0; i < 10; ++i) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	// while 文 ()内の条件文がfalse(偽)になるまで無限にループする．
	// フラグ flag の作成
	// tmp に値を入力
	// 入力成功 → 入力の値が10以上ならループ終了
	// 入力失敗 → エラーメッセージを出力し，ループを終了
	// while 文は容易に無限ループを起こしやすい．

	bool flag = true;
	while (flag) {
		int tmp;
		if (std::cin >> tmp) {
			// 入力成功
			if (tmp > 10) {
				flag = false;
			}
			else {
				continue;  // ループの先頭に戻る
			}
		}
		else {
			// 入力失敗
			std::cout << "invalid input" << std::endl;
			break;  // ループを終了させる．
		}
	}
}