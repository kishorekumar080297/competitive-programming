#include <stdio.h>
#include <stdlib.h>
struct CpuInfo {
	char vendor_id[50];
	int family;
	char model[50];
	float freq;
	char cache[20];
}
int main()
{
	struct CpuInfo info = {"", 0, "", 0.0, ""};
	
	FILE *cpuInfo;
	
	if( ( cpuInfo = fopen("/proc/cpuinfo", "rb") == NULL ) ) {
		printf("ERRORE! Impossibile aprire il file relativo alla CPU.");
		}
	else {
		while (!feof(cpuInfo)) {
			fread(&info, sizeof(struct CpuInfo), 1, cpuInfo);
			
			if(info.family !=0) {
				printf("%s\n%d\n%s\n%.2f\n%s\n", info.vendor_id, info.family, info.model, info.freq, info.cache);
				}
			}
		}
return 0;
}
