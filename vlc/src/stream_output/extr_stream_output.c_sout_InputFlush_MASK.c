
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_flushed; int id; TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_packetizer_input_t ;
struct TYPE_5__ {int lock; int p_stream; } ;
typedef TYPE_2__ sout_instance_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( sout_packetizer_input_t *VAR_0 )
{
    sout_instance_t *VAR_1 = VAR_0->p_sout;

    FUNC_1( &VAR_1->lock );
    FUNC_0( VAR_1->p_stream, VAR_0->id );
    FUNC_2( &VAR_1->lock );
    VAR_0->b_flushed = 1;
}
