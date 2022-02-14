
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* nva_ops; } ;
typedef TYPE_2__ nv_alloc_t ;
struct TYPE_5__ {int (* nv_ao_fini ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(nv_alloc_t *VAR_0)
{
 if (VAR_0->nva_ops->nv_ao_fini != ((void*)0))
  VAR_0->nva_ops->nv_ao_fini(VAR_0);
}
