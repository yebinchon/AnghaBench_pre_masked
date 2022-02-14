
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * an_tried_plist; int * an_context; int an_provider; } ;
typedef TYPE_1__ kcf_areq_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void
FUNC_4(kcf_areq_node_t *VAR_1)
{
 FUNC_1(VAR_1->an_provider);
 if (VAR_1->an_context != ((void*)0))
  FUNC_0(VAR_1->an_context);

 if (VAR_1->an_tried_plist != ((void*)0))
  FUNC_2(VAR_1->an_tried_plist);
 FUNC_3(VAR_0, VAR_1);
}
