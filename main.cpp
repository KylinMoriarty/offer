#include <bits/stdc++.h>
#include "test.hpp"
#include "Stack_Quene.hpp"
#include "Stack_min.hpp"

using namespace std;
//
//const int N = 1000;
//int h[N];
//
//int main()
//{
//    int n, ans, height, area;
//
//    // ��������
//    cin >> n;
//    for(int i=0; i<n; i++)
//        cin >> h[i];
//
//    // �����������������������ö�ٷ���
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
//    // ������
//    cout << ans << endl;
//
//    return 0;
//}


 int main()
 {

       int a[9]={1,1,2,2,3,3,4,4,8};

       Solution sol;
       cout<<sol.Onlyonce(a,9);


 }


//scanf("%d", &n);
//printf("%lld\n", stairs(n));


