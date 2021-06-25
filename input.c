struct mystruct
{
    int age;
    float price;
};
int exter;
int foo(int val)
{
    int a, b, c;
    float f = 1.1e2;
    char ch = 'A';
    int arr[10];
    a = val;
    a = 1 + 4 * 2;
    --a;
    a+=1;
    if (a / 2 == 0)
        a = 5;
    else
        a = 4;
    while (a >= 0)
    {
        a--;
    }
    for (b = 0; b <= 9; b++)
    {
        print(b);
    }
    return a;
}
int main()
{
    int a = foo(2);
    return 0;
}
