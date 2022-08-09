#include <stdio.h>
FILE *fp;
const char EOL = '\n';

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main(int argc, char** argv)
{
    fp = fopen(argv[1], "r");
    char buffer[4];
    int arr[1000];
    int i = 0;
    freopen(argv[1],"r",stdin);
    fclose(fp);

    while(scanf("%i",&arr[i])==1 && buffer[i] != EOF)
        ++i;

    insertionSort(arr, i);

    fp = fopen(argv[1], "w");
    for(int j=0; j<i; ++j)
        fprintf(fp, "%d\n",arr[j]);

    fclose(stdin);

    return 0;
}
