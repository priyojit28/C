#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#define MAX 1000
void bintodec();
void bintohex();
void bintooct();
void dectobin();
void dectohex();
void dectooct();
void hextobin();
void hextodec();
void hextooct();
void octtobin();
void octtodec();
void octtohex();
int main()
{
  int first_choice,second_choice;
  printf("\t\t\t\t\t**WELCOME**");
  printf("\n\t\t\t#----------NUMBER CONVERSION----------#\n");
  printf("--------------------------------------------------------------------------------------------------------------------");
  printf("\n\t\t\t*-----------------MENU--------------------*\n");
  printf("\nYOU WANT TO CONVERT FROM-\n");
  printf("\n1).BINARY\n2).DECIMAL\n3).HEXADECIMAL\n4).OCTAL\n5).EXIT\n");
  printf("\nENTER YOUR CHOICE: ");
	 scanf("%d",&first_choice);
  while(1)
	 {
	   switch(first_choice)
		     {
		       case 1:
		         {
			       printf("\n\nTO-\n");
			       printf("\n1).DECIMAL\n2).HEXADECIMAL\n3).OCTAL\n4).EXIT\n");
			       printf("\nENTER YOUR CHOICE: ");
				     scanf("%d",&second_choice);
			       if(second_choice==1)
					      {
                            bintodec();
					      }
                   else if(second_choice==2)
                          {
                            bintohex();
                          }
                   else if(second_choice==3)
                          {
                            bintooct();
                          }
                   else if(second_choice==4)
                          {
                            exit(4);
                          }
                   else
                            printf("INVALID INPUT!!!");
               }
                 break;
            case 2:
                      {
                        printf("\nTO-\n");
			            printf("\n1).BINARY\n2).HEXADECIMAL\n3).OCTAL\n4).EXIT\n");
			            printf("\nENTER YOUR CHOICE: ");
				               scanf("%d",&second_choice);
			            if(second_choice==1)
                           {
                            dectobin();
                           }
                       else if(second_choice==2)
                           {
                             dectohex();
                           }
                       else if(second_choice==3)
                           {
                             dectooct();
                           }
                       else if(second_choice==4)
                           {
                             exit(4);
                           }
                       else
                             printf("INVALID INPUT!!!");
		            }
                 break;
            case 3:
                      {
                        printf("\nTO-\n");
			            printf("\n1).BINARY\n2).DECIMAL\n3).OCTAL\n4).EXIT\n");
			            printf("\nENTER YOUR CHOICE: ");
				               scanf("%d",&second_choice);
			            if(second_choice==1)
                           {
                            hextobin();
                           }
                       else if(second_choice==2)
                           {
                             hextodec();
                           }
                       else if(second_choice==3)
                           {
                             hextooct();
                           }
                       else if(second_choice==4)
                           {
                             exit(4);
                           }
                       else
                             printf("INVALID INPUT!!!");
		            }
                 break;
            case 4:
                      {
                        printf("\nTO-\n");
			            printf("\n1).BINARY\n2).DECIMAL\n3).HEXADECIMAL\n4).EXIT\n");
			            printf("\nENTER YOUR CHOICE: ");
				               scanf("%d",&second_choice);
			            if(second_choice==1)
                           {
                            octtobin();
                           }
                       else if(second_choice==2)
                           {
                             octtodec();
                           }
                       else if(second_choice==3)
                           {
                             octtohex();
                           }
                       else if(second_choice==4)
                           {
                             exit(4);
                           }
                       else
                             printf("INVALID INPUT!!!");
		            }
                 break;
             default:
                     printf("WRONG CHOICE!!!");
		     }
	 }
}
void bintodec()
     {
       int b,binary,decimal,base=1,rem;
       printf("ENTER THE BINARY NUMBERE: ");
              scanf("%d",&binary);
        b=binary;
        while(binary>0)
            {
             rem=binary%10;
             decimal=decimal+rem*base;
             binary=binary/10;
             base=base*2;
            }
        printf("EQUIVALENT DECIMAL VALUE OF %d is %d",b,decimal);
    }
void bintohex()
     {
      long int binaryval,hexadecimalval=0,i=1,remainder;
      printf("ENTER THE BINARY NUMBERE: ");
      scanf("%ld", &binaryval);
      while(binaryval!= 0)
           {
            remainder=binaryval%10;
            hexadecimalval=hexadecimalval+remainder*i;
            i=i*2;
            binaryval=binaryval/10;
          }
      printf("EQUIVALENT HEXADECIMAL VALUE OF %ld is %lx",binaryval,hexadecimalval);
    }
