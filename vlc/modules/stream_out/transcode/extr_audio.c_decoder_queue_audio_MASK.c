
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct decoder_owner {TYPE_3__* id; } ;
struct TYPE_7__ {TYPE_4__** last; } ;
struct TYPE_6__ {int lock; TYPE_2__ audio; } ;
struct TYPE_8__ {TYPE_1__ fifo; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
typedef int decoder_t ;
struct TYPE_9__ {struct TYPE_9__* p_next; } ;
typedef TYPE_4__ block_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_0, block_t *VAR_1 )
{
    struct decoder_owner *VAR_2 = FUNC_0( VAR_0 );
    sout_stream_id_sys_t *VAR_3 = VAR_2->id;

    FUNC_1(&VAR_3->fifo.lock);
    *VAR_3->fifo.audio.last = VAR_1;
    VAR_3->fifo.audio.last = &VAR_1->p_next;
    FUNC_2(&VAR_3->fifo.lock);
}
