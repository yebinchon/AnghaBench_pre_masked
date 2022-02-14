
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* os_phys; int * os_dsl_dataset; } ;
typedef TYPE_2__ objset_t ;
typedef int nvlist_t ;
struct TYPE_5__ {scalar_t__ os_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

void
FUNC_4(objset_t *VAR_3, nvlist_t *VAR_4)
{
 FUNC_0(VAR_3->os_dsl_dataset ||
     VAR_3->os_phys->os_type == VAR_0);

 if (VAR_3->os_dsl_dataset != ((void*)0))
  FUNC_2(VAR_3->os_dsl_dataset, VAR_4);

 FUNC_3(VAR_4, VAR_1,
     VAR_3->os_phys->os_type);
 FUNC_3(VAR_4, VAR_2,
     FUNC_1(VAR_3));
}
