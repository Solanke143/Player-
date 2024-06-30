#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Players
{
	int jersey_no;
	char name[100];
	int No_of_matches;
	int runs;
	int wickets;
}players;								//players structure end
void storeplayers(players*,int);
void display(players*,int);
void search(players*,int);
void max(players*,int);
void update(players*,int);
void deleterecord(players*,int*);
void topplayers(players*,int);

void main()
{
	int n=5;
    int ch;
    players* pl =(players*)malloc(n*sizeof(players));				//create player array with size no. on a heap memory using malloc
   
    storeplayers(pl,n);												//store details of players
    
    do
    {
    	printf("---------Enter the choice from below list-------\n");
   	    printf(" 1 for display \n");
   	    printf(" 2 for search \n");
   	    printf(" 3 for max \n");
   	    printf(" 4 for update \n");
   	    printf(" 5 for deleterecord \n");
   	    printf(" 6 for topplayers \n");
   	    printf(" 7 for Exits \n");
   	
   	    printf("\nEnter the choice:");
   	    scanf("%d",&ch);
        switch(ch)
        {
	   		case 1:
				display(pl,n);
	   			break;
	   		
	   		case 2:
			  	search(pl,n);
	   			break;
	
	   		case 3:
				max(pl,n);
	   			break;
	   		
	   		case 4:
				update(pl,n);
	   			break;
	   		
	   		case 5:
				deleterecord(pl,&n);
	   			break;
	   			
	   		case 6:
			    topplayers(pl,n);
	   			break;
	   			
	   		case 7:
	   			printf("-----End of the Program------\n");
	   			break;	
				   	
	   		default:
	   			printf("\n Enter the valid choice :");
	   			break;
	   		
	   	}
	}
   while(ch!=7);
  
}
void storeplayers(players* pl,int n)           
{
	int i;
	
	for(i=0;i<n;i++)
	{
		
		
//		printf("\nEnter the jersey number");
//		scanf("%d",&pl[i].jersey_no);
//		
//		printf("\nEnter the name of player");
//		scanf("%s",&pl[i].name);
//			
//		printf("\nEnter the number of matches");
//		scanf("%d",&pl[i].No_of_matches);
//		
//		printf("\nEnter the number of run");
//		scanf("%d",&pl[i].runs);
//		
//		printf("\nEnter the no of wickets");
//		scanf("%d",&pl[i].wickets);
		
	}
	pl[0].jersey_no=18;
	strcpy(pl[0].name,"Smiti");
	pl[0].No_of_matches=700;
	pl[0].runs=18000;
	pl[0].wickets=50;
	
	pl[1].jersey_no=45;
	strcpy(pl[1].name,"Renuka");
    pl[1].No_of_matches=600;;
	pl[1].runs=15000;
	pl[1].wickets=30;
	
	pl[2].jersey_no=31;
	strcpy(pl[2].name,"Mitali");
	pl[2].No_of_matches=800;
	pl[2].runs=14000;
	pl[2].wickets=100;

	pl[3].jersey_no=20;
	strcpy(pl[3].name,"Smruti");
	pl[3].No_of_matches=300;
	pl[3].runs=1000;
	pl[3].wickets=400;
	
	pl[4].jersey_no=15;
	strcpy(pl[4].name,"Kaur");
    pl[4].No_of_matches=400;
	pl[4].runs=800;
	pl[4].wickets=500;
}
void display(players* pl,int n)              
{
	int i;
	printf("+-------------+--------+-----------------+----------+-------+\n");
	printf("|jersay_no    |Name    |No_of_matches    |Runs      |Wickets|\n");
	printf("+-------------+--------+-----------------+----------+-------+\n");
	
	for(i=0;i<n;i++)
	{
//		printf("+-------------+------+---------------+------+--------+\n");
//		printf("|jersay_no    |Name  |No_of_matches  |Runs  |Wickets |\n");
//		printf("+--------------+------+---------------+------+--------+\n");
		printf("|%d           |%-8s|%d              |%-10d|%d     |\n",pl[i].jersey_no,pl[i].name,pl[i].No_of_matches,pl[i].runs,pl[i].wickets);
		printf("+-------------+--------+-----------------+----------+--------+\n");
	}
}
void search(players* pl,int n)
{ 
	int i,x=0,s;
	char  search[20];
	int search1;
	do
	{
		int ch,count=0;
		printf("\nEnter the 1 for search by Name ");
		printf("\nEnter the 2 for search by Jersey Number\n");
		printf("Enter\n");
		scanf("%d",&ch);
		switch(ch)
		{
	    	case 1:
		    	printf("\n\nEnter the Name  details you want :");
		        scanf("%s",search);
				for(i=0;i<n;i++)
				{
			    	if(strcmp(search,pl[i].name)==0)
			    	{
//					    printf("\nJersey No:%d\t",pl[i].jersey_no);
//					    printf("Matches Played:%d\t",pl[i].No_of_matches);
//					    printf("Runs:%d\t",pl[i].runs);
//					    printf("Wickets:%d\t\n",pl[i].wickets);
						printf("+-------------+---------------------------+---------------+----------+--------+\n");
						printf("|Jersay No    |Name                       |No of Matches  |Runs      |Wickets |\n");
						printf("+-------------+---------------------------+---------------+----------+--------+\n");
						printf("|%d           |%-18s         |%d             |%-10d|%d     |\n",pl[i].jersey_no,pl[i].name,pl[i].No_of_matches,pl[i].runs,pl[i].wickets);
		                printf("+-------------+---------------------------+---------------+----------+--------+\n");
					    count++;
			    	}
				}
			    break;
			case 2:
				printf("\n\nEnter the jersey No details you want :");
				scanf("%d",&search1);
				for(i=0;i<n;i++)
				{
					if(search1==pl[i].jersey_no)
					{
//						printf("\nName:%s\t",pl[i].name);
//						printf("Matches Played:%d\t",pl[i].No_of_matches);
//						printf("Runs:%d\t",pl[i].runs);
//						printf("Wickets:%d\t\n",pl[i].wickets);
						printf("+-------------+---------------------------+---------------+----------+--------+\n");
						printf("|Jersay No    |Name                       |No of Matches  |Runs      |Wickets |\n");
						printf("+-------------+---------------------------+---------------+----------+--------+\n");
						printf("|%d           |%-18s         |%d             |%-10d|%d    |\n",pl[i].jersey_no,pl[i].name,pl[i].No_of_matches,pl[i].runs,pl[i].wickets);
		                printf("+-------------+---------------------------+---------------+----------+--------+\n");
						count++;
					}
				}
				break;
				default:
				printf("Invalid Choice\n");
		}
		if(count==0)
		printf("\nNot found\n");
		printf("\nEnter 0 again sort some data or 1 for exit the sorting\n");
		printf("Enter:");
		scanf("%d",&x);
	}
	while(x==0);
	//printf("Enter 0 again sort some data or 1 for exit the sorting\n");
	
}
void max(players* pl,int n)           
{
	int i,max,x=0,s;
	int max1;
	char name[10];      
	max=pl[0].runs;
	max1=pl[0].wickets;
	do
	{
		int ch,count=0;
		printf("\nEnter the 1 for maximum runs");
		printf("\nEnter the 2 for maximum wickets\n");
		printf("Enter\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				for(i=0;i<n;i++)
				{
	  				if(pl[i].runs>max)
					{
						max=pl[i].runs;
						count++;
					}
				}
				for(i=0;i<n;i++)
				{
					if(max==pl[i].runs)
					strcpy(name,pl[i].name);
				}
				printf("\n\nThe Maximum Runs %s %d \n",name, max);
				break;
			case 2:
				for(i=0;i<n;i++)
				{
					if(pl[i].wickets>max1)
					{
						max1=pl[i].wickets;
					}
				}
				for(i=0;i<n;i++)
				{
					if(max1==pl[i].wickets)
					strcpy(name,pl[i].name);
				}
				printf("\n maximum wickets %s %d \n",name,max1);
				break;
		} 	 
		if(count==0)
	//	printf("\nNot found\n");
		printf("\nEnter 0 again sort some data or 1 for exit the sorting\n");
		printf("Enter:");
	    scanf("%d", &x); 				
	}
	while(x==0);
	
}
void update(players* pl,int n)
{
	int count=0;
	int up_runs,up_wickets,up_No_of_matches,i,jersey_no;
	char name[20],up_name[20];
	int x=0;
	int choice;
	printf("\nChoice for update value of player ");
	do
	{
//		int choice,count=0;
//		printf("\nEnter the name details  update ");
//		scanf("%s",&name);
//		printf("\n Enter the runs details update");
//		scanf("%d",&runs);
//		printf("\n Enter the wickets details update");
//		scanf("%d",&wickets);
//		printf("\n Enter the matches details update");
//		scanf("%d",&No_of_matches);
//		printf("\nEnter 1 for update the name\n");
//		printf("Enter 2 for  upate the runs\n");
//		printf("Enter 3 for update the wickets\n");;
//		printf("Enter 4 for update the matches\n");
//		printf("Enter:");
		printf("\n\nEnter jersey number to search a player you want to update :");
		scanf("%d",&jersey_no);
		for(i=0;i<n;i++)
		{
			if(pl[i].jersey_no==jersey_no)
			{
				printf("\n\nEnter a choice to update player information "
						"\n\t\t1.Update name of player"
						"\n\t\t2.Update runs of player"
						"\n\t\t3.Update wickets of player "
						"\n\t\t4.Update No of Matches \nChoice :");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						{
							printf("\nChoice for update name of player\n");
							printf("Enter the name for update :");
							scanf("%s",&up_name);
							strcpy(pl[i].name,up_name);	
							display(pl,n);
							break;
						}
					case 2:
						{
							printf("\nChoice for update runs of player\n");
							printf("Enter the runs for update :");
							scanf("%d",&up_runs);
							pl[i].runs=up_runs;
							display(pl,n);
							break;
						}
					case 3:
						{
							printf("\nChoice for update wickets of player\n");
							printf("Enter the wickets for update :");
							scanf("%d",&up_wickets);
							pl[i].wickets=up_wickets;
							display(pl,n);
							break;
						}
					case 4:
						{
							printf("\nChoice for update matches of player\n");
							printf("Enter the matches for update :");
							scanf("%d",&up_No_of_matches);
							pl[i].No_of_matches=up_No_of_matches;
							display(pl,n);
							break;
						}
					default:
						printf("\nInvalid Choice\n");
					 break;
				}
			}
				
		}
		printf("Enter 0 again update some data or 1 for exit\n");
		printf("Enter:");
		scanf("%d",&x);
 
//		x=x+0;
	}
	while(x==0);
