
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutexattr_t ;
typedef int ngx_thread_mutex_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

ngx_int_t
FUNC_5(ngx_thread_mutex_t *VAR_5, ngx_log_t *VAR_6)
{
    ngx_err_t VAR_7;
    pthread_mutexattr_t VAR_8;

    VAR_7 = FUNC_3(&VAR_8);
    if (VAR_7 != 0) {
        FUNC_0(VAR_2, VAR_6, VAR_7,
                      "pthread_mutexattr_init() failed");
        return VAR_0;
    }

    VAR_7 = FUNC_4(&VAR_8, VAR_4);
    if (VAR_7 != 0) {
        FUNC_0(VAR_2, VAR_6, VAR_7,
                      "pthread_mutexattr_settype"
                      "(PTHREAD_MUTEX_ERRORCHECK) failed");
        return VAR_0;
    }

    VAR_7 = FUNC_1(VAR_5, &VAR_8);
    if (VAR_7 != 0) {
        FUNC_0(VAR_2, VAR_6, VAR_7,
                      "pthread_mutex_init() failed");
        return VAR_0;
    }

    VAR_7 = FUNC_2(&VAR_8);
    if (VAR_7 != 0) {
        FUNC_0(VAR_1, VAR_6, VAR_7,
                      "pthread_mutexattr_destroy() failed");
    }

    return VAR_3;
}
