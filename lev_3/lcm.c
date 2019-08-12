unsigned int    hcf(unsigned int a, unsigned int b)
{
	unsigned int i = 1;
	unsigned int max = 0;


	while(i <= a && i <= b)
	{
		if (!(a % i) && !(b % i))
			max = i;
		i++;
	}
	return (max);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return(0);
	return ((a * b) / hcf(a, b));
}
