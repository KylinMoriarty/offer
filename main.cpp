#include <bits/stdc++.h>
#include "test.hpp"
#include "Stack_Quene.hpp"
#include "Stack_min.hpp"
#include "Sequence.hpp"

using namespace std;
//
//const int N = 1000;
//int h[N];
//
//int main()
//{
//    int n, ans, height, area;
//
//    // 输入数据
//    cin >> n;
//    for(int i=0; i<n; i++)
//        cin >> h[i];
//
//    // 计算最大矩形面积：暴力法（枚举法）
//    ans = 0;
//    for(int i=0; i<n; i++) {
//        height = h[i];
//        for(int j=i; j<n; j++) {
//            if(h[j] < height)
//                height = h[j];
//            area = (j - i + 1) * height;
//            if(area > ans)
//                ans = area;
//        }
//    }
//
//    // 输出结果
//    cout << ans << endl;
//
//    return 0;
//}


 int main()
 {

       int a[9]={3,2,1,6,7,8,5,4,9};
       int *p=a;
       vector<int> vec;

       for(int i=0;i<9;i++)
       {
           vec.push_back(a[i]);
       }


      // Solution sol;
       //cout<<sol.MoreThanHalfNum(vec);
       Sequence seq;
      // seq.InsertSort(vec);
       //seq.ShellSort(vec);
       //seq.QuickSort(vec,0,vec.size()-1);
       seq.MergeSort(p,0,8);
       //seq.HeapSortRev(vec);
      // seq.BubbleSort(vec);
       for(int i=0;i<9;i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
       //cout<<sol.Onlyonce(a,9);


 }


//scanf("%d", &n);
//printf("%lld\n", stairs(n));


