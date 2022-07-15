/* Matematik ve Fizik olmak üzere iki ders için beş kişilik bir öğrenci grubunun ortalama notlarını 
bulmaya çalışalım. Bunu yapmak için, dereceler(grades) adında iki boyutlu bir dizi kullanıyoruz. 
Matematiğe karşılık gelen işaretler ilk satırda grades[0], Fizik'e karşılık gelen işaretler ise ikinci satırda
grades[1] saklanacaktır . Bu programı çalıştırabilmeniz için aşağıdaki adımları tamamlayın. 

>> Notları iki boyutlu bir tamsayı dizisi olarak bildirin
>> Sonlandırma koşullarını belirterek for döngülerini tamamlayın
>> Her konuda elde edilen ortalama notları hesaplayın

*/

#include <stdio.h>

	int main() {
		int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) {
			average = 0;
			
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}