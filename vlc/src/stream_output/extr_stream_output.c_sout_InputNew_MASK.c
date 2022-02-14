
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int b_flushed; int * id; TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_packetizer_input_t ;
struct TYPE_13__ {int lock; int p_stream; } ;
typedef TYPE_2__ sout_instance_t ;
struct TYPE_14__ {int i_codec; } ;
typedef TYPE_3__ es_format_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*,char*,void*) ;
 int FUNC_3 (TYPE_2__*,char*,void*) ;
 int * FUNC_4 (int ,TYPE_3__ const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

sout_packetizer_input_t *FUNC_7( sout_instance_t *VAR_0,
                                        const es_format_t *VAR_1 )
{
    sout_packetizer_input_t *VAR_2;


    if( !VAR_1->i_codec || !(VAR_2 = FUNC_1(sizeof(sout_packetizer_input_t))) )
        return ((void*)0);

    VAR_2->p_sout = VAR_0;
    VAR_2->b_flushed = 0;

    FUNC_2( VAR_0, "adding a new sout input for `%4.4s` (sout_input: %p)",
             (char*) &VAR_1->i_codec, (void *)VAR_2 );


    FUNC_5( &VAR_0->lock );
    VAR_2->id = FUNC_4( VAR_0->p_stream, VAR_1 );
    FUNC_6( &VAR_0->lock );

    if( VAR_2->id == ((void*)0) )
    {
        FUNC_3( VAR_0, "new sout input failed (sout_input: %p)",
                 (void *)VAR_2 );
        FUNC_0( VAR_2 );
        VAR_2 = ((void*)0);
    }

    return( VAR_2 );
}
