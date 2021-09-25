const int GetConst() {return 1;}

void Constless(int cond)
{
    int arr[GetConst()] = {0};
    enum{ e1 = GetConst(),e2 };
    switch (cond)
    {
    case GetConst():
        break;
    default:
        break;
    }
}