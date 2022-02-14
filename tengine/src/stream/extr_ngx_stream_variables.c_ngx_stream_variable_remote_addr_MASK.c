
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_3__ ngx_stream_variable_value_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int data; int len; } ;
struct TYPE_7__ {TYPE_2__ addr_text; } ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_stream_session_t *VAR_1,
    ngx_stream_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    VAR_2->len = VAR_1->connection->addr_text.len;
    VAR_2->valid = 1;
    VAR_2->no_cacheable = 0;
    VAR_2->not_found = 0;
    VAR_2->data = VAR_1->connection->addr_text.data;

    return VAR_0;
}
