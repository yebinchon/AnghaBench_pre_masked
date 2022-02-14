
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_6__ {int valid; int * data; int * len; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_stream_variable_value_t ;
struct TYPE_7__ {TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int local_sockaddr; int pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int *,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;
 int * FUNC_3 (int *,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_2,
    ngx_stream_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_uint_t VAR_5;

    VAR_3->len = 0;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    if (FUNC_0(VAR_2->connection, ((void*)0), 0) != VAR_1) {
        return VAR_0;
    }

    VAR_3->data = FUNC_2(VAR_2->connection->pool, sizeof("65535") - 1);
    if (VAR_3->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_2->connection->local_sockaddr);

    if (VAR_5 > 0 && VAR_5 < 65536) {
        VAR_3->len = FUNC_3(VAR_3->data, "%ui", VAR_5) - VAR_3->data;
    }

    return VAR_1;
}
