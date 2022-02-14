
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_thread_mutex_t ;
typedef int ngx_thread_cond_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,scalar_t__,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;

ngx_int_t
FUNC_3(ngx_thread_cond_t *VAR_3, ngx_thread_mutex_t *VAR_4,
    ngx_log_t *VAR_5)
{
    ngx_err_t VAR_6;

    VAR_6 = FUNC_2(VAR_3, VAR_4);





    if (VAR_6 == 0) {
        return VAR_2;
    }

    FUNC_0(VAR_1, VAR_5, VAR_6, "pthread_cond_wait() failed");

    return VAR_0;
}
