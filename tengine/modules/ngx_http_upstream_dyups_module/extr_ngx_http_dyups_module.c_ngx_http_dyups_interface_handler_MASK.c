
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ method; int uri; int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int ngx_event_t ;
typedef int ngx_array_t ;
struct TYPE_8__ {int msg_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4)
{
    ngx_array_t *VAR_5;
    ngx_event_t *VAR_6;

    VAR_6 = &VAR_3.msg_timer;

    VAR_5 = FUNC_0(VAR_4->pool, &VAR_4->uri);
    if (VAR_5 == ((void*)0)) {
        return VAR_2;
    }

    if (VAR_4->method == VAR_1) {
        FUNC_4(VAR_6);
        return FUNC_2(VAR_4, VAR_5);
    }

    if (VAR_4->method == VAR_0) {
        return FUNC_1(VAR_4, VAR_5);
    }

    return FUNC_3(VAR_4);
}
