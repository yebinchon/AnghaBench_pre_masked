
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ddt_stat_t ;
struct TYPE_3__ {int * ddh_stat; } ;
typedef TYPE_1__ ddt_histogram_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ) ;

void
FUNC_2(ddt_stat_t *VAR_0, const ddt_histogram_t *VAR_1)
{
 FUNC_0(VAR_0, sizeof (*VAR_0));

 for (int VAR_2 = 0; VAR_2 < 64; VAR_2++)
  FUNC_1(VAR_0, &VAR_1->ddh_stat[VAR_2], 0);
}
