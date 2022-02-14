
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tp_current; int tp_attr; struct TYPE_8__* tpj_next; struct TYPE_8__* tp_head; TYPE_1__* tp_back; struct TYPE_8__* tp_forw; int * tp_active; } ;
typedef TYPE_2__ tpool_t ;
typedef TYPE_2__ tpool_job_t ;
struct TYPE_7__ {TYPE_2__* tp_forw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_5(tpool_t *VAR_2)
{
 tpool_job_t *VAR_3;

 FUNC_0(VAR_2->tp_current == 0 && VAR_2->tp_active == ((void*)0));




 (void) FUNC_3(&VAR_0);
 if (VAR_1 == VAR_2)
  VAR_1 = VAR_2->tp_forw;
 if (VAR_1 == VAR_2)
  VAR_1 = ((void*)0);
 else {
  VAR_2->tp_back->tp_forw = VAR_2->tp_forw;
  VAR_2->tp_forw->tp_back = VAR_2->tp_back;
 }
 FUNC_4(&VAR_0);




 for (VAR_3 = VAR_2->tp_head; VAR_3 != ((void*)0); VAR_3 = VAR_2->tp_head) {
  VAR_2->tp_head = VAR_3->tpj_next;
  FUNC_1(VAR_3);
 }
 (void) FUNC_2(&VAR_2->tp_attr);
 FUNC_1(VAR_2);
}
