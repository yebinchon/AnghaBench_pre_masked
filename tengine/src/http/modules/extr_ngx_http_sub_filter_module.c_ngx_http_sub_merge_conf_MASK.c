
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_http_sub_tables_t ;
struct TYPE_12__ {int value; } ;
struct TYPE_14__ {int value; TYPE_2__ match; } ;
typedef TYPE_4__ ngx_http_sub_pair_t ;
struct TYPE_15__ {int * value; int match; } ;
typedef TYPE_5__ ngx_http_sub_match_t ;
struct TYPE_16__ {scalar_t__ dynamic; TYPE_3__* matches; int * tables; TYPE_1__* pairs; int types; int types_keys; int last_modified; int once; } ;
typedef TYPE_6__ ngx_http_sub_loc_conf_t ;
struct TYPE_17__ {int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_array_t ;
struct TYPE_13__ {int nelts; TYPE_5__* elts; } ;
struct TYPE_11__ {int nelts; TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_7__*,int *,int *,int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_5__*,int) ;
 void* FUNC_3 (int ,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_uint_t VAR_7, VAR_8;
    ngx_http_sub_pair_t *VAR_9;
    ngx_http_sub_match_t *VAR_10;
    ngx_http_sub_loc_conf_t *VAR_11 = VAR_5;
    ngx_http_sub_loc_conf_t *VAR_12 = VAR_6;

    FUNC_0(VAR_12->once, VAR_11->once, 1);
    FUNC_0(VAR_12->last_modified, VAR_11->last_modified, 0);

    if (FUNC_1(VAR_4, &VAR_12->types_keys, &VAR_12->types,
                             &VAR_11->types_keys, &VAR_11->types,
                             VAR_3)
        != VAR_2)
    {
        return VAR_0;
    }

    if (VAR_12->pairs == ((void*)0)) {
        VAR_12->dynamic = VAR_11->dynamic;
        VAR_12->pairs = VAR_11->pairs;
        VAR_12->matches = VAR_11->matches;
        VAR_12->tables = VAR_11->tables;
    }

    if (VAR_12->pairs && VAR_12->dynamic == 0 && VAR_12->tables == ((void*)0)) {
        VAR_9 = VAR_12->pairs->elts;
        VAR_8 = VAR_12->pairs->nelts;

        VAR_10 = FUNC_3(VAR_4->pool, sizeof(ngx_http_sub_match_t) * VAR_8);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
            VAR_10[VAR_7].match = VAR_9[VAR_7].match.value;
            VAR_10[VAR_7].value = &VAR_9[VAR_7].value;
        }

        VAR_12->matches = FUNC_3(VAR_4->pool, sizeof(ngx_array_t));
        if (VAR_12->matches == ((void*)0)) {
            return VAR_0;
        }

        VAR_12->matches->elts = VAR_10;
        VAR_12->matches->nelts = VAR_8;

        VAR_12->tables = FUNC_3(VAR_4->pool, sizeof(ngx_http_sub_tables_t));
        if (VAR_12->tables == ((void*)0)) {
            return VAR_0;
        }

        FUNC_2(VAR_12->tables, VAR_12->matches->elts,
                                 VAR_12->matches->nelts);
    }

    return VAR_1;
}
