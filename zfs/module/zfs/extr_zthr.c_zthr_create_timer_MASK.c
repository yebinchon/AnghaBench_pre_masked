
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zthr_state_lock; int zthr_thread; int zthr_sleep_timeout; void* zthr_arg; int * zthr_func; int * zthr_checkfunc; int zthr_wait_cv; int zthr_cv; int zthr_request_lock; } ;
typedef TYPE_1__ zthr_t ;
typedef int zthr_func_t ;
typedef int zthr_checkfunc_t ;
typedef int hrtime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,TYPE_1__*,int ,int *,int ,int ) ;
 int VAR_6 ;

zthr_t *
FUNC_6(zthr_checkfunc_t *VAR_7, zthr_func_t *VAR_8,
    void *VAR_9, hrtime_t VAR_10)
{
 zthr_t *VAR_11 = FUNC_1(sizeof (*VAR_11), VAR_1);
 FUNC_4(&VAR_11->zthr_state_lock, ((void*)0), VAR_2, ((void*)0));
 FUNC_4(&VAR_11->zthr_request_lock, ((void*)0), VAR_2, ((void*)0));
 FUNC_0(&VAR_11->zthr_cv, ((void*)0), VAR_0, ((void*)0));
 FUNC_0(&VAR_11->zthr_wait_cv, ((void*)0), VAR_0, ((void*)0));

 FUNC_2(&VAR_11->zthr_state_lock);
 VAR_11->zthr_checkfunc = VAR_7;
 VAR_11->zthr_func = VAR_8;
 VAR_11->zthr_arg = VAR_9;
 VAR_11->zthr_sleep_timeout = VAR_10;

 VAR_11->zthr_thread = FUNC_5(((void*)0), 0, VAR_6, VAR_11,
     0, &VAR_5, VAR_3, VAR_4);
 FUNC_3(&VAR_11->zthr_state_lock);

 return (VAR_11);
}
