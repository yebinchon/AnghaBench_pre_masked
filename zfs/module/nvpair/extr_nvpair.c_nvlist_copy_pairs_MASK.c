
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* nvp_list; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int nvpair_t ;
struct TYPE_8__ {scalar_t__ nvl_priv; } ;
typedef TYPE_2__ nvlist_t ;
struct TYPE_9__ {int nvi_nvp; struct TYPE_9__* nvi_next; } ;
typedef TYPE_3__ i_nvp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(nvlist_t *VAR_1, nvlist_t *VAR_2)
{
 nvpriv_t *VAR_3;
 i_nvp_t *VAR_4;

 if ((VAR_3 = (nvpriv_t *)(uintptr_t)VAR_1->nvl_priv) == ((void*)0))
  return (VAR_0);

 for (VAR_4 = VAR_3->nvp_list; VAR_4 != ((void*)0); VAR_4 = VAR_4->nvi_next) {
  nvpair_t *VAR_5 = &VAR_4->nvi_nvp;
  int VAR_6;

  if ((VAR_6 = FUNC_4(VAR_2, FUNC_0(VAR_5), FUNC_2(VAR_5),
      FUNC_1(VAR_5), FUNC_3(VAR_5))) != 0)
   return (VAR_6);
 }

 return (0);
}
