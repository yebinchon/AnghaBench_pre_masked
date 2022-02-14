
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int kcf_areq_node_t ;
struct TYPE_4__ {int gs_lock; int gs_cv; } ;
struct TYPE_3__ {scalar_t__ kp_idlethreads; int kp_threads; int kp_blockedthreads; int kp_nthrs; int kp_user_lock; int kp_user_cv; scalar_t__ kp_signal_create_thread; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(kcf_areq_node_t *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;

 if ((VAR_7 = FUNC_2(VAR_6)) != 0)
  return (VAR_7);

 if (VAR_5->kp_idlethreads > 0) {

  FUNC_3(&VAR_2->gs_lock);
  FUNC_1(&VAR_2->gs_cv);
  FUNC_4(&VAR_2->gs_lock);

  return (VAR_1);
 }





 VAR_8 = VAR_4 -
     (VAR_5->kp_threads - VAR_5->kp_blockedthreads);
 if (VAR_8 > 0) {




  VAR_8 = FUNC_0(VAR_8, VAR_3 - (int)VAR_5->kp_threads);
  if (VAR_8 > 0) {

   FUNC_3(&VAR_5->kp_user_lock);
   if (!VAR_5->kp_signal_create_thread) {
    VAR_5->kp_signal_create_thread = VAR_0;
    VAR_5->kp_nthrs = VAR_8;
    FUNC_1(&VAR_5->kp_user_cv);
   }
   FUNC_4(&VAR_5->kp_user_lock);
  }
 }

 return (VAR_1);
}
