
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_9__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int p_es; int pts; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 TYPE_3__* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    block_t *VAR_7;
    vlc_tick_t VAR_8;

    VAR_7 = FUNC_6( VAR_5->s, VAR_1 );
    if( VAR_7 == ((void*)0) )
    {
        FUNC_5( VAR_5, "cannot read data, eof" );
        return VAR_2;
    }

    VAR_8 = FUNC_0( VAR_5 );
    if( VAR_8 >= FUNC_1( &VAR_6->pts ) + VAR_0 )
    {
        VAR_7->i_dts = VAR_7->i_pts = VAR_4 + VAR_8;
        FUNC_2( &VAR_6->pts, VAR_4 + VAR_8 );
    }
    else
    {
        VAR_7->i_dts = VAR_4 + VAR_8;
        VAR_7->i_pts = FUNC_1( &VAR_6->pts );
    }

    FUNC_4( VAR_5->out, VAR_7->i_pts );
    FUNC_3( VAR_5->out, VAR_6->p_es, VAR_7 );
    return VAR_3;
}
