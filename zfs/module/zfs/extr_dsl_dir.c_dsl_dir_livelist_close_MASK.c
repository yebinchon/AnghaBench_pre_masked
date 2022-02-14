
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dd_pending_frees; int dd_pending_allocs; int dd_livelist; } ;
typedef TYPE_1__ dsl_dir_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(dsl_dir_t *VAR_0)
{
 FUNC_1(&VAR_0->dd_livelist);
 FUNC_0(&VAR_0->dd_pending_allocs);
 FUNC_0(&VAR_0->dd_pending_frees);
}
