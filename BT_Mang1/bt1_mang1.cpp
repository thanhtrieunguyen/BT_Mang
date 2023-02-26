#include <iostream>
using namespace std;
int main()
{
    // Bài 1: Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x và thêm x vào cuối mảng vừa tạo.
    int n, x, arr[20];
    
    cout << "So phan tu cua mang: ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    cout << "So them vao cuoi mang: ";
    cin >> x;

    arr[n] = x; // Thêm x vào cuối mảng
    n++;
    
    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}