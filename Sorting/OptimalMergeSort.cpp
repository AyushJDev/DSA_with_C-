#include <iostream>
#include <vector>

using namespace std;

void merger(vector<int>& arr, vector<int>& temp, int lb, int mid, int ub) {
    int lp = lb;
    int rp = mid + 1;
    int k = lb;

    while (lp <= mid && rp <= ub) {
        if (arr[lp] <= arr[rp]) {
            temp[k++] = arr[lp++];
        } else {
            temp[k++] = arr[rp++];
        }
    }

    while (lp <= mid) {
        temp[k++] = arr[lp++];
    }

    while (rp <= ub) {
        temp[k++] = arr[rp++];
    }

    for (int i = lb; i <= ub; i++) {
        arr[i] = temp[i];
    }
}

void mergeSort(vector<int>& arr, vector<int>& temp, int lb, int ub) {
    if (lb >= ub) return;

    int mid = lb + (ub - lb) / 2;

    mergeSort(arr, temp, lb, mid);
    mergeSort(arr, temp, mid + 1, ub);

    if (arr[mid] <= arr[mid + 1]) return;

    merger(arr, temp, lb, mid, ub);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the size of the array : ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> arr(n);
    cout << "Enter the values in the array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    {
        vector<int> temp(n);
        mergeSort(arr, temp, 0, n - 1);
    }
    cout << "Array after Sorting : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i + 1 < n ? ", " : "\n");
    }

    return 0;
}