//	if(count==0)
//	printf("\nNot found\n") ;
	
//	printf("Enter 0 again update some data or 1 for exit\n");
//	printf("Enter:");
//	scanf("%d",&x);
//	x=x+0;
}
void deleterecord(players* pl,int* n)
{
	char del[20];
	int del1;
	int a,flag=0;
	a=*n;
	int i,j,ch,x=0,count=0;
		printf("Enter 1 for delete data of player by name\n");
		printf("Enter 2 for delete data of player by jersy no\n");
		printf("Enter\n");
		scanf("%d",&ch);
	do
	{
//		printf("Enter 1 for delete data of player by name\n");
//		printf("Enter 2 for delete data of player by jersy no\n");
//		printf("Enter:");
//		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("\nEnter the player name : ");
					fflush(stdin);
				    scanf("%s",&del);
					for(i=0;i<a;i++)
					{
						//if(pl[i].name==del)
						if(strcmp(del,pl[i].name)==0)
						{
						
							for(j=i;j<a-1;j++)
							{
								pl[j]=pl[j+1];
							}
							//n--;
				    	}
			   		}
			    	(*n)--;			
				}
			break;
			case 2:
				{
					printf("\nEnter the player jersey Number : ");
					//printf("Enter:");
					scanf("%d",&del1);
					for(i=0;i<a;i++)
					{
						if(pl[i].jersey_no==del1)
						{

							count=1;
							for(j=i;j<a;j++)
							{
								pl[j]=pl[j+1];
							}
						}
					}
					(*n)--;
				}
			break;
			default:
					printf("Invalid Choice") ;
		}
			printf("\nEnter 1 for go to menu or 0 again delete some data\n");
			scanf("%d",&x);
	}
	while(x==0);

	//printf("Enter:");
	
	//display(pl,n);
	//if(count==0)
	//printf("Not found");
