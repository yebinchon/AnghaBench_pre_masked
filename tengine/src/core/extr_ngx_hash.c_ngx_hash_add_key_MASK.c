
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_9__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {int nelts; TYPE_1__* elts; } ;
struct TYPE_10__ {int hsize; int temp_pool; TYPE_4__* dns_wc_tail_hash; TYPE_4__ dns_wc_tail; TYPE_4__* dns_wc_head_hash; TYPE_4__ dns_wc_head; TYPE_4__* keys_hash; TYPE_4__ keys; } ;
typedef TYPE_2__ ngx_hash_keys_arrays_t ;
struct TYPE_11__ {void* value; scalar_t__ key_hash; TYPE_1__ key; } ;
typedef TYPE_3__ ngx_hash_key_t ;
typedef TYPE_4__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int,int) ;
 void* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,size_t) ;
 void* FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (char*,char*,size_t) ;
 char FUNC_9 (char) ;

ngx_int_t
FUNC_10(ngx_hash_keys_arrays_t *VAR_6, ngx_str_t *VAR_7, void *VAR_8,
    ngx_uint_t VAR_9)
{
    size_t VAR_10;
    u_char *VAR_11;
    ngx_str_t *VAR_12;
    ngx_uint_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    ngx_array_t *VAR_18, *VAR_19;
    ngx_hash_key_t *VAR_20;

    VAR_17 = VAR_7->len;

    if (VAR_9 & VAR_4) {






        VAR_15 = 0;

        for (VAR_13 = 0; VAR_13 < VAR_7->len; VAR_13++) {

            if (VAR_7->data[VAR_13] == '*') {
                if (++VAR_15 > 1) {
                    return VAR_1;
                }
            }

            if (VAR_7->data[VAR_13] == '.' && VAR_7->data[VAR_13 + 1] == '.') {
                return VAR_1;
            }

            if (VAR_7->data[VAR_13] == '\0') {
                return VAR_1;
            }
        }

        if (VAR_7->len > 1 && VAR_7->data[0] == '.') {
            VAR_16 = 1;
            goto wildcard;
        }

        if (VAR_7->len > 2) {

            if (VAR_7->data[0] == '*' && VAR_7->data[1] == '.') {
                VAR_16 = 2;
                goto wildcard;
            }

            if (VAR_7->data[VAR_13 - 2] == '.' && VAR_7->data[VAR_13 - 1] == '*') {
                VAR_16 = 0;
                VAR_17 -= 2;
                goto wildcard;
            }
        }

        if (VAR_15) {
            return VAR_1;
        }
    }



    VAR_14 = 0;

    for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
        if (!(VAR_9 & VAR_3)) {
            VAR_7->data[VAR_13] = FUNC_9(VAR_7->data[VAR_13]);
        }
        VAR_14 = FUNC_3(VAR_14, VAR_7->data[VAR_13]);
    }

    VAR_14 %= VAR_6->hsize;



    VAR_12 = VAR_6->keys_hash[VAR_14].elts;

    if (VAR_12) {
        for (VAR_13 = 0; VAR_13 < VAR_6->keys_hash[VAR_14].nelts; VAR_13++) {
            if (VAR_17 != VAR_12[VAR_13].len) {
                continue;
            }

            if (FUNC_8(VAR_7->data, VAR_12[VAR_13].data, VAR_17) == 0) {
                return VAR_0;
            }
        }

    } else {
        if (FUNC_0(&VAR_6->keys_hash[VAR_14], VAR_6->temp_pool, 4,
                           sizeof(ngx_str_t))
            != VAR_5)
        {
            return VAR_2;
        }
    }

    VAR_12 = FUNC_1(&VAR_6->keys_hash[VAR_14]);
    if (VAR_12 == ((void*)0)) {
        return VAR_2;
    }

    *VAR_12 = *VAR_7;

    VAR_20 = FUNC_1(&VAR_6->keys);
    if (VAR_20 == ((void*)0)) {
        return VAR_2;
    }

    VAR_20->key = *VAR_7;
    VAR_20->key_hash = FUNC_4(VAR_7->data, VAR_17);
    VAR_20->value = VAR_8;

    return VAR_5;


