#include<stdio.h>

main()
{
	int ne;
	printf("êºóÔÇì¸óÕ:");
	scanf("%d,",&ne);
	if(ne>=1926){
		if (ne >= 1989) {
			if (ne >= 2019) {
				printf("óﬂòaê∂Ç‹ÇÍÇ≈Ç∑\n");
			}
			else {
				printf("ïΩê¨ê∂Ç‹ÇÍÇ≈Ç∑\n");
			}
			printf("è∫òaê∂Ç‹ÇÍÇ≈Ç∑\n");
		}
	}
	else{
		printf("ëÂê≥ê∂Ç‹ÇÍÇ≈Ç∑\n");
	}
	printf("åªç› %dçŒÇ≈Ç∑", 2024 - ne);
}