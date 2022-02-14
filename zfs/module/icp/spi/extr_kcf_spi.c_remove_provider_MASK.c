
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* pl_next; TYPE_2__* pl_provider; } ;
typedef TYPE_1__ kcf_provider_list_t ;
struct TYPE_9__ {scalar_t__ pd_prov_type; int pd_lock; TYPE_1__* pd_provider_list; int pd_flags; } ;
typedef TYPE_2__ kcf_provider_desc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(kcf_provider_desc_t *VAR_2)
{
 kcf_provider_desc_t *VAR_3;
 kcf_provider_list_t *VAR_4, *VAR_5;

 FUNC_2(&VAR_2->pd_lock);
 for (VAR_4 = VAR_2->pd_provider_list; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_3 = VAR_4->pl_provider;
  FUNC_4(VAR_2, VAR_3);
  if (VAR_3->pd_prov_type == VAR_0 &&
      VAR_3->pd_provider_list == ((void*)0))
   VAR_3->pd_flags &= ~VAR_1;
  FUNC_0(VAR_3);
  VAR_5 = VAR_4->pl_next;
  FUNC_1(VAR_4, sizeof (*VAR_4));
 }
 VAR_2->pd_provider_list = ((void*)0);
 FUNC_3(&VAR_2->pd_lock);
}
