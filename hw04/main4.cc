#include <cstdio>
#include <string.h>

int main(){
	
	FILE* fp = fopen("example.wav", "rb");
	
	//reads the header
	char riff[5]; //position 1- 4
	riff[4] = '\0';
	fread(riff, sizeof(char),4,fp);
	//printf("%s" ,riff);
	
	int space; //position 5 -8
	fread(&space, sizeof(int),1,fp);
	//printf("%d\n",space);
	
	char wave[5]; //posiion 9 - 12
	wave[4] = '\0';
	fread(wave,sizeof(char),4,fp);
	//printf("%s\n" ,wave);
	
	while(true){
		
		int stopper;
		
		//format chunk marker
		char fourcc[5]; //position 13 - 16
		fourcc[4] = '\0';
		stopper = fread(fourcc, sizeof(char),4,fp);
		printf("FOURCC: %s\n", fourcc);
		
		if(stopper==0){
			break;
		}
		
		unsigned int size; //size of chunk
		fread (&size,sizeof(size),1,fp);
		
		unsigned char content[size];
		fread(content,sizeof(char),size,fp);
		printf("Content: %u\n",content);
		
		if(!strncmp(fourcc, "fmt",4)){
			
			short format = *((short*)(content+0));
			short nchannels = *((short*)(content+2));
			
		}
		
		unsigned char format[2];
		//format[2] = '\0';
		fread(format,sizeof(char),2,fp);
		printf("Format: %u \n",format);
		
		unsigned char nchannels[2];
		//nchannels[2] = '\0';
		fread(nchannels,sizeof(char),2,fp);
		printf("# of channels: %u \n",nchannels);
		
		unsigned char rate[4];
		//rate[4] = '\0';
		fread(rate, sizeof(char),4,fp);
		printf("Rate: %s\n", rate);
		
		unsigned char byteRate[4];
		//byteRate[4] = '\0';
		fread(byteRate, sizeof(char),4,fp);
		printf("Byte rate: %s\n", byteRate);
		
		unsigned char align[2];
		//align[2] = '\0';
		fread(align,sizeof(char),2,fp);
		printf("Align: %u \n",align);
		
		unsigned char bits[2];
		//bits[2] = '\0';
		fread(bits,sizeof(char),2,fp);
		printf("Bits Per Sample: %u \n",bits);
		
		
	}
	
	fclose(fp);
}