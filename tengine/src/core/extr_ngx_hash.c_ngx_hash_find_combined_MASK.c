
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_13__ {scalar_t__ buckets; } ;
struct TYPE_10__ {TYPE_4__* wc_tail; TYPE_5__* wc_head; TYPE_7__ hash; } ;
typedef TYPE_3__ ngx_hash_combined_t ;
struct TYPE_8__ {scalar_t__ buckets; } ;
struct TYPE_12__ {TYPE_1__ hash; } ;
struct TYPE_9__ {scalar_t__ buckets; } ;
struct TYPE_11__ {TYPE_2__ hash; } ;


 void* FUNC_0 (TYPE_7__*,int ,int *,size_t) ;
 void* FUNC_1 (TYPE_5__*,int *,size_t) ;
 void* FUNC_2 (TYPE_4__*,int *,size_t) ;

void *
FUNC_3(ngx_hash_combined_t *VAR_0, ngx_uint_t VAR_1, u_char *VAR_2,
    size_t VAR_3)
{
    void *VAR_4;

    if (VAR_0->hash.buckets) {
        VAR_4 = FUNC_0(&VAR_0->hash, VAR_1, VAR_2, VAR_3);

        if (VAR_4) {
            return VAR_4;
        }
    }

    if (VAR_3 == 0) {
        return ((void*)0);
    }

    if (VAR_0->wc_head && VAR_0->wc_head->hash.buckets) {
        VAR_4 = FUNC_1(VAR_0->wc_head, VAR_2, VAR_3);

        if (VAR_4) {
            return VAR_4;
        }
    }

    if (VAR_0->wc_tail && VAR_0->wc_tail->hash.buckets) {
        VAR_4 = FUNC_2(VAR_0->wc_tail, VAR_2, VAR_3);

        if (VAR_4) {
            return VAR_4;
        }
    }

    return ((void*)0);
}
