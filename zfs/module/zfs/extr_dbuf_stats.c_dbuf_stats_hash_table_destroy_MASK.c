
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kstat_t ;
struct TYPE_3__ {int lock; int * kstat; } ;
typedef TYPE_1__ dbuf_stats_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void)
{
 dbuf_stats_t *VAR_1 = &VAR_0;
 kstat_t *VAR_2;

 VAR_2 = VAR_1->kstat;
 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_1(&VAR_1->lock);
}
