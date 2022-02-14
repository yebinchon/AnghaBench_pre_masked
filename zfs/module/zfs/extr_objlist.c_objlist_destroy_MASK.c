
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ol_list; } ;
typedef TYPE_1__ objlist_t ;
typedef TYPE_1__ objlist_node_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

void
FUNC_3(objlist_t *VAR_0)
{
 for (objlist_node_t *VAR_1 = FUNC_2(&VAR_0->ol_list);
     VAR_1 != ((void*)0); VAR_1 = FUNC_2(&VAR_0->ol_list)) {
  FUNC_0(VAR_1, sizeof (*VAR_1));
 }
 FUNC_1(&VAR_0->ol_list);
 FUNC_0(VAR_0, sizeof (*VAR_0));
}
