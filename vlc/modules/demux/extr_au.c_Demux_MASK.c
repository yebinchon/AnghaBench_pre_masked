
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ i_frame_length; scalar_t__ i_time; int es; int i_frame_size; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    block_t *VAR_5;


    FUNC_1( VAR_3->out, VAR_2 + VAR_4->i_time );

    VAR_5 = FUNC_3( VAR_3->s, VAR_4->i_frame_size );
    if( VAR_5 == ((void*)0) )
    {
        FUNC_2( VAR_3, "cannot read data" );
        return VAR_0;
    }

    VAR_5->i_dts =
    VAR_5->i_pts = VAR_2 + VAR_4->i_time;
    FUNC_0( VAR_3->out, VAR_4->es, VAR_5 );

    VAR_4->i_time += VAR_4->i_frame_length;

    return VAR_1;
}
