
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kcf_provider_desc_t ;
struct TYPE_5__ {int * pm_prov_desc; struct TYPE_5__* pm_next; } ;
typedef TYPE_1__ kcf_prov_mech_desc_t ;
struct TYPE_6__ {scalar_t__ me_num_hwprov; TYPE_1__* me_hw_prov_chain; } ;
typedef TYPE_2__ kcf_mech_entry_t ;
typedef int crypto_func_group_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(kcf_provider_desc_t *VAR_2, kcf_mech_entry_t *VAR_3,
    crypto_func_group_t VAR_4)
{
 kcf_prov_mech_desc_t *VAR_5;

 VAR_5 = VAR_3->me_hw_prov_chain;
 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_3->me_num_hwprov > 0);
  for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->pm_next) {
   if (VAR_5->pm_prov_desc == VAR_2 &&
       FUNC_1(VAR_5, VAR_4)) {
    return (VAR_1);
   }
  }
 }
 return (VAR_0);
}
