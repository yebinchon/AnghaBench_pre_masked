
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* nvp_list; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int nvpair_t ;
struct TYPE_6__ {scalar_t__ nvl_priv; } ;
typedef TYPE_2__ nvlist_t ;
struct TYPE_7__ {int nvi_nvp; struct TYPE_7__* nvi_next; } ;
typedef TYPE_3__ i_nvp_t ;



__attribute__((used)) static int
FUNC_0(nvlist_t *VAR_0, nvpair_t *VAR_1)
{
 nvpriv_t *VAR_2 = (nvpriv_t *)(uintptr_t)VAR_0->nvl_priv;
 i_nvp_t *VAR_3;

 if (VAR_1 == ((void*)0))
  return (0);

 for (VAR_3 = VAR_2->nvp_list; VAR_3 != ((void*)0); VAR_3 = VAR_3->nvi_next)
  if (&VAR_3->nvi_nvp == VAR_1)
   return (1);

 return (0);
}