void bintooct()
     {
       int octal=0,j=1,binary,rem;
       printf("ENTER THE BINARY NUMBERE: ");
             scanf("%d",&binary);
       while (binary!= 0)
             {
              rem=binary%10;
              octal=octal+rem*j;
              j=j*2;
              binary=binary/10;
             }
       printf("EQUIVALENT OCTAL VALUE OF %d is %d",binary,octal);
    }
void dectobin()
     {
        int decimal,b=0,d,base=1,rem;
        printf("ENTER THE DECIMAL NUMBERE: ");
             scanf("%d",&decimal);
        d=decimal;
        while(decimal>0)
             {
               rem=decimal%2;
               b=b+rem*base;
               base=base*10;
               decimal=decimal/2;
             }
       printf("EQUIVALENT BINARY VALUE OF %d is %d",d,b);
     }
void dectohex()
     {
       int decimal,quotient,rem;
       int i,j=0;
       char hexadecimal[100];
       printf("ENTER THE DECIMAL NUMBERE: ");
             scanf("%d",&decimal);
       quotient=decimal;
       while(quotient!=0)
             {
               rem=quotient%16;
               if (rem<10)
                   hexadecimal[j++]=48+rem;
               else
                   hexadecimal[j++]=55+rem;
               quotient=quotient/16;
            }
      printf("EQUIVALENT HEXADECIMAL VALUE OF %d is ",decimal);
      for(i=j;i>=0;i--)
          printf("%c",hexadecimal[i]);
     }
void dectooct()
     {
         int decimal,d,octal=0,i=1;
         printf("ENTER THE DECIMAL NUMBERE: ");
             scanf("%d",&decimal);
         d=decimal;
         while(decimal!=0)
              {
               octal+=(decimal%8)*i;
               decimal/=8;
               i*=10;
              }
        printf("EQUIVALENT OCTAL VALUE OF %d is %d",d,octal);
     }

void hextobin()
     {
       char binary[MAX],hexa[MAX];
       long int i=0;
       printf("ENTER THE HEXADECIMAL NUMBERE: ");
             scanf("%s",&hexa);
    printf("EQUIVALENT BINARY VALUE OF %s is %d",hexa,binary);
    while(hexa[i])
          {
           switch(hexa[i])
               {
                  case '0':
                           printf("0000");
                           break;
                  case '1':
                           printf("0001");
                           break;
                  case '2':
                           printf("0010");
                           break;
                  case '3':
                           printf("0011");
                           break;
                  case '4':
                           printf("0100");
                           break;
                  case '5':
                           printf("0101");
                           break;
                  case '6':
                           printf("0110");
                           break;
                  case '7':
                           printf("0111");
                           break;
                  case '8':
                           printf("1000");
                           break;
                  case '9':
                           printf("1001");
                           break;
                  case 'A':
                           printf("1010");
                           break;
                  case 'B':
                           printf("1011");
                           break;
                  case 'C':
                           printf("1100");
                           break;
                  case 'D':
                           printf("1101");
                           break;
                  case 'E':
                           printf("1110");
                           break;
                  case 'F':
                           printf("1111");
                           break;
                  case 'a':
                           printf("1010");
                           break;
                  case 'b':
                           printf("1011");
                           break;
                  case 'c':
                           printf("1100");
                           break;
                  case 'd':
                           printf("1101");
                           break;
                  case 'e':
                           printf("1110");
                           break;
                  case 'f':
                           printf("1111");
                           break;
                 default:
                           printf("INVALID INPUT!!!");

               }
                i++;
          }
      }
void hextodec()
     {
       char hexa[17];
       long long decimal,place;
       int i=0,val,len;
       decimal=0;
       place=1;
       printf("ENTER THE HEXADECIMAL NUMBERE: ");
              scanf("%s",&hexa);
      len=strlen(hexa);
      len--;
      for(i=0;hexa[i]!='\0';i++)
             {
               if(hexa[i]>='0' && hexa[i]<='9')
                      {
                        val=hexa[i]-48;
                      }
               else if(hexa[i]>='a' && hexa[i]<='f')
                      {
                        val=hexa[i]-97+10;
                      }
               else if(hexa[i]>='A' && hexa[i]<='F')
                      {
                        val=hexa[i]-65+10;
                      }
               decimal+=val*pow(16,len);
                      len--;
             }
         printf("EQUIVALENT DECIMAL VALUE OF %s is %lld",hexa,decimal);
    }
