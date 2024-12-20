#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char buffer[20];
    char listing_line[200];
    int starting_address=0;

    FILE *input_file;
    input_file=fopen("input.txt","r");
    if(input_file==NULL){
        printf("ERROR!FILE NOT FOUND");
        exit(0);
    }

    fseek(input_file, 9,SEEK_SET);
    fgets(buffer, 7,input_file);
    starting_address = strtol(buffer, NULL, 16);
    printf("starting address=%X",starting_address);
    printf("\n\n");

    rewind(input_file);
    fscanf(input_file,"%s",listing_line);

    while(listing_line[0]!='E'){
        if(listing_line[0]=='T'){
           int line_length=strlen(listing_line);
           for(int i=12; i<line_length;i++){
            if(listing_line[i]=='^'){
                continue;
            }
            printf("%X : %c%c\n",starting_address,listing_line[i],listing_line[i+1]);
            i++;
            starting_address++;
           } printf("\n");
        }
        fscanf(input_file,"%s",listing_line);
    }
}
