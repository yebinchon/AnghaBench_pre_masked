
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* nvs_ops; } ;
typedef TYPE_2__ nvstream_t ;
struct TYPE_12__ {TYPE_5__* nvp_list; } ;
typedef TYPE_3__ nvpriv_t ;
struct TYPE_13__ {scalar_t__ nvl_priv; } ;
typedef TYPE_4__ nvlist_t ;
struct TYPE_14__ {int nvi_nvp; struct TYPE_14__* nvi_next; } ;
typedef TYPE_5__ i_nvp_t ;
struct TYPE_10__ {scalar_t__ (* nvs_nvpair ) (TYPE_2__*,int *,int *) ;int (* nvs_nvl_fini ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(nvstream_t *VAR_1, nvlist_t *VAR_2)
{
 nvpriv_t *VAR_3 = (nvpriv_t *)(uintptr_t)VAR_2->nvl_priv;
 i_nvp_t *VAR_4;




 for (VAR_4 = VAR_3->nvp_list; VAR_4 != ((void*)0); VAR_4 = VAR_4->nvi_next)
  if (VAR_1->nvs_ops->nvs_nvpair(VAR_1, &VAR_4->nvi_nvp, ((void*)0)) != 0)
   return (VAR_0);

 return (VAR_1->nvs_ops->nvs_nvl_fini(VAR_1));
}
