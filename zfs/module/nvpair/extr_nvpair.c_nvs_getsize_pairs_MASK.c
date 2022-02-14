
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_10__ {TYPE_1__* nvs_ops; } ;
typedef TYPE_2__ nvstream_t ;
struct TYPE_11__ {TYPE_5__* nvp_list; } ;
typedef TYPE_3__ nvpriv_t ;
struct TYPE_12__ {scalar_t__ nvl_priv; } ;
typedef TYPE_4__ nvlist_t ;
struct TYPE_13__ {int nvi_nvp; struct TYPE_13__* nvi_next; } ;
typedef TYPE_5__ i_nvp_t ;
struct TYPE_9__ {scalar_t__ (* nvs_nvp_size ) (TYPE_2__*,int *,size_t*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_1(nvstream_t *VAR_2, nvlist_t *VAR_3, size_t *VAR_4)
{
 nvpriv_t *VAR_5 = (nvpriv_t *)(uintptr_t)VAR_3->nvl_priv;
 i_nvp_t *VAR_6;
 uint64_t VAR_7 = *VAR_4;
 size_t VAR_8;




 for (VAR_6 = VAR_5->nvp_list; VAR_6 != ((void*)0); VAR_6 = VAR_6->nvi_next) {
  if (VAR_2->nvs_ops->nvs_nvp_size(VAR_2, &VAR_6->nvi_nvp, &VAR_8) != 0)
   return (VAR_0);

  if ((VAR_7 += VAR_8) > VAR_1)
   return (VAR_0);
 }

 *VAR_4 = VAR_7;
 return (0);
}
