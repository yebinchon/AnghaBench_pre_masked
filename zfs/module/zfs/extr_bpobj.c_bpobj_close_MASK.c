
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bpo_object; int bpo_lock; int * bpo_cached_dbuf; int * bpo_phys; int * bpo_dbuf; } ;
typedef TYPE_1__ bpobj_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(bpobj_t *VAR_0)
{

 if (VAR_0->bpo_object == 0)
  return;

 FUNC_0(VAR_0->bpo_dbuf, VAR_0);
 if (VAR_0->bpo_cached_dbuf != ((void*)0))
  FUNC_0(VAR_0->bpo_cached_dbuf, VAR_0);
 VAR_0->bpo_dbuf = ((void*)0);
 VAR_0->bpo_phys = ((void*)0);
 VAR_0->bpo_cached_dbuf = ((void*)0);
 VAR_0->bpo_object = 0;

 FUNC_1(&VAR_0->bpo_lock);
}
