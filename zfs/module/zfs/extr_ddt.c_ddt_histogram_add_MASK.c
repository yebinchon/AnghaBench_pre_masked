
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ddh_stat; } ;
typedef TYPE_1__ ddt_histogram_t ;


 int FUNC_0 (int *,int *,int ) ;

void
FUNC_1(ddt_histogram_t *VAR_0, const ddt_histogram_t *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < 64; VAR_2++)
  FUNC_0(&VAR_0->ddh_stat[VAR_2], &VAR_1->ddh_stat[VAR_2], 0);
}
