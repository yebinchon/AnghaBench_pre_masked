
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_11__ {int b_start; int p_es; TYPE_6__* p_packetizer; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_12__ {struct TYPE_12__* p_next; int i_dts; int i_pts; } ;
typedef TYPE_3__ block_t ;
struct TYPE_13__ {TYPE_3__* (* pf_packetize ) (TYPE_6__*,TYPE_3__**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_6__*,TYPE_3__**) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    block_t *VAR_7, *VAR_8;
    bool VAR_9 = 0;

    if( ( VAR_7 = FUNC_3( VAR_5->s, VAR_0 ) ) == ((void*)0) )
    {
        VAR_9 = 1;
    }

    if( VAR_7 )
    {
        VAR_7->i_pts =
        VAR_7->i_dts = ( VAR_6->b_start ) ? VAR_3 : VAR_4;
    }

    while( (VAR_8 = VAR_6->p_packetizer->pf_packetize( VAR_6->p_packetizer,
                                                             VAR_7 ? &VAR_7 : ((void*)0) )) )
    {
        VAR_6->b_start = 0;

        while( VAR_8 )
        {
            block_t *VAR_10 = VAR_8->p_next;

            FUNC_1( VAR_5->out, VAR_8->i_dts );

            VAR_8->p_next = ((void*)0);
            FUNC_0( VAR_5->out, VAR_6->p_es, VAR_8 );

            VAR_8 = VAR_10;
        }
    }
    return (VAR_9) ? VAR_1 : VAR_2;
}
