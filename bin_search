
#include <iostream>

using namespace std;

int find(int *mas, int size, int el){
    // функция возращает номер позиции элемета в массиве
    // O(n) 
    for(int i=0;i<size;i++)
        if (mas[i] == el) return i;
    return -1; 
}
int find_bin(int *mas, int size, int el){
    // бин поиск 
    
    int l = -1, r = size , mid;
    for(;l + 1 < r;) {
        mid = (r + l) / 2;
        //cout << l << ' '  << r << ' ' << mid << endl ;
        if (el < mas[mid]) r = mid;
        else l = mid; 
    }
    if (l == -1 || mas[l] != el) return -1;
    return l;
}


int main()
{
    int mas[11] = {30, 52, 69, 171, 172, 280, 300, 365,
                    401, 416, 522};
    for(int i=0;i<11;i++) cout << mas[i] <<  ' ';
    
    for(int i=0;i<10; i++){
        int el;
        cin >> el;
        cout << el << ' ' << find_bin(mas, 11, el) << endl;
    }
    

    return 0;
}
