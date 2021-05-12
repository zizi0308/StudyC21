extern int count;
extern int total;						// input_data에 선언되있는 total을 쓰겠다.

double average(void)
{
	return total / (double)count;
}