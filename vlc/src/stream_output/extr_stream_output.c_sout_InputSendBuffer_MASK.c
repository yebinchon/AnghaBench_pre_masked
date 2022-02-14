
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int b_flushed; int id; TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_packetizer_input_t ;
struct TYPE_8__ {int lock; int p_stream; } ;
typedef TYPE_2__ sout_instance_t ;
struct TYPE_9__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( sout_packetizer_input_t *VAR_1,
                          block_t *VAR_2 )
{
    sout_instance_t *VAR_3 = VAR_1->p_sout;
    int VAR_4;

    if( VAR_1->b_flushed )
    {
        VAR_2->i_flags |= VAR_0;
        VAR_1->b_flushed = 0;
    }
    FUNC_1( &VAR_3->lock );
    VAR_4 = FUNC_0( VAR_3->p_stream, VAR_1->id, VAR_2 );
    FUNC_2( &VAR_3->lock );

    return VAR_4;
}
