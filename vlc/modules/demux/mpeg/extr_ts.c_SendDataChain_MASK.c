
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int i_next_block_flags; struct TYPE_14__* p_next; scalar_t__ id; struct TYPE_14__* p_extraes; TYPE_1__* p_program; } ;
typedef TYPE_2__ ts_es_t ;
struct TYPE_15__ {int out; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_16__ {int i_flags; struct TYPE_16__* p_next; } ;
typedef TYPE_4__ block_t ;
struct TYPE_13__ {scalar_t__ b_selected; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_2, ts_es_t *VAR_3, block_t *VAR_4 )
{
    bool VAR_5 = FUNC_3(VAR_2, "low-delay");
    while( VAR_4 )
    {
        block_t *VAR_6 = VAR_4;
        VAR_4 = VAR_6->p_next;
        VAR_6->p_next = ((void*)0);


        VAR_6->i_flags &= ~VAR_1;

        if( VAR_5 )
            VAR_6->i_flags |= VAR_0;

        ts_es_t *VAR_7 = VAR_3;
        if( VAR_7->i_next_block_flags )
        {
            VAR_6->i_flags |= VAR_7->i_next_block_flags;
            VAR_7->i_next_block_flags = 0;
        }

        while( VAR_7 )
        {
            if( VAR_7->p_program->b_selected )
            {

                ts_es_t *VAR_8 = VAR_7->p_extraes;
                while( VAR_8 )
                {
                    if( VAR_8->id )
                    {
                        block_t *VAR_9 = FUNC_0( VAR_6 );
                        if( VAR_9 )
                            FUNC_2( VAR_2->out, VAR_8->id, VAR_9 );
                    }
                    VAR_8 = VAR_8->p_next;
                }

                if( VAR_7->p_next )
                {
                    if( VAR_7->id )
                    {
                        block_t *VAR_10 = FUNC_0( VAR_6 );
                        if( VAR_10 )
                            FUNC_2( VAR_2->out, VAR_7->id, VAR_10 );
                    }
                }
                else
                {
                    if( VAR_7->id )
                    {
                        FUNC_2( VAR_2->out, VAR_7->id, VAR_6 );
                        VAR_6 = ((void*)0);
                    }
                }
            }
            VAR_7 = VAR_7->p_next;
        }

        if( VAR_6 )
            FUNC_1( VAR_6 );
    }
}
