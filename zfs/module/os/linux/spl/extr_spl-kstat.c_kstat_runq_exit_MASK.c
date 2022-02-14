
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_3__ {int rlastupdate; int rlentime; int rtime; int rcnt; } ;
typedef TYPE_1__ kstat_io_t ;
typedef int hrtime_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

void
FUNC_2(kstat_io_t *VAR_0)
{
 hrtime_t VAR_1, VAR_2;
 ulong_t VAR_3;

 VAR_1 = FUNC_1();
 VAR_2 = VAR_1 - VAR_0->rlastupdate;
 VAR_0->rlastupdate = VAR_1;
 VAR_3 = VAR_0->rcnt--;
 FUNC_0((int)VAR_3 > 0);
 VAR_0->rlentime += VAR_2 * VAR_3;
 VAR_0->rtime += VAR_2;
}
