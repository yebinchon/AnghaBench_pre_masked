
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ i_frame_length; void* i_still_end; scalar_t__ b_still; int p_es; void* i_time; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {void* i_pts; void* i_dts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 void* FUNC_4 () ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3, int VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_3->p_sys;
    block_t *VAR_6;

    if( ( VAR_6 = FUNC_3( VAR_3->s, VAR_4 ) ) == ((void*)0) )
    {
        FUNC_2( VAR_3, "cannot read data" );
        return VAR_0;
    }

    if( VAR_5->i_frame_length != VAR_2 )
    {
        VAR_6->i_pts = VAR_5->i_time;
        VAR_5->i_time += VAR_5->i_frame_length;
    }
    else
    {
        VAR_6->i_pts = FUNC_4();
    }
    VAR_6->i_dts = VAR_6->i_pts;

    FUNC_1( VAR_3->out, VAR_6->i_pts );
    FUNC_0( VAR_3->out, VAR_5->p_es, VAR_6 );

    if( VAR_5->b_still )
        VAR_5->i_still_end = FUNC_4() + VAR_5->i_frame_length;

    return VAR_1;
}
