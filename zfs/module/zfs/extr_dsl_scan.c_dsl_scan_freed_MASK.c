
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* spa_dsl_pool; } ;
typedef TYPE_1__ spa_t ;
typedef int dsl_scan_t ;
struct TYPE_6__ {int * dp_scan; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (int *) ;

void
FUNC_5(spa_t *VAR_0, const blkptr_t *VAR_1)
{
 dsl_pool_t *VAR_2 = VAR_0->spa_dsl_pool;
 dsl_scan_t *VAR_3 = VAR_2->dp_scan;

 FUNC_0(!FUNC_2(VAR_1));
 FUNC_0(VAR_3 != ((void*)0));
 if (!FUNC_4(VAR_3))
  return;

 for (int VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++)
  FUNC_3(VAR_0, VAR_1, VAR_4);
}
