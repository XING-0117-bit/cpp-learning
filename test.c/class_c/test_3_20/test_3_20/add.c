#define _CRT_SECURE_NO_WARNINGS 
int  is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int get_days_of_month(int n, int z)
{
	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int r = is_leap_year(n);
	int day = arr[z];
	if (r == 1)
	{
		day += 1;

	}
	return day;
}