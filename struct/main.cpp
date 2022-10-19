// struct (構造体)はいわゆるデータセットである．
// 例えばゲームを作るとき，キャラクターの体力，攻撃力，防御力などを以下のように定義するとする．
/*
	int HP      = 100;
	int Attack  = 20;
	int defence = 20;
*/
// キャラクターが2体に増えたとすると，次のように書く必要がある．
/*
	int HP_1      = 100;
	int Attack_1  = 20;
	int Defence_1 = 20;

	int HP_2      = 120;
	int Attack_2  = 15;
	int Defence_2 = 20;
*/
// これが3体，4体と増えていくと記述量がそれに応じて増え，また，変数がたくさん増えるため，HPとAttackとDefenceをまとめたものがほしい．
// これを可能にするのが struct である．

struct Charactor {
	int HP;
	int Attack;
	int Defence;
};

int main() {
	// 上のコードに相当する記述．
	Charactor charactor1 = {100, 20, 20};
	Charactor charactor2 = {120, 15, 20};

	// chara1 の HP にアクセスする．ドットを用いてアクセスできる．
	charactor1.HP = 120;

	// chara1 と同じ能力をもつchara3を作成する．
	Charactor charactor3 = charactor1;
	
	// 捕捉
	Charactor charactor4 = {};       // HP, Attack, Defence全て0
	Charactor charactor5 = {100, 20};// HP = 100, Attack = 20, Defence = 0 で初期化．
}