
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {long tv_sec; int tv_usec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(struct timeval *VAR_0) {
  uint64_t VAR_1, VAR_2;

  VAR_1 = FUNC_0(FUNC_1());

  VAR_2 = (VAR_1 / 1000000000);
  VAR_0->tv_sec = (long) VAR_2;
  VAR_0->tv_usec = (int) ((VAR_1 - VAR_2) / 1000);
}
