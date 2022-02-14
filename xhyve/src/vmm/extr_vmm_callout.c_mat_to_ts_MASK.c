
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(uint64_t VAR_0, struct timespec *VAR_1) {
  uint64_t VAR_2;

  VAR_2 = FUNC_0(VAR_0);

  VAR_1->tv_sec = (VAR_2 / 1000000000);
  VAR_1->tv_nsec = (VAR_2 % 1000000000);
}
