// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end/0#

void arrange(int a[], int n){
    int right = n-1;
    int left = 0;
    for (int i=0; i<n; i++){
        if (a[i] >= 0){
            // right shift

            int temp = a[i];
            int j=i; 
            
            while (j > left){
                a[j] = a[j-1];
                j--;
            }
            a[left] = temp;
            left++;
        }
    }
}

/* 

Input : A[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 1  3  2  11  6  -1  -7  -5 

Input : A[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output : 7  9  10  11  -5  -3  -4  -1

*/
