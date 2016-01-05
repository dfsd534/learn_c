#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main (void)
{
	double distk, distm;
	double rate;
	int min,sec;
	int time;
	double mtime;
	int mmin, msec;
	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("Please enter, in kilometers, the distance run.\n");
	scanf("%lf",&distk);
	//printf("%lf,\n", distk);
	//return 0;
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	getchar();
	scanf("%d", &min);
	printf("Now enter the second.\n");
	scanf("%d", &sec);
	// 把时间转换为全部用秒标识
	time = S_PER_M * min + sec;
	// 把公里转换为英里
	distm = M_PER_K * distk;
	// 英里/秒 x 秒/小时 = 英里/小时
	rate = distm / time * S_PER_H;
	// 时间/距离 = 跑完每英里得用时
	mtime = (double) time/distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;
	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
	printf("%d sec. \n Your average speed was %1.2f mph.\n", msec,rate);
	return 0;
}