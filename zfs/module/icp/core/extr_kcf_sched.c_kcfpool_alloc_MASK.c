
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kcf_pool_t ;
struct TYPE_3__ {int kp_user_cv; int kp_user_lock; int kp_nothr_cv; int kp_thread_lock; void* kp_user_waiting; scalar_t__ kp_nthrs; void* kp_signal_create_thread; scalar_t__ kp_blockedthreads; scalar_t__ kp_idlethreads; scalar_t__ kp_threads; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3()
{
 VAR_6 = FUNC_1(sizeof (kcf_pool_t), VAR_3);

 VAR_6->kp_threads = VAR_6->kp_idlethreads = 0;
 VAR_6->kp_blockedthreads = 0;
 VAR_6->kp_signal_create_thread = VAR_0;
 VAR_6->kp_nthrs = 0;
 VAR_6->kp_user_waiting = VAR_0;

 FUNC_2(&VAR_6->kp_thread_lock, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(&VAR_6->kp_nothr_cv, ((void*)0), VAR_1, ((void*)0));

 FUNC_2(&VAR_6->kp_user_lock, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(&VAR_6->kp_user_cv, ((void*)0), VAR_1, ((void*)0));

 VAR_5 = VAR_2;
}
