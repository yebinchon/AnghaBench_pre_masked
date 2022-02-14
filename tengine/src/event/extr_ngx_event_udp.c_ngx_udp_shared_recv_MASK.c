
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_1__* read; TYPE_2__* udp; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_9__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {TYPE_4__* buffer; } ;
struct TYPE_6__ {int active; scalar_t__ ready; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(ngx_connection_t *VAR_1, u_char *VAR_2, size_t VAR_3)
{
    ssize_t VAR_4;
    ngx_buf_t *VAR_5;

    if (VAR_1->udp == ((void*)0) || VAR_1->udp->buffer == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = VAR_1->udp->buffer;

    VAR_4 = FUNC_1(VAR_5->last - VAR_5->pos, (ssize_t) VAR_3);

    FUNC_0(VAR_2, VAR_5->pos, VAR_4);

    VAR_1->udp->buffer = ((void*)0);

    VAR_1->read->ready = 0;
    VAR_1->read->active = 1;

    return VAR_4;
}
