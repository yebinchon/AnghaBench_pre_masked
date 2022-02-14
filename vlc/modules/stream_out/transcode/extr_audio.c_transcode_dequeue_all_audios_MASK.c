
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * first; int ** last; } ;
struct TYPE_6__ {int lock; TYPE_1__ audio; } ;
struct TYPE_7__ {TYPE_2__ fifo; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
typedef int block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static block_t *FUNC_2( sout_stream_id_sys_t *VAR_0 )
{
    FUNC_0(&VAR_0->fifo.lock);
    block_t *VAR_1 = VAR_0->fifo.audio.first;
    VAR_0->fifo.audio.first = ((void*)0);
    VAR_0->fifo.audio.last = &VAR_0->fifo.audio.first;
    FUNC_1(&VAR_0->fifo.lock);

    return VAR_1;
}
