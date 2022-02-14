
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bintime {int sec; int frac; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(struct bintime *VAR_0) {
  uint64_t VAR_1;

  VAR_1 = FUNC_0(FUNC_1());

  VAR_0->sec = (VAR_1 / 1000000000);
  VAR_0->frac = (((VAR_1 % 1000000000) * (((uint64_t) 1 << 63) / 500000000)));
}
