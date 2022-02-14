
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_packetizer_input_t ;
struct TYPE_7__ {int lock; int p_stream; } ;
typedef TYPE_2__ sout_instance_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char*,void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5( sout_packetizer_input_t *VAR_1 )
{
    sout_instance_t *VAR_2 = VAR_1->p_sout;

    FUNC_1( VAR_2, "removing a sout input (sout_input: %p)",
             (void *)VAR_1 );

    FUNC_3( &VAR_2->lock );
    FUNC_2( VAR_2->p_stream, VAR_1->id );
    FUNC_4( &VAR_2->lock );

    FUNC_0( VAR_1 );

    return( VAR_0);
}
