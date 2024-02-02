// Moores Voting Algorithm

int majorityElement(vector<int> v)
{
    int cnt = 0, el = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            ele = v[i];
        }
        else if (v[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == el)
        {
            cnt1++;
        }
    }
    if (cnt1 > v.size() / 2)
    {
        return el;
    }
    else
    {
        return -1;
    }
}