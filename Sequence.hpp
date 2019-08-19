#ifndef SEQUENCE_HPP_INCLUDED
#define SEQUENCE_HPP_INCLUDED

#include <vector>
using namespace std;

typedef unsigned long long ULL;

class Sequence{
public:
    void InsertSort(vector<int> &);
    void ShellSort(vector<int> &);
    void BubbleSort(vector<int> &);
    void QuickSort(vector<int> &,int ,int);
    void SelectSort(vector<int> &);

    void AdjustDown(vector<int> &,int ,int);
    void AdjustDownMin(vector<int> &,int ,int);
    void BuildMaxHeap(vector<int> &);
    void BuildMinHeap(vector<int> &);
    void HeapSortPos(vector<int> &);
    void HeapSortRev(vector<int> &);

    void MergeSort(vector<int> &,int ,int);
    void Merge(vector<int> &,int ,int ,int);
    void MergeSort(int *,int ,int);
    void Merge(int *,int ,int ,int);

//                int temp = num[j];
//                num[j] = num[j-1];
//                num[j-1] = temp;
};


#endif // SEQUENCE_HPP_INCLUDED
