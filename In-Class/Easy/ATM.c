#include <stdio.h>

//โจทย์นี้ให้น้องๆ คิดว่าน้องๆ ควรแสดงผลอะไรให้พี่ๆ
//Hint โปรแกรมนี้คือ ATM ที่จะถอนเงินแบงค์ 1000 500 100 น้อยว่านั้นถอนไม่ได้
int main(void) {

	int money;
	int bankNote;

	printf("How much ur money: ");
	scanf("%d", &money);
	
	if (money >= 1000) {
		bankNote = money / 1000;
		money -= bankNote * 1000;
		printf("");
	}

	if (money >= 500) {
		bankNote = money / 500;
		money -= bankNote * 500;
		printf("");
	}

	if (money >= 100) {
		bankNote = money / 100;
		money -= bankNote * 100;
		printf("");
	}

	printf("cant calculate: %d THB\n", money);
}
