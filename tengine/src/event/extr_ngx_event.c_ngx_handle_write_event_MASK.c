
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {scalar_t__ ready; scalar_t__ oneshot; scalar_t__ active; int * data; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,size_t) ;

ngx_int_t
FUNC_3(ngx_event_t *VAR_10, size_t VAR_11)
{
    ngx_connection_t *VAR_12;

    if (VAR_11) {
        VAR_12 = VAR_10->data;

        if (FUNC_2(VAR_12, VAR_11) == VAR_1) {
            return VAR_1;
        }
    }

    if (VAR_9 & VAR_5) {



        if (!VAR_10->active && !VAR_10->ready) {
            if (FUNC_0(VAR_10, VAR_8,
                              VAR_0 | (VAR_11 ? VAR_3 : 0))
                == VAR_1)
            {
                return VAR_1;
            }
        }

        return VAR_4;

    } else if (VAR_9 & VAR_7) {



        if (!VAR_10->active && !VAR_10->ready) {
            if (FUNC_0(VAR_10, VAR_8, VAR_2)
                == VAR_1)
            {
                return VAR_1;
            }

            return VAR_4;
        }

        if (VAR_10->active && VAR_10->ready) {
            if (FUNC_1(VAR_10, VAR_8, VAR_2)
                == VAR_1)
            {
                return VAR_1;
            }

            return VAR_4;
        }

    } else if (VAR_9 & VAR_6) {



        if (!VAR_10->active && !VAR_10->ready) {
            if (FUNC_0(VAR_10, VAR_8, 0) == VAR_1) {
                return VAR_1;
            }

            return VAR_4;
        }

        if (VAR_10->oneshot && VAR_10->ready) {
            if (FUNC_1(VAR_10, VAR_8, 0) == VAR_1) {
                return VAR_1;
            }

            return VAR_4;
        }
    }



    return VAR_4;
}
