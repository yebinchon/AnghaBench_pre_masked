
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kc_refcnt; int kc_in_use_lock; } ;
typedef TYPE_1__ kcf_context_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, void *VAR_1)
{
 kcf_context_t *VAR_2 = (kcf_context_t *)VAR_0;

 FUNC_0(VAR_2->kc_refcnt == 0);
 FUNC_1(&VAR_2->kc_in_use_lock);
}
