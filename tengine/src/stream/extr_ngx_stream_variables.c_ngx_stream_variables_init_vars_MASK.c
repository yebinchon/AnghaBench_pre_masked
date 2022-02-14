
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_18__ {size_t len; int * data; } ;
struct TYPE_24__ {uintptr_t data; int flags; size_t index; TYPE_14__ name; int * get_handler; } ;
typedef TYPE_6__ ngx_stream_variable_t ;
struct TYPE_20__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_19__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_25__ {TYPE_5__* variables_keys; int variables_hash_bucket_size; int variables_hash_max_size; int variables_hash; TYPE_2__ prefix_variables; TYPE_1__ variables; } ;
typedef TYPE_7__ ngx_stream_core_main_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {size_t len; int * data; } ;
struct TYPE_26__ {TYPE_3__ key; TYPE_6__* value; } ;
typedef TYPE_8__ ngx_hash_key_t ;
struct TYPE_27__ {char* name; int * temp_pool; int pool; int bucket_size; int max_size; int key; int * hash; } ;
typedef TYPE_9__ ngx_hash_init_t ;
struct TYPE_17__ {int pool; int log; } ;
typedef TYPE_10__ ngx_conf_t ;
struct TYPE_22__ {size_t nelts; TYPE_8__* elts; } ;
struct TYPE_23__ {TYPE_4__ keys; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_9__*,TYPE_8__*,size_t) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_14__*) ;
 TYPE_7__* FUNC_2 (TYPE_10__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,int *,size_t) ;

ngx_int_t
FUNC_4(ngx_conf_t *VAR_8)
{
    size_t VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    ngx_hash_key_t *VAR_12;
    ngx_hash_init_t VAR_13;
    ngx_stream_variable_t *VAR_14, *VAR_15, *VAR_16;
    ngx_stream_core_main_conf_t *VAR_17;



    VAR_17 = FUNC_2(VAR_8, VAR_7);

    VAR_14 = VAR_17->variables.elts;
    VAR_16 = VAR_17->prefix_variables.elts;
    VAR_12 = VAR_17->variables_keys->keys.elts;

    for (VAR_10 = 0; VAR_10 < VAR_17->variables.nelts; VAR_10++) {

        for (VAR_11 = 0; VAR_11 < VAR_17->variables_keys->keys.nelts; VAR_11++) {

            VAR_15 = VAR_12[VAR_11].value;

            if (VAR_14[VAR_10].name.len == VAR_12[VAR_11].key.len
                && FUNC_3(VAR_14[VAR_10].name.data, VAR_12[VAR_11].key.data, VAR_14[VAR_10].name.len)
                   == 0)
            {
                VAR_14[VAR_10].get_handler = VAR_15->get_handler;
                VAR_14[VAR_10].data = VAR_15->data;

                VAR_15->flags |= VAR_3;
                VAR_14[VAR_10].flags = VAR_15->flags;

                VAR_15->index = VAR_10;

                if (VAR_15->get_handler == ((void*)0)
                    || (VAR_15->flags & VAR_5))
                {
                    break;
                }

                goto next;
            }
        }

        VAR_9 = 0;
        VAR_15 = ((void*)0);

        for (VAR_11 = 0; VAR_11 < VAR_17->prefix_variables.nelts; VAR_11++) {
            if (VAR_14[VAR_10].name.len >= VAR_16[VAR_11].name.len && VAR_14[VAR_10].name.len > VAR_9
                && FUNC_3(VAR_14[VAR_10].name.data, VAR_16[VAR_11].name.data, VAR_16[VAR_11].name.len)
                   == 0)
            {
                VAR_15 = &VAR_16[VAR_11];
                VAR_9 = VAR_16[VAR_11].name.len;
            }
        }

        if (VAR_15) {
            VAR_14[VAR_10].get_handler = VAR_15->get_handler;
            VAR_14[VAR_10].data = (uintptr_t) &VAR_14[VAR_10].name;
            VAR_14[VAR_10].flags = VAR_15->flags;

            goto next;
         }

        if (VAR_14[VAR_10].get_handler == ((void*)0)) {
            FUNC_1(VAR_1, VAR_8->log, 0,
                          "unknown \"%V\" variable", &VAR_14[VAR_10].name);
            return VAR_0;
        }

    next:
        continue;
    }


    for (VAR_11 = 0; VAR_11 < VAR_17->variables_keys->keys.nelts; VAR_11++) {
        VAR_15 = VAR_12[VAR_11].value;

        if (VAR_15->flags & VAR_4) {
            VAR_12[VAR_11].key.data = ((void*)0);
        }
    }


    VAR_13.hash = &VAR_17->variables_hash;
    VAR_13.key = VAR_6;
    VAR_13.max_size = VAR_17->variables_hash_max_size;
    VAR_13.bucket_size = VAR_17->variables_hash_bucket_size;
    VAR_13.name = "variables_hash";
    VAR_13.pool = VAR_8->pool;
    VAR_13.temp_pool = ((void*)0);

    if (FUNC_0(&VAR_13, VAR_17->variables_keys->keys.elts,
                      VAR_17->variables_keys->keys.nelts)
        != VAR_2)
    {
        return VAR_0;
    }

    VAR_17->variables_keys = ((void*)0);

    return VAR_2;
}
