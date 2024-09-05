#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, total;
    string a, b;
    cin >> N;
    char zero = '0';

    for (int d = 0; d < N; ++d)
    {
        string output = "";
        bool negative = false;

        cin >> a >> b;
        if (a[0] == '-' && b[0] == '-')
        {
            negative = true;
            a.erase(0, 1);
            b.erase(0, 1);
        }
        if (a[0] != '-' && b[0] != '-')
        {
            int aLen = a.length();
            int bLen = b.length();
            

            if (aLen < bLen)
            {
                swap(a, b);
            }


            for (int k = 0; k < aLen / 2; k++)
            {
                swap(a[k], a[aLen - k - 1]);
            }

            for (int k = 0; k < bLen / 2; k++)
            {
                swap(b[k], b[bLen - k - 1]);
            }

            int carry = 0;

            for (int i = 0; i < aLen; i++)
            {
                total = (a[i] - zero + b[i] - zero + carry);
                output.push_back(total % 10 + zero);
                carry = total / 10;
            }

            for (int i = aLen; i < bLen; i++)
            {
                total = (b[i] - zero + carry);
                output.push_back(total % 10 + zero);
                carry = total / 10;
            }

            if (carry)
            {
                output.push_back(carry + zero);
            }

        }

        else
        {
            int aLen = a.length(), bLen = b.length();
            if (a[0] == '-')
            {
                if (bLen < aLen){
                    negative = true;

                 }
            }
            else
            {
                if (aLen < bLen){
                    negative = true;

                 }
            }

            if (aLen > bLen)
            {
                swap(a, b);
            }




            for (int k = 0; k < aLen / 2; k++)
            {
                swap(a[k], a[aLen - k - 1]);
            }
            for (int k = 0; k < aLen / 2; k++)
            {
                swap(a[k], a[aLen - k - 1]);
            }

            for (int k = 0; k < bLen / 2; k++)
            {
                swap(b[k], b[bLen - k - 1]);
            }
            int carry = 0;

            for (int i = 0; i < bLen; i++)
            {
                int sub = ((a[i] - zero) - (b[i] - zero) - carry);

                if (sub < 0)
                {
                    sub = sub + 10;
                    carry = 1;
                }
                else
                    carry = 0;

                output.push_back(sub + zero);
            }

            for (int i = bLen; i < aLen; i++)
            {
                int sub = ((a[i] - zero) - carry);

                if (sub < 0)
                {
                    sub = sub + 10;
                    carry = 1;
                }
                else
                    carry = 0;

                output.push_back(sub + zero);
            }


    }  
        int outLength = output.length();
        for (int k = 0; k < outLength / 2; k++)
        {
            swap(output[k], output[outLength - k - 1]);
        }
        if (negative)
        {
            cout << '-' << output << endl;
        }
        else
        {
            cout << output << endl;
        }
        
    }
    return 0;
}
