
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {int dd_pending_frees; int dd_pending_allocs; int dd_livelist; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_4__ {int dp_spa; int * dp_meta_objset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(dsl_dir_t *VAR_1, uint64_t VAR_2)
{
 objset_t *VAR_3 = VAR_1->dd_pool->dp_meta_objset;
 FUNC_0(FUNC_3(VAR_1->dd_pool->dp_spa,
     VAR_0));
 FUNC_2(&VAR_1->dd_livelist, VAR_3, VAR_2);
 FUNC_1(&VAR_1->dd_pending_allocs);
 FUNC_1(&VAR_1->dd_pending_frees);
}
