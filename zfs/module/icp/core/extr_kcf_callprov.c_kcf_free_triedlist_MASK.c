
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pt_pd; struct TYPE_4__* pt_next; } ;
typedef TYPE_1__ kcf_prov_tried_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(kcf_prov_tried_t *VAR_0)
{
 kcf_prov_tried_t *VAR_1;

 while ((VAR_1 = VAR_0) != ((void*)0)) {
  VAR_0 = VAR_0->pt_next;
  FUNC_0(VAR_1->pt_pd);
  FUNC_1(VAR_1, sizeof (kcf_prov_tried_t));
 }
}
