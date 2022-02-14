
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct time {long tz; long sec; } ;



__attribute__((used)) static void
FUNC_0(struct time *VAR_0, const char *VAR_1)
{
 long VAR_2;

 VAR_2 = ('0' - VAR_1[1]) * 60 * 60 * 10;
 VAR_2 += ('0' - VAR_1[2]) * 60 * 60;
 VAR_2 += ('0' - VAR_1[3]) * 60 * 10;
 VAR_2 += ('0' - VAR_1[4]) * 60;

 if (VAR_1[0] == '-')
  VAR_2 = -VAR_2;

 VAR_0->tz = VAR_2;
 VAR_0->sec -= VAR_2;
}
