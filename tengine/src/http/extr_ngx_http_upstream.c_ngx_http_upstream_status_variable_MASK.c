
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int valid; int not_found; int len; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_9__ {scalar_t__ peer; scalar_t__ status; } ;
typedef TYPE_3__ ngx_http_upstream_state_t ;
struct TYPE_10__ {TYPE_1__* upstream_states; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {int nelts; TYPE_3__* elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,size_t) ;
 int * FUNC_1 (int *,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    u_char *VAR_5;
    size_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_http_upstream_state_t *VAR_8;

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    if (VAR_2->upstream_states == ((void*)0) || VAR_2->upstream_states->nelts == 0) {
        VAR_3->not_found = 1;
        return VAR_1;
    }

    VAR_6 = VAR_2->upstream_states->nelts * (3 + 2);

    VAR_5 = FUNC_0(VAR_2->pool, VAR_6);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->data = VAR_5;

    VAR_7 = 0;
    VAR_8 = VAR_2->upstream_states->elts;

    for ( ;; ) {
        if (VAR_8[VAR_7].status) {
            VAR_5 = FUNC_1(VAR_5, "%ui", VAR_8[VAR_7].status);

        } else {
            *VAR_5++ = '-';
        }

        if (++VAR_7 == VAR_2->upstream_states->nelts) {
            break;
        }

        if (VAR_8[VAR_7].peer) {
            *VAR_5++ = ',';
            *VAR_5++ = ' ';

        } else {
            *VAR_5++ = ' ';
            *VAR_5++ = ':';
            *VAR_5++ = ' ';

            if (++VAR_7 == VAR_2->upstream_states->nelts) {
                break;
            }

            continue;
        }
    }

    VAR_3->len = VAR_5 - VAR_3->data;

    return VAR_1;
}
