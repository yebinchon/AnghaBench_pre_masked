
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int b_start; scalar_t__ i_pts; int p_es; TYPE_4__* p_current_block; int stream_info; scalar_t__ b_stream_info; int p_packetizer; scalar_t__ i_next_block_flags; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ i_dts; struct TYPE_11__* p_next; } ;
typedef TYPE_3__ block_t ;
struct TYPE_12__ {scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ i_flags; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int *,TYPE_4__**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_4__* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    block_t *VAR_7;

    bool VAR_8 = 0;
    if( VAR_6->p_current_block == ((void*)0) )
    {
        VAR_6->p_current_block = FUNC_5( VAR_5->s, VAR_0 );
        VAR_8 = (VAR_6->p_current_block == ((void*)0));
    }

    if ( VAR_6->p_current_block )
    {
        VAR_6->p_current_block->i_flags = VAR_6->i_next_block_flags;
        VAR_6->i_next_block_flags = 0;
        VAR_6->p_current_block->i_pts =
        VAR_6->p_current_block->i_dts = VAR_6->b_start ? VAR_3 : VAR_4;
    }

    while( (VAR_7 = FUNC_0( VAR_6->p_packetizer,
                            VAR_6->b_stream_info ? &VAR_6->stream_info : ((void*)0),
                            VAR_6->p_current_block ? &VAR_6->p_current_block : ((void*)0) ) ) )
    {

        VAR_6->b_start = 0;
        while( VAR_7 )
        {
            block_t *VAR_9 = VAR_7->p_next;

            VAR_7->p_next = ((void*)0);


            if( FUNC_4(VAR_6->i_pts == VAR_4) )
                FUNC_3( VAR_5->out, FUNC_1(VAR_7->i_dts - 1, VAR_3) );

            VAR_6->i_pts = VAR_7->i_dts;

            FUNC_2( VAR_5->out, VAR_6->p_es, VAR_7 );

            FUNC_3( VAR_5->out, VAR_6->i_pts );

            VAR_7 = VAR_9;
        }
        break;
    }

    return VAR_8 ? VAR_1 : VAR_2;
}
