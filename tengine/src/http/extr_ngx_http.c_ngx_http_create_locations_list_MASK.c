
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_queue_t ;
struct TYPE_4__ {int list; TYPE_1__* name; int * inclusive; } ;
typedef TYPE_2__ ngx_http_location_queue_t ;
struct TYPE_3__ {size_t len; int * data; } ;


 scalar_t__ FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_7(ngx_queue_t *VAR_0, ngx_queue_t *VAR_1)
{
    u_char *VAR_2;
    size_t VAR_3;
    ngx_queue_t *VAR_4, VAR_5;
    ngx_http_location_queue_t *VAR_6, *VAR_7;

    if (VAR_1 == FUNC_3(VAR_0)) {
        return;
    }

    VAR_6 = (ngx_http_location_queue_t *) VAR_1;

    if (VAR_6->inclusive == ((void*)0)) {
        FUNC_7(VAR_0, FUNC_4(VAR_1));
        return;
    }

    VAR_3 = VAR_6->name->len;
    VAR_2 = VAR_6->name->data;

    for (VAR_4 = FUNC_4(VAR_1);
         VAR_4 != FUNC_5(VAR_0);
         VAR_4 = FUNC_4(VAR_4))
    {
        VAR_7 = (ngx_http_location_queue_t *) VAR_4;

        if (VAR_3 > VAR_7->name->len
            || FUNC_0(VAR_2, VAR_7->name->data, VAR_3) != 0)
        {
            break;
        }
    }

    VAR_1 = FUNC_4(VAR_1);

    if (VAR_1 == VAR_4) {
        FUNC_7(VAR_0, VAR_4);
        return;
    }

    FUNC_6(VAR_0, VAR_1, &VAR_5);
    FUNC_1(&VAR_6->list, &VAR_5);

    if (VAR_4 == FUNC_5(VAR_0)) {
        FUNC_7(&VAR_6->list, FUNC_2(&VAR_6->list));
        return;
    }

    FUNC_6(&VAR_6->list, VAR_4, &VAR_5);
    FUNC_1(VAR_0, &VAR_5);

    FUNC_7(&VAR_6->list, FUNC_2(&VAR_6->list));

    FUNC_7(VAR_0, VAR_4);
}
