// https://www.codingninjas.com/codestudio/problems/maximum-distance_758901


int maximumDistance(int a[], int n)
{
    unordered_map<int, int> hash;
    int max_diff = 0;

    for (int i=0; i<n; i++)
    {
        if (hash.find(a[i]) == hash.end())
	        hash[a[i]] = i;
        else
	        max_diff = max(max_diff, i - hash[a[i]]);
    }

    return max_diff;
}

/*
2
4
1 3 2 4
9
1 3 1 4 5 6 4 8 3

Output:

0
7

*/
