
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_14__ {int len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_hash_wildcard_t ;
struct TYPE_12__ {scalar_t__ len; int * data; } ;
struct TYPE_15__ {size_t key_hash; TYPE_1__ key; int * value; } ;
typedef TYPE_4__ ngx_hash_key_t ;
struct TYPE_16__ {int max_size; int bucket_size; size_t (* key ) (int *,int) ;TYPE_7__* pool; TYPE_2__* hash; int name; } ;
typedef TYPE_5__ ngx_hash_init_t ;
struct TYPE_17__ {int len; int * name; int * value; } ;
typedef TYPE_6__ ngx_hash_elt_t ;
struct TYPE_18__ {int log; } ;
struct TYPE_13__ {size_t size; TYPE_6__** buckets; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 int * FUNC_2 (int *,int) ;
 int* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int ,int ,char*,size_t,...) ;
 int FUNC_6 (int*,size_t) ;
 int * FUNC_7 (TYPE_7__*,size_t) ;
 void* FUNC_8 (TYPE_7__*,size_t) ;
 int FUNC_9 (int *,int *,scalar_t__) ;
 size_t FUNC_10 (int *,int) ;

ngx_int_t
FUNC_11(ngx_hash_init_t *VAR_6, ngx_hash_key_t *VAR_7, ngx_uint_t VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10;
    u_short *VAR_11;
    ngx_uint_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    ngx_hash_elt_t *VAR_18, **VAR_19;

    if (VAR_6->max_size == 0) {
        FUNC_5(VAR_2, VAR_6->pool->log, 0,
                      "could not build %s, you should "
                      "increase %s_max_size: %i",
                      VAR_6->name, VAR_6->name, VAR_6->max_size);
        return VAR_0;
    }

    if (VAR_6->bucket_size > 65536 - VAR_5) {
        FUNC_5(VAR_2, VAR_6->pool->log, 0,
                      "could not build %s, too large "
                      "%s_bucket_size: %i",
                      VAR_6->name, VAR_6->name, VAR_6->bucket_size);
        return VAR_0;
    }

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        if (VAR_6->bucket_size < FUNC_0(&VAR_7[VAR_13]) + sizeof(void *))
        {
            FUNC_5(VAR_2, VAR_6->pool->log, 0,
                          "could not build %s, you should "
                          "increase %s_bucket_size: %i",
                          VAR_6->name, VAR_6->name, VAR_6->bucket_size);
            return VAR_0;
        }
    }

    VAR_11 = FUNC_3(VAR_6->max_size * sizeof(u_short), VAR_6->pool->log);
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_17 = VAR_6->bucket_size - sizeof(void *);

    VAR_16 = VAR_8 / (VAR_17 / (2 * sizeof(void *)));
    VAR_16 = VAR_16 ? VAR_16 : 1;

    if (VAR_6->max_size > 10000 && VAR_8 && VAR_6->max_size / VAR_8 < 100) {
        VAR_16 = VAR_6->max_size - 1000;
    }

    for (VAR_15 = VAR_16; VAR_15 <= VAR_6->max_size; VAR_15++) {

        FUNC_6(VAR_11, VAR_15 * sizeof(u_short));

        for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
            if (VAR_7[VAR_13].key.data == ((void*)0)) {
                continue;
            }

            VAR_14 = VAR_7[VAR_13].key_hash % VAR_15;
            VAR_10 = VAR_11[VAR_14] + FUNC_0(&VAR_7[VAR_13]);







            if (VAR_10 > VAR_17) {
                goto next;
            }

            VAR_11[VAR_14] = (u_short) VAR_10;
        }

        goto found;

    next:

        continue;
    }

    VAR_15 = VAR_6->max_size;

    FUNC_5(VAR_3, VAR_6->pool->log, 0,
                  "could not build optimal %s, you should increase "
                  "either %s_max_size: %i or %s_bucket_size: %i; "
                  "ignoring %s_bucket_size",
                  VAR_6->name, VAR_6->name, VAR_6->max_size,
                  VAR_6->name, VAR_6->bucket_size, VAR_6->name);

found:

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
        VAR_11[VAR_12] = sizeof(void *);
    }

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        if (VAR_7[VAR_13].key.data == ((void*)0)) {
            continue;
        }

        VAR_14 = VAR_7[VAR_13].key_hash % VAR_15;
        VAR_10 = VAR_11[VAR_14] + FUNC_0(&VAR_7[VAR_13]);

        if (VAR_10 > 65536 - VAR_5) {
            FUNC_5(VAR_2, VAR_6->pool->log, 0,
                          "could not build %s, you should "
                          "increase %s_max_size: %i",
                          VAR_6->name, VAR_6->name, VAR_6->max_size);
            FUNC_4(VAR_11);
            return VAR_0;
        }

        VAR_11[VAR_14] = (u_short) VAR_10;
    }

    VAR_10 = 0;

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
        if (VAR_11[VAR_12] == sizeof(void *)) {
            continue;
        }

        VAR_11[VAR_12] = (u_short) (FUNC_1(VAR_11[VAR_12], VAR_5));

        VAR_10 += VAR_11[VAR_12];
    }

    if (VAR_6->hash == ((void*)0)) {
        VAR_6->hash = FUNC_8(VAR_6->pool, sizeof(ngx_hash_wildcard_t)
                                             + VAR_15 * sizeof(ngx_hash_elt_t *));
        if (VAR_6->hash == ((void*)0)) {
            FUNC_4(VAR_11);
            return VAR_0;
        }

        VAR_19 = (ngx_hash_elt_t **)
                      ((u_char *) VAR_6->hash + sizeof(ngx_hash_wildcard_t));

    } else {
        VAR_19 = FUNC_8(VAR_6->pool, VAR_15 * sizeof(ngx_hash_elt_t *));
        if (VAR_19 == ((void*)0)) {
            FUNC_4(VAR_11);
            return VAR_0;
        }
    }

    VAR_9 = FUNC_7(VAR_6->pool, VAR_10 + VAR_5);
    if (VAR_9 == ((void*)0)) {
        FUNC_4(VAR_11);
        return VAR_0;
    }

    VAR_9 = FUNC_2(VAR_9, VAR_5);

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
        if (VAR_11[VAR_12] == sizeof(void *)) {
            continue;
        }

        VAR_19[VAR_12] = (ngx_hash_elt_t *) VAR_9;
        VAR_9 += VAR_11[VAR_12];
    }

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
        VAR_11[VAR_12] = 0;
    }

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        if (VAR_7[VAR_13].key.data == ((void*)0)) {
            continue;
        }

        VAR_14 = VAR_7[VAR_13].key_hash % VAR_15;
        VAR_18 = (ngx_hash_elt_t *) ((u_char *) VAR_19[VAR_14] + VAR_11[VAR_14]);

        VAR_18->value = VAR_7[VAR_13].value;
        VAR_18->len = (u_short) VAR_7[VAR_13].key.len;

        FUNC_9(VAR_18->name, VAR_7[VAR_13].key.data, VAR_7[VAR_13].key.len);

        VAR_11[VAR_14] = (u_short) (VAR_11[VAR_14] + FUNC_0(&VAR_7[VAR_13]));
    }

    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
        if (VAR_19[VAR_12] == ((void*)0)) {
            continue;
        }

        VAR_18 = (ngx_hash_elt_t *) ((u_char *) VAR_19[VAR_12] + VAR_11[VAR_12]);

        VAR_18->value = ((void*)0);
    }

    FUNC_4(VAR_11);

    VAR_6->hash->buckets = VAR_19;
    VAR_6->hash->size = VAR_15;
    return VAR_4;
}
