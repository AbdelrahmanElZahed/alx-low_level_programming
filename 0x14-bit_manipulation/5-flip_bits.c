unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;  /*XOR to find differing bits*/
	unsigned int count = 0;

	while (xor_result > 0)
	{
		/*Check if the least significant bit is 1*/
		count += xor_result & 1;
		/*Shift right to check the next bit*/
		xor_result >>= 1;
	}
	return (count);
}

