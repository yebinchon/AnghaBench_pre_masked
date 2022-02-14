
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pr_propname; int pr_cbs; } ;
typedef TYPE_1__ dsl_prop_record_t ;
struct TYPE_7__ {int dd_props; } ;
typedef TYPE_2__ dsl_dir_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

void
FUNC_4(dsl_dir_t *VAR_0)
{
 dsl_prop_record_t *VAR_1;

 while ((VAR_1 = FUNC_2(&VAR_0->dd_props)) != ((void*)0)) {
  FUNC_1(&VAR_1->pr_cbs);
  FUNC_3((char *)VAR_1->pr_propname);
  FUNC_0(VAR_1, sizeof (dsl_prop_record_t));
 }
 FUNC_1(&VAR_0->dd_props);
}
