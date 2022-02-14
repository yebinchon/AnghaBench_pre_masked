
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {TYPE_8__* (* query ) (TYPE_3__*,TYPE_4__*,size_t*,int ) ;} ;
typedef TYPE_3__ ngx_trie_t ;
struct TYPE_16__ {char* data; scalar_t__ len; } ;
typedef TYPE_4__ ngx_str_t ;
typedef size_t ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_17__ {int left; int right; int * var; } ;
typedef TYPE_5__ ngx_http_user_agent_interval_t ;
struct TYPE_18__ {int * default_value; TYPE_3__* trie; } ;
typedef TYPE_6__ ngx_http_user_agent_ctx_t ;
struct TYPE_14__ {TYPE_1__* user_agent; } ;
struct TYPE_19__ {TYPE_2__ headers_in; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_20__ {size_t nelts; TYPE_5__* elts; } ;
typedef TYPE_8__ ngx_array_t ;
struct TYPE_13__ {TYPE_4__ value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_8__* FUNC_0 (TYPE_3__*,TYPE_4__*,size_t*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    uint64_t VAR_7, VAR_8, VAR_9;
    ngx_int_t VAR_10, VAR_11, VAR_12, VAR_13;
    ngx_str_t *VAR_14;
    ngx_trie_t *VAR_15;
    ngx_array_t *VAR_16;
    ngx_http_user_agent_ctx_t *VAR_17;
    ngx_http_user_agent_interval_t *VAR_18;

    VAR_17 = (ngx_http_user_agent_ctx_t *) VAR_6;
    VAR_15 = VAR_17->trie;

    if (VAR_4->headers_in.user_agent == ((void*)0)) {
      goto end;
    }

    VAR_14 = &(VAR_4->headers_in.user_agent->value);

    VAR_16 = VAR_15->query(VAR_15, VAR_14, &VAR_12, VAR_3);
    if (VAR_16 == ((void*)0) || VAR_12 < 0) {
        goto end;
    }

    VAR_9 = 0;
    VAR_8 = VAR_0;
    VAR_7 = 0;
    VAR_13 = 0;

    for ( ; VAR_12 < (ngx_int_t) VAR_14->len; VAR_12++, VAR_13++) {
        if (VAR_14->data[VAR_12] >= '0'
            && VAR_14->data[VAR_12] <= '9') {
            break;

        } else if (VAR_14->data[VAR_12] == ';'
                   || VAR_14->data[VAR_12] == '('
                   || VAR_14->data[VAR_12] == ')')
        {
            break;
        }

        if(VAR_13 >= VAR_1) {
            break;
        }
    }

    VAR_18 = VAR_16->elts;
    VAR_11 = VAR_16->nelts;

    for ( ; VAR_12 < (ngx_int_t) VAR_14->len; VAR_12++) {

        if (VAR_14->data[VAR_12] == '.') {
            VAR_9 += VAR_7 * VAR_8;
            VAR_7 = 0;
            VAR_8 /= 10000;
            continue;

        } else if(VAR_14->data[VAR_12] >= '0'
                  && VAR_14->data[VAR_12] <= '9') {

            VAR_7 = VAR_7 * 10 +VAR_14->data[VAR_12] - '0';
            continue;
        }

        break;
    }

    VAR_9 += VAR_7 * VAR_8;
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
        if (VAR_9 >= VAR_18[VAR_10].left && VAR_9 <= VAR_18[VAR_10].right) {
            *VAR_5 = *(VAR_18[VAR_10].var);
            return VAR_2;
        }
    }

end:

    *VAR_5 = *VAR_17->default_value;
    return VAR_2;
}
