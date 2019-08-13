#include<iostream>
#include"test.hpp"
using namespace std;

/*˳ʱ���ӡ����*/

vector<int> Solution::printMatrix(vector<vector<int> > matrix) {//���������>����Ŀո��ǲ����ٵ�
         // �洢���
          vector<int> result;
          // �߽�����
          if(matrix.empty())
              return result;
          // ��ά��������
          int rows = matrix.size();
          int cols = matrix[0].size();
          // Ȧ���ĸ��Ǳ�
          int left = 0;
          int right = cols-1;
          int top = 0;
          int btm = rows-1;
          // ѭ����ӡȦ
          while(left <= right && top <= btm){             // ѭ��������
              // Ȧ�ĵ�һ��
              for(int i=left;i<=right;++i)                // ��һ��ѭ������
                  result.push_back(matrix[top][i]);       // ��һ������
              // Ȧ�ĵڶ���
              if(top<btm)                                 // �ڶ����߽�����
                  for(int i=top+1;i<=btm;++i)             // �ڶ���ѭ������
                      result.push_back(matrix[i][right]); // �ڶ�������
              // Ȧ�ĵ�����
              if(top<btm && left<right)                   // �������߽�����
                  for(int i=right-1;i>=left;--i)          // ������ѭ������
                      result.push_back(matrix[btm][i]);   // ����������
              // Ȧ�ĵ��Ĳ�
              if(top+1<btm && left<right)                 // ���Ĳ��߽�����
                  for(int i=btm-1;i>=top+1;--i)           // ���Ĳ�ѭ������
                      result.push_back(matrix[i][left]);  // ���Ĳ�����

              ++left;--right;++top;--btm;
          }
          return result;
}
//            vector<vector<int> > matrix;
//              for(int i=0,j=1;i<4;i++)
//              {
//                  vector<int> vect;
//                  for(int k=0;k<4;k++,j++)
//                  {
//                      vect.push_back(j);
//                      cout<<j<<" ";
//                  }
//                  cout<<endl;
//                  matrix.push_back(vect);
//              }
//             vector<int> pMR = sol.printMatrix(matrix);
//             for(int i=0;i<pMR.size();i++)
//             cout<<pMR[i]<<" ";
//             cout<<endl;
