#include<stdio.h>
long long int gcd(long long int a, long long int b)
{
	return b ? gcd(b, a % b) : a;
}
int main()
{
	long long int n = 0, a = 0, b = 0, sum_a = 0, sum_b = 1, t;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)//ʵ�ֶ��������ͨ����Ӻ�����Լ�֣��Ա�֤���Ϊ�����ʽ�ķ���
	{
		scanf("%lld/%lld", &a, &b);
		//ͨ�����
		sum_a *= b;
		sum_a += a * sum_b;
		sum_b *= b;
		//Լ��
		t = gcd(sum_a, sum_b);
		sum_a /= t;
		sum_b /= t;
	}
	if (sum_a % sum_b == 0)
		printf("%lld\n", sum_a / sum_b);
	else if (sum_a < sum_b)
		printf("%lld/%lld\n", sum_a, sum_b);
	else
		printf("%lld %lld/%lld\n", sum_a / sum_b, sum_a % sum_b, sum_b);
	return 0;
}
