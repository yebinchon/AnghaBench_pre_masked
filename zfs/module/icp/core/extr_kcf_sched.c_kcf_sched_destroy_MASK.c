
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kcf_reqid_table_t ;
typedef int kcf_pool_t ;
typedef int kcf_global_swq_t ;
struct TYPE_5__ {int gs_cv; int gs_lock; int rt_lock; int kp_user_cv; int kp_user_lock; int kp_nothr_cv; int kp_thread_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__** VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_5(void)
{
 int VAR_10;

 if (VAR_4)
  FUNC_3(VAR_4);

 if (VAR_7) {
  FUNC_4(&VAR_7->kp_thread_lock);
  FUNC_0(&VAR_7->kp_nothr_cv);
  FUNC_4(&VAR_7->kp_user_lock);
  FUNC_0(&VAR_7->kp_user_cv);

  FUNC_2(VAR_7, sizeof (kcf_pool_t));
 }

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_5[VAR_10]) {
   FUNC_4(&(VAR_5[VAR_10]->rt_lock));
   FUNC_2(VAR_5[VAR_10],
       sizeof (kcf_reqid_table_t));
  }
 }

 if (VAR_1) {
  FUNC_4(&VAR_1->gs_lock);
  FUNC_0(&VAR_1->gs_cv);
  FUNC_2(VAR_1, sizeof (kcf_global_swq_t));
 }

 if (VAR_3)
  FUNC_1(VAR_3);
 if (VAR_2)
  FUNC_1(VAR_2);
 if (VAR_6)
  FUNC_1(VAR_6);

 FUNC_4(&VAR_9);
 FUNC_0(&VAR_8);
}
