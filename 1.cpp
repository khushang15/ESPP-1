#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int login(int name, int pass);
int home();
int info();
int verify();
int call();
int about();

int login(int name, int pass)
{
	char a[10], b[10];
	int len, n=1;
	char ch;
	
	printf("Enter User ID and Password\n");
	printf("Enter Your User ID : \n");
	scanf("%s",&a);
	printf("Enter Your Password : \n");
	scanf("%s",&b);
	len=strcmp(a,b);
	do
	{
		if(len==0)
		{
			home();
			break;
		}
		else
		{
			printf("You have entered incorrect User ID or Password, pls try again");
			break;
		}
	}
	while(ch=='Y' || ch=='y');
}

int home()
{
	int choice;
	printf("*****************************************************************************\n");
	printf("Press <1> for Storing information\n");
	printf("Press <2> for Verification of Details.\n");
	printf("Press <3> for Calling person\n");
	printf("Press <4> for Knowing about Whatsapp Call\n");
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	printf("******************************************************************************\n");
	if(choice==1)
	{
		info();
	}
	else if(choice==2)
	{
		verify();
	}
	else if(choice==3)
	{
		call();
	}
	else if(choice==4)
	{
		about();
	}
	
}

char i, details[30], name[30],mail[30], mobile[30],address[30], date[30];
int info()
{
	char ch;
     do{
		printf("Enter Valid Details : \n");
		gets(details);
		fflush;
	
		printf("Enter your Name : \n");
		gets(name);
		fflush;
	
		printf("Enter your Mobile-No : \n");
		gets(mobile);
		fflush;
	
		printf("Enter your E-Mail : \n");
		gets(mail);
		fflush;
		
		printf("Enter your Address : \n");
		gets(address);
		fflush;
		
		printf("Enter your Birth-Date : \n");
		gets(date);
		fflush;  
	 
	    home();
     
    }
	 while(ch=='Y'||ch=='y');
	 home();
}

 int verify()
{
		printf("Name :%s\n",&name[i]);
		fflush;
		printf("Email-ID :%s\n",&mail[i]);
		fflush;
		printf("Mobile-No. :%s\n",&mobile[i]);
		fflush;
		printf("Address :%s\n",&address[i]);
		fflush;
		printf("Birth-Date:%s\n",&date[i]);
		fflush;
	
		home();
}
int call()
{  int z;
     	
		 printf("Which positioned person do you want to talk with Aditya, Aayush, Arjun, Dhoni, Harsh, Harshil, Rohit, Priten, Virat, Yash\n");
     	   scanf ("%d",&z);
     	
     	switch(z)  {
		 
     		case (1):
     			printf("CALLING.....Aditya\n");
     			break;
     			
     				case (2):
     			    printf("CALLING.....Aayush\n");
     			    break;
     			
     				 case (3):
     			     printf("CALLING.....Arjun\n");
     			    break;
     				     
					
				        case (4):
     		          	printf("CALLING.....Dhoni\n");
     		         	break;
     				     
						   case (5):
     			           printf("CALLING.....Harsh\n");
     			           break;
     			
     				         case (6):
     			             printf("CALLING.....Harshil\n");
     			             break;
     			
     				           case (7):
     			               printf("CALLING.....Rohit\n");
     			               break;
     			
     				             case (8):
     			                 printf("CALLING.....Priten\n");
     			                 break;
     			
     			                  	case (9):
     		                    	printf("CALLING.....Virat\n");
     		                    	break;
     			
     			                    	case (10):
     			                        printf("CALLING.....Yash\n");
		                                break;
		}
        
}
 int about()
{
       printf("Why WhatsApp call in the first place? It is important to note that the fundamental telephone technology has barely changed since the 19th Century.The internet has been around for a while and it has come a really long way.Services like WhatsApp already use the internet to carry your images, videos, voice notes between you and your chats. WhatsApp relies on low latency internet and deploys VoIP which, simply stated, means using the Internet to make and receive telephone calls, hence WhatsApp Call\n");
       
}
int main()
{
	char j,k;
	printf("====================WHATSAPP-CALLS======================================================================================\n");
	printf("====================CREATED-----BY======================================================================================\n");
	printf("====================KHUSHANG-PATEL======================================================================================\n");
	
	login(j,k);
    
	return 0;
}
