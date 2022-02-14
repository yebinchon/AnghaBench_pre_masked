
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_packetizer_input_t ;
struct TYPE_5__ {int lock; int p_stream; } ;
typedef TYPE_2__ sout_instance_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3( sout_packetizer_input_t *VAR_2 )
{
    sout_instance_t *VAR_3 = VAR_2->p_sout;
    bool VAR_4;

    FUNC_1( &VAR_3->lock );
    if( FUNC_0( VAR_3->p_stream, VAR_0, &VAR_4 ) != VAR_1 )
        VAR_4 = 1;
    FUNC_2( &VAR_3->lock );
    return VAR_4;
}
