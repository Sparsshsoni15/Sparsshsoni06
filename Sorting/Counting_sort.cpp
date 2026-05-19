#include <iostream>
#include <vector>
using namespace std;

// Counting Sort Algorithm
vector<int> countingSort(const vector<int> &A, int k)
{
  int n = A.size();

  // [Initialize counts.]
  vector<int> C(k + 1, 0);
  vector<int> B(n);

  // [Count occurrences.]
  for (int j = 0; j < n; j++)
  {
    C[A[j]] = C[A[j]] + 1;
  }

  // [Compute cumulative counts.]
  for (int i = 1; i <= k; i++)
  {
    C[i] = C[i] + C[i - 1];
  }

  // [Build output array.]
  for (int j = n - 1; j >= 0; j--)
  {
    B[C[A[j]] - 1] = A[j];   // place element
    C[A[j]] = C[A[j]] - 1;  // update position
  }

  // [Return.]
  return B;
}

// -------- Driver Code --------
int main()
{
  int n, k;

  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> A(n);

  cout << "Enter elements (range 0 to k):\n";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  cout << "Enter maximum value k: ";
  cin >> k;

  vector<int> B = countingSort(A, k);

  cout << "\nSorted array:\n";
  for (int x : B)
  {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
