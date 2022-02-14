
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mls_list; int mls_lock; } ;
typedef TYPE_1__ multilist_sublist_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*) ;

void
FUNC_3(multilist_sublist_t *VAR_0, void *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->mls_lock));
 FUNC_2(&VAR_0->mls_list, VAR_1);
}