//	printf("\nEnter 1 for go to menu or 0 again delete some data\n");
//	printf("Enter:");
//	scanf("%d",&x);
	//x=x+0;
}
void topplayers(players* pl, int n) 
{
    int i, j, ch, x = 0;
    players temp;
  	do
	{
	    printf("Enter 1 for top 3 Runs\n");
	    printf("Enter 2 for top 3 Wickets\n");
	    scanf("%d", &ch);
	    switch (ch) 
		{
       		case 1:
           		for (i = 0; i < n; i++) 
				{
               		for (j = i + 1; j < n; j++) 
					{
                    	if (pl[i].runs < pl[j].runs)
						{
	                        players temp = pl[i];
	                        pl[i] = pl[j];
	                        pl[j] = temp;
                        }
                    }
                }
		            printf("\n\nThe Top 3 Runs:\n");
		            printf("+-------------+---------------------------+----------+\n");
					printf("|Jersey No    |Name                       |Runs   |\n");
					printf("+-------------+---------------------------+----------+\n");
	    			
		            for (i = 0; i < 3; i++) 
					{
		                printf("|%d           |%-18s         |%-10d |\n" ,pl[i].jersey_no, pl[i].name, pl[i].runs,pl[i].No_of_matches);
		                printf("+-------------+---------------------------+----------+\n");
		            }
            	    break;
           case 2:
           		for (i = 0; i < n; i++)
				{
               		for ( j = i + 1; j < n; j++) 
					{
                   		if (pl[i].wickets < pl[j].wickets) 
						{
		                    players temp = pl[i];
		                    pl[i] = pl[j];
		                    pl[j] = temp;
                    	}
               		}
           		}
		        printf("\n\nThe Top 3 Wickets:\n");
		        printf("+-------------+---------------------------+----------+\n");
				printf("|Jersey No    |Name                       |Wickets   |\n");
				printf("+-------------+---------------------------+----------+\n");
	    			
		        for (i = 0; i < 3; i++)
				{
		            printf("|%d           |%-18s         |%-10d|\n",pl[i].jersey_no, pl[i].name, pl[i].wickets,pl[i].No_of_matches);
		            printf("+-------------+---------------------------+----------+\n");
		        }
		        break;
          		default:
          		printf("\nInvalid Choice\n");
        }
        printf("\nEnter 1 for go to menu or 0 again sort some data\n");
     	printf("Enter:");
    	 scanf("%d", &x);
    }
    while(x==0);
     //x = x + 0;
}

