
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int kn_event_mask; int kn_lock; int kn_cv; int kn_state; int (* kn_func ) (int,void*) ;struct TYPE_3__* kn_next; } ;
typedef TYPE_1__ kcf_ntfy_elem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,void*) ;

void
FUNC_4(uint32_t VAR_4, void *VAR_5)
{
 kcf_ntfy_elem_t *VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_3);






 for (VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->kn_next)
  VAR_7++;

 for (VAR_6 = VAR_2; (VAR_6 != ((void*)0) && VAR_7); VAR_6 = VAR_6->kn_next) {
  VAR_7--;





  if (!(VAR_6->kn_event_mask & VAR_4))
   continue;

  FUNC_1(&VAR_6->kn_lock);
  VAR_6->kn_state = VAR_0;
  FUNC_2(&VAR_6->kn_lock);
  FUNC_2(&VAR_3);
  (*VAR_6->kn_func)(VAR_4, VAR_5);

  FUNC_1(&VAR_6->kn_lock);
  VAR_6->kn_state = VAR_1;
  FUNC_0(&VAR_6->kn_cv);
  FUNC_2(&VAR_6->kn_lock);

  FUNC_1(&VAR_3);
 }

 FUNC_2(&VAR_3);
}
