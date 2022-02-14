
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pd_prov_type; int pd_lock; int pd_remove_cv; int pd_state; } ;
typedef TYPE_1__ kcf_provider_desc_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(kcf_provider_desc_t *VAR_3)
{
 FUNC_2(&VAR_3->pd_lock);
 switch (VAR_3->pd_prov_type) {
 case 128:
  if (VAR_3->pd_state == VAR_2 ||
      VAR_3->pd_state == VAR_0) {
   VAR_3->pd_state = VAR_1;
   FUNC_0(&VAR_3->pd_remove_cv);
   FUNC_3(&VAR_3->pd_lock);
   break;
  }


 case 130:
 case 129:
  FUNC_3(&VAR_3->pd_lock);
  FUNC_1(VAR_3);
 }
}
