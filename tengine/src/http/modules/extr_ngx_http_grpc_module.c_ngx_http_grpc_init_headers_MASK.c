
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_31__ {scalar_t__ len; } ;
struct TYPE_30__ {int len; int data; } ;
struct TYPE_32__ {TYPE_4__ value; TYPE_3__ key; } ;
typedef TYPE_5__ ngx_keyval_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_33__ {int len; scalar_t__ code; } ;
typedef TYPE_6__ ngx_http_script_copy_code_t ;
struct TYPE_34__ {int ** values; int ** lengths; int * flushes; TYPE_4__* source; TYPE_12__* cf; } ;
typedef TYPE_7__ ngx_http_script_compile_t ;
typedef scalar_t__ ngx_http_script_code_pt ;
struct TYPE_35__ {int host_set; TYPE_2__* headers_source; } ;
typedef TYPE_8__ ngx_http_grpc_loc_conf_t ;
struct TYPE_28__ {scalar_t__ buckets; } ;
struct TYPE_36__ {TYPE_1__ hash; int * lengths; int * values; int flushes; } ;
typedef TYPE_9__ ngx_http_grpc_headers_t ;
struct TYPE_24__ {void* value; int key_hash; TYPE_3__ key; } ;
typedef TYPE_10__ ngx_hash_key_t ;
struct TYPE_25__ {int max_size; int bucket_size; char* name; int * temp_pool; int pool; int (* key ) (int ,int) ;TYPE_1__* hash; } ;
typedef TYPE_11__ ngx_hash_init_t ;
struct TYPE_26__ {int pool; int temp_pool; } ;
typedef TYPE_12__ ngx_conf_t ;
struct TYPE_27__ {size_t nelts; TYPE_5__* elts; } ;
typedef TYPE_13__ ngx_array_t ;
struct TYPE_29__ {size_t nelts; TYPE_5__* elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_13__*,int ,int,int) ;
 void* FUNC_2 (TYPE_13__*) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_11__*,TYPE_5__*,size_t) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (TYPE_7__*,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_conf_t *VAR_4, ngx_http_grpc_loc_conf_t *VAR_5,
    ngx_http_grpc_headers_t *VAR_6, ngx_keyval_t *VAR_7)
{
    u_char *VAR_8;
    size_t VAR_9;
    uintptr_t *VAR_10;
    ngx_uint_t VAR_11;
    ngx_array_t VAR_12, VAR_13;
    ngx_keyval_t *VAR_14, *VAR_15, *VAR_16;
    ngx_hash_key_t *VAR_17;
    ngx_hash_init_t VAR_18;
    ngx_http_script_compile_t VAR_19;
    ngx_http_script_copy_code_t *VAR_20;

    if (VAR_6->hash.buckets) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_12, VAR_4->temp_pool, 4, sizeof(ngx_hash_key_t))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_1(&VAR_13, VAR_4->temp_pool, 4, sizeof(ngx_keyval_t))
        != VAR_1)
    {
        return VAR_0;
    }

    VAR_6->lengths = FUNC_0(VAR_4->pool, 64, 1);
    if (VAR_6->lengths == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->values = FUNC_0(VAR_4->pool, 512, 1);
    if (VAR_6->values == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_5->headers_source) {

        VAR_14 = VAR_5->headers_source->elts;
        for (VAR_11 = 0; VAR_11 < VAR_5->headers_source->nelts; VAR_11++) {

            if (VAR_14[VAR_11].key.len == 4
                && FUNC_10(VAR_14[VAR_11].key.data, (u_char *) "Host", 4) == 0)
            {
                VAR_5->host_set = 1;
            }

            VAR_15 = FUNC_2(&VAR_13);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }

            *VAR_15 = VAR_14[VAR_11];
        }
    }

    VAR_16 = VAR_7;

    while (VAR_16->key.len) {

        VAR_14 = VAR_13.elts;
        for (VAR_11 = 0; VAR_11 < VAR_13.nelts; VAR_11++) {
            if (FUNC_9(VAR_16->key.data, VAR_14[VAR_11].key.data) == 0) {
                goto next;
            }
        }

        VAR_15 = FUNC_2(&VAR_13);
        if (VAR_15 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_15 = *VAR_16;

    next:

        VAR_16++;
    }


    VAR_14 = VAR_13.elts;
    for (VAR_11 = 0; VAR_11 < VAR_13.nelts; VAR_11++) {

        VAR_17 = FUNC_2(&VAR_12);
        if (VAR_17 == ((void*)0)) {
            return VAR_0;
        }

        VAR_17->key = VAR_14[VAR_11].key;
        VAR_17->key_hash = FUNC_5(VAR_14[VAR_11].key.data, VAR_14[VAR_11].key.len);
        VAR_17->value = (void *) 1;

        if (VAR_14[VAR_11].value.len == 0) {
            continue;
        }

        VAR_20 = FUNC_3(VAR_6->lengths,
                                sizeof(ngx_http_script_copy_code_t));
        if (VAR_20 == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->code = (ngx_http_script_code_pt) (void *)
                                                 VAR_3;
        VAR_20->len = VAR_14[VAR_11].key.len;

        VAR_9 = (sizeof(ngx_http_script_copy_code_t)
                + VAR_14[VAR_11].key.len + sizeof(uintptr_t) - 1)
               & ~(sizeof(uintptr_t) - 1);

        VAR_20 = FUNC_3(VAR_6->values, VAR_9);
        if (VAR_20 == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->code = VAR_2;
        VAR_20->len = VAR_14[VAR_11].key.len;

        VAR_8 = (u_char *) VAR_20 + sizeof(ngx_http_script_copy_code_t);
        FUNC_7(VAR_8, VAR_14[VAR_11].key.data, VAR_14[VAR_11].key.len);

        FUNC_8(&VAR_19, sizeof(ngx_http_script_compile_t));

        VAR_19.cf = VAR_4;
        VAR_19.source = &VAR_14[VAR_11].value;
        VAR_19.flushes = &VAR_6->flushes;
        VAR_19.lengths = &VAR_6->lengths;
        VAR_19.values = &VAR_6->values;

        if (FUNC_6(&VAR_19) != VAR_1) {
            return VAR_0;
        }

        VAR_10 = FUNC_3(VAR_6->lengths, sizeof(uintptr_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_10 = (uintptr_t) ((void*)0);

        VAR_10 = FUNC_3(VAR_6->values, sizeof(uintptr_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_10 = (uintptr_t) ((void*)0);
    }

    VAR_10 = FUNC_3(VAR_6->lengths, sizeof(uintptr_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_10 = (uintptr_t) ((void*)0);


    VAR_18.hash = &VAR_6->hash;
    VAR_18.key = FUNC_5;
    VAR_18.max_size = 512;
    VAR_18.bucket_size = 64;
    VAR_18.name = "grpc_headers_hash";
    VAR_18.pool = VAR_4->pool;
    VAR_18.temp_pool = ((void*)0);

    return FUNC_4(&VAR_18, VAR_12.elts, VAR_12.nelts);
}
