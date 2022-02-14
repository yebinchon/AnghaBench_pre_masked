
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_queue_t ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

ngx_queue_t *
FUNC_3(ngx_queue_t *VAR_0)
{
    ngx_queue_t *VAR_1, *VAR_2;

    VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 == FUNC_1(VAR_0)) {
        return VAR_1;
    }

    VAR_2 = FUNC_0(VAR_0);

    for ( ;; ) {
        VAR_1 = FUNC_2(VAR_1);

        VAR_2 = FUNC_2(VAR_2);

        if (VAR_2 == FUNC_1(VAR_0)) {
            return VAR_1;
        }

        VAR_2 = FUNC_2(VAR_2);

        if (VAR_2 == FUNC_1(VAR_0)) {
            return VAR_1;
        }
    }
}
