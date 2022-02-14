
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ len; int data; } ;
struct TYPE_16__ {TYPE_1__ name; } ;
typedef TYPE_2__ ngx_http_header_t ;
struct TYPE_17__ {int headers_in_hash; } ;
typedef TYPE_3__ ngx_http_core_main_conf_t ;
struct TYPE_18__ {TYPE_2__* value; int key_hash; TYPE_1__ key; } ;
typedef TYPE_4__ ngx_hash_key_t ;
struct TYPE_19__ {int max_size; char* name; int * temp_pool; int pool; int bucket_size; int (* key ) (int ,scalar_t__) ;int * hash; } ;
typedef TYPE_5__ ngx_hash_init_t ;
struct TYPE_20__ {int pool; int temp_pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_21__ {int nelts; int elts; } ;
typedef TYPE_7__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ,int,int) ;
 TYPE_4__* FUNC_2 (TYPE_7__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_conf_t *VAR_4, ngx_http_core_main_conf_t *VAR_5)
{
    ngx_array_t VAR_6;
    ngx_hash_key_t *VAR_7;
    ngx_hash_init_t VAR_8;
    ngx_http_header_t *VAR_9;

    if (FUNC_1(&VAR_6, VAR_4->temp_pool, 32, sizeof(ngx_hash_key_t))
        != VAR_1)
    {
        return VAR_0;
    }

    for (VAR_9 = VAR_3; VAR_9->name.len; VAR_9++) {
        VAR_7 = FUNC_2(&VAR_6);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->key = VAR_9->name;
        VAR_7->key_hash = FUNC_4(VAR_9->name.data, VAR_9->name.len);
        VAR_7->value = VAR_9;
    }

    VAR_8.hash = &VAR_5->headers_in_hash;
    VAR_8.key = FUNC_4;
    VAR_8.max_size = 512;
    VAR_8.bucket_size = FUNC_0(64, VAR_2);
    VAR_8.name = "headers_in_hash";
    VAR_8.pool = VAR_4->pool;
    VAR_8.temp_pool = ((void*)0);

    if (FUNC_3(&VAR_8, VAR_6.elts, VAR_6.nelts) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
