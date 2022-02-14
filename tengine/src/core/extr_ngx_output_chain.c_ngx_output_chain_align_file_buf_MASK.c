
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_10__ {int directio; int alignment; int unaligned; int * buf; int pool; TYPE_3__ bufs; TYPE_1__* in; } ;
typedef TYPE_4__ ngx_output_chain_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int file_pos; TYPE_2__* file; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_8__ {int directio; } ;
struct TYPE_7__ {TYPE_5__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_output_chain_ctx_t *VAR_3, off_t VAR_4)
{
    size_t VAR_5;
    ngx_buf_t *VAR_6;

    VAR_6 = VAR_3->in->buf;

    if (VAR_6->file == ((void*)0) || !VAR_6->file->directio) {
        return VAR_0;
    }

    VAR_3->directio = 1;

    VAR_5 = (size_t) (VAR_6->file_pos - (VAR_6->file_pos & ~(VAR_3->alignment - 1)));

    if (VAR_5 == 0) {

        if (VAR_4 >= (off_t) VAR_3->bufs.size) {
            return VAR_0;
        }

        VAR_5 = (size_t) VAR_4;

    } else {
        VAR_5 = (size_t) VAR_3->alignment - VAR_5;

        if ((off_t) VAR_5 > VAR_4) {
            VAR_5 = (size_t) VAR_4;
        }
    }

    VAR_3->buf = FUNC_0(VAR_3->pool, VAR_5);
    if (VAR_3->buf == ((void*)0)) {
        return VAR_1;
    }
    return VAR_2;
}
