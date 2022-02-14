
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_9__ {scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_2__ ngx_stream_geo_range_t ;
struct TYPE_8__ {scalar_t__* low; } ;
struct TYPE_10__ {TYPE_1__ high; } ;
typedef TYPE_3__ ngx_stream_geo_conf_ctx_t ;
typedef int ngx_conf_t ;
struct TYPE_11__ {size_t nelts; TYPE_2__* elts; } ;
typedef TYPE_4__ ngx_array_t ;
typedef int in_addr_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static ngx_uint_t
FUNC_1(ngx_conf_t *VAR_0, ngx_stream_geo_conf_ctx_t *VAR_1,
    in_addr_t VAR_2, in_addr_t VAR_3)
{
    in_addr_t VAR_4;
    ngx_uint_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    ngx_array_t *VAR_10;
    ngx_stream_geo_range_t *VAR_11;

    VAR_9 = 0;

    for (VAR_4 = VAR_2; VAR_4 <= VAR_3; VAR_4 = (VAR_4 + 0x10000) & 0xffff0000) {

        VAR_5 = VAR_4 >> 16;

        if (VAR_4 == VAR_2) {
            VAR_7 = VAR_4 & 0xffff;
        } else {
            VAR_7 = 0;
        }

        if ((VAR_4 | 0xffff) > VAR_3) {
            VAR_8 = VAR_3 & 0xffff;

        } else {
            VAR_8 = 0xffff;
        }

        VAR_10 = (ngx_array_t *) VAR_1->high.low[VAR_5];

        if (VAR_10 == ((void*)0) || VAR_10->nelts == 0) {
            VAR_9 = 1;
            goto next;
        }

        VAR_11 = VAR_10->elts;
        for (VAR_6 = 0; VAR_6 < VAR_10->nelts; VAR_6++) {

            if (VAR_7 == (ngx_uint_t) VAR_11[VAR_6].start
                && VAR_8 == (ngx_uint_t) VAR_11[VAR_6].end)
            {
                FUNC_0(&VAR_11[VAR_6], &VAR_11[VAR_6 + 1],
                           (VAR_10->nelts - 1 - VAR_6) * sizeof(ngx_stream_geo_range_t));

                VAR_10->nelts--;

                break;
            }

            if (VAR_6 == VAR_10->nelts - 1) {
                VAR_9 = 1;
            }
        }

    next:

        if (VAR_5 == 0xffff) {
            break;
        }
    }

    return VAR_9;
}
