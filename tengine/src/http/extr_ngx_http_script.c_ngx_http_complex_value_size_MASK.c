
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_11__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {size_t size; } ;
struct TYPE_12__ {TYPE_1__ u; int * lengths; } ;
typedef TYPE_4__ ngx_http_complex_value_t ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 size_t FUNC_2 (int *) ;

size_t
FUNC_3(ngx_http_request_t *VAR_3,
    ngx_http_complex_value_t *VAR_4, size_t VAR_5)
{
    size_t VAR_6;
    ngx_str_t VAR_7;

    if (VAR_4 == ((void*)0)) {
        return VAR_5;
    }

    if (VAR_4->lengths == ((void*)0)) {
        return VAR_4->u.size;
    }

    if (FUNC_0(VAR_3, VAR_4, &VAR_7) != VAR_2) {
        return VAR_5;
    }

    VAR_6 = FUNC_2(&VAR_7);

    if (VAR_6 == (size_t) VAR_0) {
        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                      "invalid size \"%V\"", &VAR_7);
        return VAR_5;
    }

    return VAR_6;
}
