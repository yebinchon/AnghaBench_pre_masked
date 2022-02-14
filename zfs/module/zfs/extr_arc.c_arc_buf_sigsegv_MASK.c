
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_addr; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (char*,long) ;

void
FUNC_1(int VAR_0, siginfo_t *VAR_1, void *VAR_2)
{
 FUNC_0("Got SIGSEGV at address: 0x%lx\n", (long)VAR_1->si_addr);
}
