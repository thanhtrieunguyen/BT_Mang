#include <iostream>
using namespace std;
int main()
{
    // Bài 1 (Mở rộng): Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x và thêm x vào vị trí m của mảng vừa tạo.
    int n, x, m, arr[10];
    
    cout << "So phan tu cua mang: ";
    cin >> n;
    
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    cout << "Phan tu x them vao mang: ";
    cin >> x;
    cout << "Vi tri m them phan tu: ";
    cin >> m;

    if (m >= 0 && m < n)
    {
        for (int i = n - 1; i >= m; i--)
        {
            arr[i + 1] = arr[i];
        }
    
    arr[m] = x;  
    n++;

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++)
        {
        cout << arr[i] << " ";
        }
    }
    else 
    {
        cout << "Vi tri m khong hop le." << endl;
    }
    return 0;
}