
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct clocktime {int year; int mon; int day; int hour; int min; int sec; int nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct clocktime *VAR_2, struct timespec *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_2->year;


 if (VAR_2->mon < 1 || VAR_2->mon > 12 || VAR_2->day < 1 ||
     VAR_2->day > FUNC_0(VAR_5, VAR_2->mon) ||
     VAR_2->hour > 23 || VAR_2->min > 59 || VAR_2->sec > 59 ||
     (VAR_5 > 2037 && sizeof(time_t) == 4)) {
  return (VAR_0);
 }





 VAR_6 = 0;
 for (VAR_4 = VAR_1; VAR_4 < VAR_5; VAR_4++)
  VAR_6 += FUNC_1(VAR_4);


 for (VAR_4 = 1; VAR_4 < VAR_2->mon; VAR_4++)
    VAR_6 += FUNC_0(VAR_5, VAR_4);
 VAR_6 += (VAR_2->day - 1);

 VAR_3->tv_sec = (((time_t)VAR_6 * 24 + VAR_2->hour) * 60 + VAR_2->min) * 60 +
     VAR_2->sec;
 VAR_3->tv_nsec = VAR_2->nsec;

 return (0);
}
