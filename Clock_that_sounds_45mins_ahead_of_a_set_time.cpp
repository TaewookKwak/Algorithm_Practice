#include <iostream>

int main()
{
	int H, M;
	scanf_s("%d %d", &H, &M);
	if(((0 <= H) && (23 >= H)) && ((0 <= M) && (59 >= M)))
	{ 
		if (M < 45){ 
			M = 60 - (45 - M);
			if (H == 0)
				H = 23;
			else
				H--;
			printf("%d %d", H, M);
		}
		else if (M >= 45)
		{
			M -= 45;
			printf("%d %d", H, M);
		}
	}
	

	return 0;
}