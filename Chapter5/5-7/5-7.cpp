enum class { General,Light,Medium,Heavy } weapon;

int main()
{
    weapon = General;
    bool b = (weapon == weapon::General);
    return 0;
}