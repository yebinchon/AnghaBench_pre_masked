
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_3__ {int wlastupdate; int wlentime; int wtime; int wcnt; } ;
typedef TYPE_1__ kstat_io_t ;
typedef int hrtime_t ;


 int FUNC_0 () ;

void
FUNC_1(kstat_io_t *VAR_0)
{
 hrtime_t VAR_1, VAR_2;
 ulong_t VAR_3;

 VAR_1 = FUNC_0();
 VAR_2 = VAR_1 - VAR_0->wlastupdate;
 VAR_0->wlastupdate = VAR_1;
 VAR_3 = VAR_0->wcnt++;
 if (VAR_3 != 0) {
  VAR_0->wlentime += VAR_2 * VAR_3;
  VAR_0->wtime += VAR_2;
 }
}
