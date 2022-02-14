
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ulp_lock; struct TYPE_3__* ulp_next; } ;
typedef TYPE_1__ uu_list_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_1(void)
{
 uu_list_pool_t *VAR_2;

 for (VAR_2 = VAR_1.ulp_next; VAR_2 != &VAR_1;
     VAR_2 = VAR_2->ulp_next)
  (void) FUNC_0(&VAR_2->ulp_lock);
 (void) FUNC_0(&VAR_0);
}
