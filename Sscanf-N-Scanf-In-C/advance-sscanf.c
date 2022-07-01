#include <stdio.h>

int main()
{
	char huy[30] ={0}, viet[30] = {0}, linh[30] = {0};
	char buffer[100] = "huyNgu nhu bo. va          vietdz vl, linhngu"; 
	sscanf(buffer,"%[a-zA-Z ]. va  %[^,],%s", huy, viet, linh);
	printf("Data: %s va %s va %s\n", huy, viet, linh);
	return 0;
}
