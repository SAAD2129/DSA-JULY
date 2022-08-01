// #include <bits/stdc++.h>

// using namespace std;

// class myArr
// {
//     int t_size;
//     int u_size;
//     int *ptr;
//     public:
//     void CreateArr(struct myArr *a, int ts, int us)
//     {
//         a->t_size = ts;
//         a->u_size = us;
//         a->ptr = new int[ts];
//     }
//     void Set(myArr *a)
//     {
//         int n;
//         for (int i = 0; i < a->u_size; i++)
//         {
//             cin >> n;
//             a->ptr[i] = n;
//         }
//     }
//     void show(myArr *a)
//     {
//         for (int i = 0; i < a->u_size; i++)
//         {
//             cout << a->ptr[i] << " ";
//         }
//     }
// };

// int main()
// {

//     myArr mr;
//     mr.CreateArr(&mr,8,7);
//     mr.Set(&mr);
//     mr.show(&mr);

//     return 0;
// }
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int main()
{

    int n;
    cin >> n;
    getchar();
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    const int N = 1e5 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int mnIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[ar[i]] != -1)
        {
            mnIdx = min(mnIdx, idx[ar[i]]);
        }
        else
        {
            idx[ar[i]] = i;
        }
    }
    if (mnIdx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    cout << mnIdx + 1 << endl;
    return 0;
}
