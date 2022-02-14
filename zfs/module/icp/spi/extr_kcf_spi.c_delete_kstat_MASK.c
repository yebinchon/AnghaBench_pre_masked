
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pd_kstat; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_7__ {TYPE_1__* ks_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(kcf_provider_desc_t *VAR_0)
{

 if (VAR_0->pd_kstat != ((void*)0)) {
  kcf_provider_desc_t *VAR_1 = VAR_0->pd_kstat->ks_private;


  FUNC_0(VAR_0 == VAR_1);
  FUNC_3(VAR_1->pd_kstat);
  VAR_0->pd_kstat = ((void*)0);
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
 }
}
