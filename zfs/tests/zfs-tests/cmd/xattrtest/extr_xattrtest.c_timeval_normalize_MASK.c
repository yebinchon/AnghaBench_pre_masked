
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ suseconds_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct timeval *VAR_1, time_t VAR_2, suseconds_t VAR_3)
{
 while (VAR_3 >= VAR_0) {
  VAR_3 -= VAR_0;
  VAR_2++;
 }

 while (VAR_3 < 0) {
  VAR_3 += VAR_0;
  VAR_2--;
 }

 VAR_1->tv_sec = VAR_2;
 VAR_1->tv_usec = VAR_3;
}