wildcard:



    VAR_14 = FUNC_5(&VAR_7->data[VAR_16], &VAR_7->data[VAR_16], VAR_17 - VAR_16);

    VAR_14 %= VAR_6->hsize;

    if (VAR_16 == 1) {



        VAR_12 = VAR_6->keys_hash[VAR_14].elts;

        if (VAR_12) {
            VAR_10 = VAR_17 - VAR_16;

            for (VAR_13 = 0; VAR_13 < VAR_6->keys_hash[VAR_14].nelts; VAR_13++) {
                if (VAR_10 != VAR_12[VAR_13].len) {
                    continue;
                }

                if (FUNC_8(&VAR_7->data[1], VAR_12[VAR_13].data, VAR_10) == 0) {
                    return VAR_0;
                }
            }

        } else {
            if (FUNC_0(&VAR_6->keys_hash[VAR_14], VAR_6->temp_pool, 4,
                               sizeof(ngx_str_t))
                != VAR_5)
            {
                return VAR_2;
            }
        }

        VAR_12 = FUNC_1(&VAR_6->keys_hash[VAR_14]);
        if (VAR_12 == ((void*)0)) {
            return VAR_2;
        }

        VAR_12->len = VAR_17 - 1;
        VAR_12->data = FUNC_7(VAR_6->temp_pool, VAR_12->len);
        if (VAR_12->data == ((void*)0)) {
            return VAR_2;
        }

        FUNC_6(VAR_12->data, &VAR_7->data[1], VAR_12->len);
    }


    if (VAR_16) {






        VAR_11 = FUNC_7(VAR_6->temp_pool, VAR_17);
        if (VAR_11 == ((void*)0)) {
            return VAR_2;
        }

        VAR_10 = 0;
        VAR_15 = 0;

        for (VAR_13 = VAR_17 - 1; VAR_13; VAR_13--) {
            if (VAR_7->data[VAR_13] == '.') {
                FUNC_6(&VAR_11[VAR_15], &VAR_7->data[VAR_13 + 1], VAR_10);
                VAR_15 += VAR_10;
                VAR_11[VAR_15++] = '.';
                VAR_10 = 0;
                continue;
            }

            VAR_10++;
        }

        if (VAR_10) {
            FUNC_6(&VAR_11[VAR_15], &VAR_7->data[1], VAR_10);
            VAR_15 += VAR_10;
        }

        VAR_11[VAR_15] = '\0';

        VAR_19 = &VAR_6->dns_wc_head;
        VAR_18 = &VAR_6->dns_wc_head_hash[VAR_14];

    } else {



        VAR_17++;

        VAR_11 = FUNC_7(VAR_6->temp_pool, VAR_17);
        if (VAR_11 == ((void*)0)) {
            return VAR_2;
        }

        FUNC_2(VAR_11, VAR_7->data, VAR_17);

        VAR_19 = &VAR_6->dns_wc_tail;
        VAR_18 = &VAR_6->dns_wc_tail_hash[VAR_14];
    }




    VAR_12 = VAR_18->elts;

    if (VAR_12) {
        VAR_10 = VAR_17 - VAR_16;

        for (VAR_13 = 0; VAR_13 < VAR_18->nelts; VAR_13++) {
            if (VAR_10 != VAR_12[VAR_13].len) {
                continue;
            }

            if (FUNC_8(VAR_7->data + VAR_16, VAR_12[VAR_13].data, VAR_10) == 0) {
                return VAR_0;
            }
        }

    } else {
        if (FUNC_0(VAR_18, VAR_6->temp_pool, 4, sizeof(ngx_str_t)) != VAR_5)
        {
            return VAR_2;
        }
    }

    VAR_12 = FUNC_1(VAR_18);
    if (VAR_12 == ((void*)0)) {
        return VAR_2;
    }

    VAR_12->len = VAR_17 - VAR_16;
    VAR_12->data = FUNC_7(VAR_6->temp_pool, VAR_12->len);
    if (VAR_12->data == ((void*)0)) {
        return VAR_2;
    }

    FUNC_6(VAR_12->data, VAR_7->data + VAR_16, VAR_12->len);




    VAR_20 = FUNC_1(VAR_19);
    if (VAR_20 == ((void*)0)) {
        return VAR_2;
    }

    VAR_20->key.len = VAR_17 - 1;
    VAR_20->key.data = VAR_11;
    VAR_20->key_hash = 0;
    VAR_20->value = VAR_8;

    return VAR_5;
}
