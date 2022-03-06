#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct library
{
    int an;
    char title[50];
    char author_name[50];
    int price;
    int flag; //flag=1 means book issued and flag =0 means book not issued
}lib[50];

void display(int);

int count();

void adbook();

void giv_author(char *);

void which1(int);

void albook();

int main()
{
    int ans=1;
    int an;
    char str[50];
    while(1)
    {
        printf("\nEnter the choice of operation in Menu\n");
        printf("\n1. Add book Information");
        printf("\n2. Display Book Information");
        printf("\n3. Add book Information");
        printf("\n4. List all books of given number");
        printf("\n5. List the title of specified book");
        printf("\n6. List the count of the books in library");
        printf("\n7. Exit");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
            adbook();
            _getch();
            break;

            case 2:
            printf("Enter the accession number:");
            scanf("%d",&an);
            display(an);
            _getch();
            break;

            case 3:
            while (getchar() != '\n');
			printf("Enter the name of the author (case sensitive) : ");
			gets_s(str);
			giv_author(str);
			_getch();
			break;

            case 4:
            printf("\nEnter the accession number: ");
			scanf("%d", &an);
			which1(an);
			_getch();
			break;


            case 5:
            printf("\nTotal books : %d", count());
			_getch();
			break;

            case 6:
            albuk();
			_getch();
			break;


            case 7:
            printf("Thank you");
            exit(0);
            break;

            default:
            printf("Invalid Input");
            break;
        }

    }
    
}


void giv_author(char *author)
{
    int i=0;
    printf("\nBooks of author are following\n",author);

    while(lib[i].an)
    {
        if(!(strcmp(author,lib[i].author_name)))
        {
            display(lib[i].an);

        }
        i++;
    }
}

void adbook()
{
	int next = count();
	lib[next].an = next + 1;

	/*fflush(stdin) or while(getch() != '\n'); to clear the buffer*/
	while (getchar() != '\n');
	printf("\nEnter the title of the book : ");
	gets_s(lib[next].title);
	printf("\nEnter the author name of the book : ");
	gets_s(lib[next].author_name);
	printf("\nEnter the price of the book : ");
	scanf("%d", &lib[next].price);
	lib[next].flag = 1;
}

void which1(int an)
{
	int i = 0;
	while (lib[i].an)
	{
		if (lib[i].an == an)
		{
			printf("\n\nTitle of the book : %s\n", lib[i].title);
			return;
		}
	}
	printf("No any book found found\n");
}

int count()
{
    int i = 0;
    while(lib[i].an)
    {
        i++;
    }
    return i;
}

void albook()
{
	int i = 0;
	while (lib[i].an)
	{
		display(i + 1);
		i++;
	}
}

void display(int i)
{
    i--;
    printf("\n Accesiion number: %d",lib[i].an);
    printf("\nTitle: %s",lib[i].title);
    printf("\Author Name: %s",lib[i].author_name);
    printf("\price: %d",lib[i].price);

    if(lib[i].flag)
    {
        printf("Book is issued");
    }
    else{
        printf("Book i not issued");
    }

}

