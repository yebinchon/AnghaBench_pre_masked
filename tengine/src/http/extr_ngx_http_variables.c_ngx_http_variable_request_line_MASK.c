
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_int_t ;
struct TYPE_9__ {int not_found; int len; int valid; scalar_t__* data; scalar_t__ no_cacheable; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_8__ {scalar_t__* data; int len; } ;
struct TYPE_10__ {TYPE_2__ request_line; TYPE_1__* header_in; scalar_t__* request_start; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {scalar_t__* last; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    u_char *VAR_6, *VAR_7;

    VAR_7 = VAR_3->request_line.data;

    if (VAR_7 == ((void*)0)) {
        VAR_7 = VAR_3->request_start;

        if (VAR_7 == ((void*)0)) {
            VAR_4->not_found = 1;
            return VAR_2;
        }

        for (VAR_6 = VAR_7; VAR_6 < VAR_3->header_in->last; VAR_6++) {
            if (*VAR_6 == VAR_0 || *VAR_6 == VAR_1) {
                break;
            }
        }

        VAR_3->request_line.len = VAR_6 - VAR_7;
        VAR_3->request_line.data = VAR_7;
    }

    VAR_4->len = VAR_3->request_line.len;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;
    VAR_4->data = VAR_7;

    return VAR_2;
}
