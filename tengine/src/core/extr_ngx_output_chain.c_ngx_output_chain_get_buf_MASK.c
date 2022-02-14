
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int ngx_uint_t ;
struct TYPE_8__ {size_t size; int num; } ;
struct TYPE_9__ {int allocated; TYPE_4__* buf; int tag; int pool; scalar_t__ alignment; scalar_t__ directio; TYPE_2__ bufs; TYPE_1__* in; } ;
typedef TYPE_3__ ngx_output_chain_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int temporary; int recycled; int tag; int * last; int * end; int * start; int * pos; scalar_t__ last_in_chain; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {TYPE_4__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int * FUNC_1 (int ,size_t) ;
 int * FUNC_2 (int ,size_t,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_output_chain_ctx_t *VAR_2, off_t VAR_3)
{
    size_t VAR_4;
    ngx_buf_t *VAR_5, *VAR_6;
    ngx_uint_t VAR_7;

    VAR_6 = VAR_2->in->buf;
    VAR_4 = VAR_2->bufs.size;
    VAR_7 = 1;

    if (VAR_6->last_in_chain) {

        if (VAR_3 < (off_t) VAR_4) {






            VAR_4 = (size_t) VAR_3;
            VAR_7 = 0;

        } else if (!VAR_2->directio
                   && VAR_2->bufs.num == 1
                   && (VAR_3 < (off_t) (VAR_4 + VAR_4 / 4)))
        {






            VAR_4 = (size_t) VAR_3;
            VAR_7 = 0;
        }
    }

    VAR_5 = FUNC_0(VAR_2->pool);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_2->directio) {






        VAR_5->start = FUNC_2(VAR_2->pool, VAR_4, (size_t) VAR_2->alignment);
        if (VAR_5->start == ((void*)0)) {
            return VAR_0;
        }

    } else {
        VAR_5->start = FUNC_1(VAR_2->pool, VAR_4);
        if (VAR_5->start == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_5->pos = VAR_5->start;
    VAR_5->last = VAR_5->start;
    VAR_5->end = VAR_5->last + VAR_4;
    VAR_5->temporary = 1;
    VAR_5->tag = VAR_2->tag;
    VAR_5->recycled = VAR_7;

    VAR_2->buf = VAR_5;
    VAR_2->allocated++;

    return VAR_1;
}
