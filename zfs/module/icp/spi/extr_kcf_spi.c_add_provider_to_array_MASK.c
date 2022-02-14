
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pl_provider; struct TYPE_7__* pl_next; } ;
typedef TYPE_1__ kcf_provider_list_t ;
struct TYPE_8__ {int pd_lock; TYPE_1__* pd_provider_list; } ;
typedef TYPE_2__ kcf_provider_desc_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(kcf_provider_desc_t *VAR_1, kcf_provider_desc_t *VAR_2)
{
 kcf_provider_list_t *VAR_3;

 VAR_3 = FUNC_1(sizeof (kcf_provider_list_t), VAR_0);
 FUNC_2(&VAR_2->pd_lock);
 VAR_3->pl_next = VAR_2->pd_provider_list;
 VAR_2->pd_provider_list = VAR_3;
 FUNC_0(VAR_1);
 VAR_3->pl_provider = VAR_1;
 FUNC_3(&VAR_2->pd_lock);
}
