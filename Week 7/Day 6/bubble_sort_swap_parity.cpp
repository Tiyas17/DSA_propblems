//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

    void merge(long long a[], long long start, long long mid, long long end, long long &count)
    {

        long long i = start;
        long long j = mid + 1;
        long long k = 0;

        vector<long long> temp(end - start + 1);
        while (i <= mid && j <= end)
        {
            if (a[i] > a[j])
            {
                count += mid - i + 1;
                temp[k++] = a[j++];
            }
            else
                temp[k++] = a[i++];
        }

        while (i <= mid)
            temp[k++] = a[i++];

        while (j <= end)
            temp[k++] = a[j++];

        k = 0;
        for (long long l = start; l <= end; l++)
        {
            a[l] = temp[k++];
        }
    }

    void mergesort(long long a[], long long start, long long end, long long int &count)
    {
        if (start >= end)
            return;

        long long mid = start + (end - start) / 2;
        mergesort(a, start, mid, count);
        mergesort(a, mid + 1, end, count);
        merge(a, start, mid, end, count);
    }

    long long int inversionCount(long long a[], long long n)
    {
        // Your Code Here
        long long int count = 0;
        // we will use mergesort
        mergesort(a, 0, n - 1, count);
        if (count % 2)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends