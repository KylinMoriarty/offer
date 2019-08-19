#include<iostream>
#include"Sequence.hpp"
#include <vector>

using namespace std;

void Sequence::InsertSort(vector<int> &num){
    if(num.empty()) return ;
    if(num.size()<=1) return ;
    for(int i = 1;i < num.size();++i)
        for(int j = i;j > 0;--j)
            if(num[j] < num[j - 1])
                swap(num[j],num[j - 1]);
            else
                break;
    return ;
}

void Sequence::ShellSort(vector<int> &num){
    if(num.empty()) return ;
    if(num.size()<=1) return ;
    for(int div=num.size()/2;div>=1;div/=2)
        for(int k=0;k<div;k++)
            for(int i=div+k;i<num.size();i+=div)
                for(int j=i;j>k;j-=div)
                    if(num[j]<num[j-div])
                        swap(num[j],num[j-div]);
                    else
                        break;
    return ;
}

void Sequence::BubbleSort(vector<int> &num){
    if(num.empty()) return ;
    if(num.size()<=1) return ;
    bool flag;//表示本趟冒泡是否发生交换的标志
    for(int i=0;i<num.size();i++){
        flag=false;
        for(int j=num.size()-1;j>i;j--){
            if(num[j-1]>num[j])
                swap(num[j],num[j-1]);
            flag=true;
        }
        if(flag==false)
            return ;
    }
    return ;
}

void Sequence::QuickSort(vector<int> &num,int left,int right){
    if(num.empty()) return ;
    if(num.size()<=1) return ;
    if(left>=right) return ;

    int key=num[left],i=left,j=right;
    while(i<j){
        while(num[j]>=key&&i<j) --j;
        num[i]=num[j];
        while(num[i]<=key&&i<j) ++i;
        num[j]=num[i];
    }
    num[i]=key;

    QuickSort(num,left,i-1);
    QuickSort(num,j+1,right);

}

void Sequence::SelectSort(vector<int> &num){
    if(num.empty()) return ;
    if(num.size()<=1) return ;
    int _min;
    for(int i=0;i<num.size()-1;i++){
        _min=i;
        for(int j=i+1;j<num.size();j++)
            if(num[j]<num[_min]) _min=j;
        if(_min!=i) swap(num[i],num[_min]);
    }
    return ;
}

void Sequence::AdjustDown(vector<int> &num,int k,int len){
    int index=k;
    int child=2*index+1;
    while(child<len){
        if(child+1<len&&num[child]<num[child+1])
            child++;//找出孩子的最大的那个
        if(num[index]>=num[child]) break;//结点比孩子都大
        swap(num[index],num[child]);//否则就交换
        index=child;//继续判断孩子的孩子
        child=2*index+1;
    }
}

void Sequence::AdjustDownMin(vector<int> &num,int k,int len){
    int index=k;
    int child=2*index+1;
    while(child<len){
        if(child+1<len&&num[child]>num[child+1])
            child++;
        if(num[index]<=num[child]) break;
        swap(num[index],num[child]);
        index=child;
        child=2*index+1;
    }
}

void Sequence::BuildMaxHeap(vector<int> &num){//大根堆正序输出，将最小的沉到最后踢出
    for(int i=num.size()/2;i>=0;i--)
        AdjustDown(num,i,num.size());
}

void Sequence::BuildMinHeap(vector<int> &num){//小根堆倒序输出，将最大的沉到最后踢出
    for(int i=num.size()/2;i>=0;i--)
        AdjustDownMin(num,i,num.size());
}


void Sequence::HeapSortPos(vector<int> &num){//正序输出
    BuildMaxHeap(num);
    for(int i=num.size()-1;i>=0;--i){
        swap(num[i],num[0]);
        AdjustDown(num,0,i);
    }
}

void Sequence::HeapSortRev(vector<int> &num){//倒序输出
    BuildMinHeap(num);
    for(int i=num.size()-1;i>=0;--i){
        swap(num[i],num[0]);
        AdjustDownMin(num,0,i);
    }
}

void Sequence::MergeSort(vector<int> &num,int low,int high){
    if(num.empty()) return ;
    if(num.size()<=1) return ;

    if(low<high){
        int mid=(low+high)/2;//从中间划分两个子序列
        MergeSort(num,low,mid);//对左侧子序列进行递归排序
        MergeSort(num,mid+1,high);//对右侧子序列进行递归排序
        Merge(num,low,mid,high);//归并
    }
}

void Sequence::Merge(vector<int> &num,int low,int mid,int high){
    if(num.empty()) return ;
    if(num.size()<=1) return ;

    vector<int> temp;
    int i,j,k,t;
    for(t=0;t<low;t++)//把前面的位置补上,烦死了
        temp.push_back(0);
    for(k=low;k<=high;k++)
        temp.push_back(num[k]);
    for(i=low,j=mid+1,k=i;i<=mid&&j<=high;k++){
        if(temp[i]<=temp[j])
            num[k]=temp[i++];
        else
            num[k]=temp[j++];
    }
    while(i<=mid)  num[k++]=temp[i++];
    while(j<=high) num[k++]=temp[j++];

}

void Sequence::MergeSort(int *num,int low,int high){
    if(num==NULL) return ;

    if(low<high){
        int mid=(low+high)/2;//从中间划分两个子序列
        MergeSort(num,low,mid);//对左侧子序列进行递归排序
        MergeSort(num,mid+1,high);//对右侧子序列进行递归排序
        Merge(num,low,mid,high);//归并
    }
}

void Sequence::Merge(int *num,int low,int mid,int high){
    if(num==NULL) return ;

    int *temp=new int[high+1];
    int i,j,k;
    for(k=low;k<=high;k++)
        temp[k]=num[k];
    for(i=low,j=mid+1,k=i;i<=mid&&j<=high;k++){
        if(temp[i]<=temp[j])
            num[k]=temp[i++];
        else
            num[k]=temp[j++];
    }
    while(i<=mid)  num[k++]=temp[i++];
    while(j<=high) num[k++]=temp[j++];

    delete []temp;

}














