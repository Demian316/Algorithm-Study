//Recursion Version
int fib(int n)
{
  int f;
  if(n <= 2)
    f = 1;
  else
    f = fib(n-1) + fib(n-2);
  return f;
}

//Memoized version
int fib(int r[], int n)
{
	int f;

	if (r[n] != -1)
		return r[n];

	if (n <= 2)
		f = 1;
	else
		f = fib(r, n - 1) + fib(r, n - 2);
	r[n] = f;
	return f;
}

//Bottom-up version
int fib3(int arr[], int n)
{
	int f, i;

	for (i = 1; i <= n; i++)
	{
		if (i <= 2)
			f = 1;
		else
			f = arr[i- 1] + arr[i - 2];
		arr[i] = f;
	}
	return arr[n];
}
