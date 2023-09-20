//wap to convert an assembly program to object code using an opcode table and symbol table

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct optab
{
    char mnemonic[10];
    int opcode;
}optab[10];

struct symtab
{
    char symbol[10];
    int address;

}symtab[10];


int main()
{
    FILE *fp1,*fp2,*fp3;
    int locctr,startaddr,symcount=0,optabcount=0,found=0;
    char line[20],label[20],opcode[20],operand[20],symbol[20];
    fp1=fopen("input.txt","r");
    fp2=fopen("optab.txt","r");
    fp3=fopen("symtab.txt","w");
    fscanf(fp1,"%s %s %d",label,opcode,&startaddr);
    if(strcmp(opcode,"START")==0)
    {
        locctr=startaddr;
        printf("\t%s\t%s\t%d\n",label,opcode,startaddr);
        fscanf(fp1,"%s %s %s",label,opcode,operand);
    }
    else
    {
        locctr=0;
    }
    while(strcmp(opcode,"END")!=0)
    {
        printf("%d",locctr);
        if(strcmp(label,"**")!=0)
        {
            fprintf(fp3,"%s\t%d\n",label,locctr);
            strcpy(symtab[symcount].symbol,label);
            symtab[symcount].address=locctr;
            symcount++;
        }
        rewind(fp2);
        fscanf(fp2,"%s %d",optab[optabcount].mnemonic,&optab[optabcount].opcode);
        while(!feof(fp2))
        {
            if(strcmp(opcode,optab[optabcount].mnemonic)==0)
            {
                locctr+=3;
                found=1;
                break;
            }
            fscanf(fp2,"%s %d",optab[optabcount].mnemonic,&optab[optabcount].opcode);
        }
        if(found==0)
        {
            if(strcmp(opcode,"WORD")==0)
            {
                locctr+=3;
            }
            else if(strcmp(opcode,"RESW")==0)
            {
                locctr+=(3*(atoi(operand)));
            }
            else if(strcmp(opcode,"RESB")==0)
            {
                locctr+=(atoi(operand));
            }
            else if(strcmp(opcode,"BYTE")==0)
            {
                if(operand[0]=='X')
                {
                    locctr++;
                }
                else
                {
                    locctr+=strlen(operand)-3;
                }
            }
            else
            {
                printf("Invalid opcode");
                return 0;
            }
        }
        printf("\t%s\t%s\t%s\n",label,opcode,operand);
        found=0;
        fscanf(fp1,"%s %s %s",label,opcode,operand);
    }

    printf("%d\t%s\t%s\t%s\n",locctr,label,opcode,operand);
    printf("The contents of symbol table:\n");

    for(int i=0;i<symcount;i++)
    {
        printf("%s\t%d\n",symtab[i].symbol,symtab[i].address);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
