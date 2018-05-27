#include <stdio.h>
/*#define SIZE 10

/*void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, N;
    int arr[SIZE];

    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &N);

    N = N % SIZE;

    printArray(arr);

    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }

    printf("\n\n\n");
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, first;

    first = arr[0];

    for(i=0; i<SIZE-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[SIZE-1] = first;
}

void printArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}*/

/*int main()
{
	int arr[10], i, j, Size, Count = 0;


	scanf("%d", &Size);


	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("%d ", Count);

 	return 0;
}*/
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("frequency of %d = %d \n", arr[i], freq[i]);
        }
    }

    return 0;
}

