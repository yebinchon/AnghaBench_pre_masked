
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {size_t i_currentframe; size_t i_totalframes; scalar_t__ p_es; int * pi_seektable; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    block_t *VAR_6;

    if( VAR_5->i_currentframe >= VAR_5->i_totalframes )
        return VAR_1;

    VAR_6 = FUNC_2( VAR_4->s,
                               VAR_5->pi_seektable[VAR_5->i_currentframe] );
    if( VAR_6 == ((void*)0) )
        return VAR_1;
    VAR_6->i_dts = VAR_6->i_pts = VAR_3 + FUNC_3( VAR_5->i_currentframe * VAR_0 );

    VAR_5->i_currentframe++;

    FUNC_1( VAR_4->out, VAR_6->i_dts );
    if( VAR_5->p_es )
        FUNC_0( VAR_4->out, VAR_5->p_es, VAR_6 );

    return VAR_2;
}
