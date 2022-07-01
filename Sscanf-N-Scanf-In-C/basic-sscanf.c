#include <stdio.h>

int main()
{
	char huy[30] ={0}, viet[30] = {0};
	char buffer[100] = "huyNgu va vietdz"; 
	sscanf(buffer,"%s va %s", huy, viet);
	printf("Data: %s va %s\n", huy, viet);
	return 0;
}
