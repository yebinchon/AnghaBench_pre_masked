
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_10__ {int valid; int not_found; int len; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_3__ ngx_stream_variable_value_t ;
struct TYPE_11__ {int bytes_sent; int bytes_received; } ;
typedef TYPE_4__ ngx_stream_upstream_state_t ;
struct TYPE_12__ {TYPE_2__* upstream_states; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int nelts; TYPE_4__* elts; } ;
struct TYPE_8__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,size_t) ;
 int * FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_stream_session_t *VAR_3,
    ngx_stream_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    u_char *VAR_6;
    size_t VAR_7;
    ngx_uint_t VAR_8;
    ngx_stream_upstream_state_t *VAR_9;

    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    if (VAR_3->upstream_states == ((void*)0) || VAR_3->upstream_states->nelts == 0) {
        VAR_4->not_found = 1;
        return VAR_2;
    }

    VAR_7 = VAR_3->upstream_states->nelts * (VAR_1 + 2);

    VAR_6 = FUNC_0(VAR_3->connection->pool, VAR_7);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->data = VAR_6;

    VAR_8 = 0;
    VAR_9 = VAR_3->upstream_states->elts;

    for ( ;; ) {

        if (VAR_5 == 1) {
            VAR_6 = FUNC_1(VAR_6, "%O", VAR_9[VAR_8].bytes_received);

        } else {
            VAR_6 = FUNC_1(VAR_6, "%O", VAR_9[VAR_8].bytes_sent);
        }

        if (++VAR_8 == VAR_3->upstream_states->nelts) {
            break;
        }

        *VAR_6++ = ',';
        *VAR_6++ = ' ';
    }

    VAR_4->len = VAR_6 - VAR_4->data;

    return VAR_2;
}
