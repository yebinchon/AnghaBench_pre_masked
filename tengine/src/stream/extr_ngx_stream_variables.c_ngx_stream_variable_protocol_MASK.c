
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int len; int valid; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_stream_session_t *VAR_2,
    ngx_stream_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    VAR_3->len = 3;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = (u_char *) (VAR_2->connection->type == VAR_1 ? "UDP" : "TCP");

    return VAR_0;
}
