
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int log; int pool; TYPE_1__* tfs_peer_servers; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_9__ {int temporary; int * pos; int * start; int * last; int * end; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_7__ {TYPE_3__ body_buffer; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t,int *) ;
 int FUNC_2 (int ,int ,int ,char*,size_t,...) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;
 int * FUNC_5 (int ,int) ;

ngx_int_t
FUNC_6(ngx_http_tfs_t *VAR_6, size_t VAR_7)
{
    size_t VAR_8;
    ngx_int_t VAR_9;
    ngx_buf_t *VAR_10, *VAR_11;

    VAR_10 = &VAR_6->tfs_peer_servers[VAR_1].body_buffer;
    if (VAR_10->start == ((void*)0)) {
        VAR_10->start = FUNC_5(VAR_6->pool, VAR_2);
        if (VAR_10->start == ((void*)0)) {
            return VAR_0;
        }

        VAR_10->pos = VAR_10->start;
        VAR_10->last = VAR_10->start;
        VAR_10->end = VAR_10->start + VAR_2;
        VAR_10->temporary = 1;
    }

    VAR_8 = VAR_10->end - VAR_10->last;


    if (VAR_7 <= VAR_8) {
        FUNC_3(VAR_10->last, VAR_7);
        VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_10->last);
        if (VAR_9 == VAR_0) {
            return VAR_9;
        }

        VAR_10->pos += VAR_7;
        VAR_10->last += VAR_7;

        FUNC_2(VAR_4, VAR_6->log, 0,
                      "fill file hole once, size: %uL", VAR_7);

    } else {
        VAR_11 = FUNC_0(VAR_6->pool, VAR_3);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }
        FUNC_3(VAR_11->start, VAR_3);

        while (VAR_7 > 0) {
            VAR_8 = FUNC_4(VAR_3, VAR_7);
            VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_11->pos);
            if (VAR_9 == VAR_0) {
                return VAR_9;
            }

            VAR_7 -= VAR_8;

            FUNC_2(VAR_4, VAR_6->log, 0,
                          "fill file hole, size: %z, remain hole size: %uL",
                          VAR_8, VAR_7);
        }
    }

    return VAR_5;
}
