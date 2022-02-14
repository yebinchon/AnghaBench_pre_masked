
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_4__ {scalar_t__ threads; int * log; int mtx; int cond; int queue; } ;
typedef TYPE_1__ ngx_thread_pool_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int,char*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int ,TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_thread_pool_t *VAR_7, ngx_log_t *VAR_8, ngx_pool_t *VAR_9)
{
    int VAR_10;
    pthread_t VAR_11;
    ngx_uint_t VAR_12;
    pthread_attr_t VAR_13;

    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_8, 0,
               "the configured event method cannot be used with thread pools");
        return VAR_0;
    }

    FUNC_4(&VAR_7->queue);

    if (FUNC_2(&VAR_7->mtx, VAR_8) != VAR_2) {
        return VAR_0;
    }

    if (FUNC_1(&VAR_7->cond, VAR_8) != VAR_2) {
        (void) FUNC_3(&VAR_7->mtx, VAR_8);
        return VAR_0;
    }

    VAR_7->log = VAR_8;

    VAR_10 = FUNC_6(&VAR_13);
    if (VAR_10) {
        FUNC_0(VAR_1, VAR_8, VAR_10,
                      "pthread_attr_init() failed");
        return VAR_0;
    }

    VAR_10 = FUNC_7(&VAR_13, VAR_3);
    if (VAR_10) {
        FUNC_0(VAR_1, VAR_8, VAR_10,
                      "pthread_attr_setdetachstate() failed");
        return VAR_0;
    }
    for (VAR_12 = 0; VAR_12 < VAR_7->threads; VAR_12++) {
        VAR_10 = FUNC_9(&VAR_11, &VAR_13, VAR_6, VAR_7);
        if (VAR_10) {
            FUNC_0(VAR_1, VAR_8, VAR_10,
                          "pthread_create() failed");
            return VAR_0;
        }
    }

    (void) FUNC_5(&VAR_13);

    return VAR_2;
}
