
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct clocktime {int year; int mon; int day; int hour; int min; int sec; int nsec; int dow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct timespec *VAR_2, struct clocktime *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 time_t VAR_7;
 time_t VAR_8;

 VAR_8 = VAR_2->tv_sec;
 VAR_6 = (int) (VAR_8 / VAR_1);
 VAR_7 = VAR_8 % VAR_1;

 VAR_3->dow = FUNC_0(VAR_6);


 for (VAR_5 = VAR_0; VAR_6 >= FUNC_2(VAR_5); VAR_5++)
  VAR_6 -= FUNC_2(VAR_5);
 VAR_3->year = VAR_5;


 for (VAR_4 = 1; VAR_6 >= FUNC_1(VAR_5, VAR_4); VAR_4++)
  VAR_6 -= FUNC_1(VAR_5, VAR_4);
 VAR_3->mon = VAR_4;


 VAR_3->day = VAR_6 + 1;


 VAR_3->hour = (int) (VAR_7 / 3600);
 VAR_7 = VAR_7 % 3600;
 VAR_3->min = (int) (VAR_7 / 60);
 VAR_7 = VAR_7 % 60;
 VAR_3->sec = (int) VAR_7;
 VAR_3->nsec = VAR_2->tv_nsec;
}