void hextooct()
     {
       char hex[17];
       long long octal,bin,place;
       int i=0,rem,val;
    printf("ENTER THE HEXADECIMAL NUMBERE: ");
           scanf("%s",&hex);
    octal = 0ll;
    bin = 0ll;
    place = 0ll;
    for(i=0;hex[i]!='\0'; i++)
       {
        bin=bin*place;
        switch(hex[i])
             {
               case '0':
                        bin += 0;
                        break;
               case '1':
                        bin += 1;
                        break;
               case '2':
                        bin += 10;
                        break;
               case '3':
                        bin += 11;
                        break;
               case '4':
                        bin += 100;
                        break;
               case '5':
                        bin += 101;
                        break;
               case '6':
                        bin += 110;
                        break;
               case '7':
                        bin += 111;
                        break;
               case '8':
                        bin += 1000;
                        break;
               case '9':
                        bin += 1001;
                        break;
               case 'a':
               case 'A':
                        bin += 1010;
                        break;
               case 'b':
               case 'B':
                        bin += 1011;
                        break;
               case 'c':
               case 'C':
                        bin += 1100;
                        break;
               case 'd':
               case 'D':
                        bin += 1101;
                        break;
               case 'e':
               case 'E':
                        bin += 1110;
                        break;
               case 'f':
               case 'F':
                        bin += 1111;
                        break;
               default:
                printf("INVALID INPUT!!!");
        }

        place=10000;
    }
    place = 1;
    while(bin > 0)
        {
           rem=bin%1000;
           switch(rem)
                 {
                  case 0:
                          val = 0;
                          break;
                  case 1:
                          val = 1;
                          break;
                  case 10:
                          val = 2;
                          break;
                  case 11:
                          val = 3;
                          break;
                  case 100:
                          val = 4;
                          break;
                  case 101:
                          val = 5;
                          break;
                  case 110:
                          val = 6;
                          break;
                  case 111:
                          val = 7;
                          break;
                }
        octal=(val*place)+octal;
        bin/= 1000;
        place*=10;
     }
    printf("EQUIVALENT DECIMAL VALUE OF %s is %lld",hex,octal);
}
void octtobin()
     {
        char octalnum[MAX];
    long i = 0;
    printf("ENTER THE OCTAL NUMBERE: ");
           scanf("%s",octalnum);
    printf("EQUIVALENT BINARY VALUE OF %s is ",octalnum);
    while (octalnum[i])
          {
            switch(octalnum[i])
                  {
                   case '0':
                            printf("000");
                            break;
                   case '1':
                            printf("001");
                            break;
                   case '2':
                            printf("010");
                            break;
                   case '3':
                            printf("011");
                            break;
                   case '4':
                            printf("100");
                            break;
                   case '5':
                            printf("101");
                            break;
                   case '6':
                            printf("110");
                            break;
                   case '7':
                            printf("111");
                            break;
                   default:
                            printf("INVALID INPUT!!!");
                }
                   i++;
         }
     }
void octtodec()
     {
       long int octal, decimal = 0;
       int i=0;
       printf("ENTER THE OCTAL NUMBERE: ");
              scanf("%ld", &octal);
       while(octal!=0)
             {
              decimal= decimal+(octal%10)*pow(8,i++);
              octal=octal/10;
             }
       printf("EQUIVALENT DECIMAL VALUE OF %ld is %ld",octal,decimal);
    }
void octtohex()
     {
        int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
        long long octal, tempOctal, binary, place;
        char hex[65] = "";
        int rem;
        place=1;
        binary=0;
        printf("ENTER THE OCTAL NUMBERE: ");
               scanf("%lld",&octal);
        tempOctal=octal;
        while(tempOctal > 0)
             {
              rem=tempOctal%10;
              binary=(OCTALVALUES[rem]*place)+binary;
              tempOctal/=10;
              place *=1000;
             }
        while(binary>0)
             {
               rem=binary%10000;
               switch(rem)
                         {
                          case 0:
                                 strcat(hex, "0");
                                 break;
                          case 1:
                                 strcat(hex, "1");
                                 break;
                          case 10:
                                 strcat(hex, "2");
                                 break;
                          case 11:
                                 strcat(hex, "3");
                                 break;
                          case 100:
                                 strcat(hex, "4");
                                 break;
                          case 101:
                                 strcat(hex, "5");
                                 break;
                          case 110:
                                 strcat(hex, "6");
                                 break;
                          case 111:
                                 strcat(hex, "7");
                                 break;
                          case 1000:
                                 strcat(hex, "8");
                                 break;
                          case 1001:
                                 strcat(hex, "9");
                                 break;
                          case 1010:
                                 strcat(hex, "A");
                                 break;
                          case 1011:
                                 strcat(hex, "B");
                                 break;
                          case 1100:
                                 strcat(hex, "C");
                                 break;
                          case 1101:
                                 strcat(hex, "D");
                                 break;
                          case 1110:
                                 strcat(hex, "E");
                                 break;
                          case 1111:
                                 strcat(hex, "F");
                                 break;
                        }
           binary/=10000;
        }
    strrev(hex);
    printf("EQUIVALENT HEXADECIMAL VALUE OF %lld is %s",octal,hex);
}

