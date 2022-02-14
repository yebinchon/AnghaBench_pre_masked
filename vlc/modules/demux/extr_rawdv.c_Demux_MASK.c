
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int f_rate; scalar_t__ i_pcr; scalar_t__ b_hurry_up; scalar_t__ p_es_video; scalar_t__ p_es_audio; int frame_size; scalar_t__ i_dsf; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 TYPE_3__* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    block_t *VAR_6;
    bool VAR_7 = 0;

    if( VAR_5->b_hurry_up )
    {

        VAR_5->i_pcr = FUNC_6() + (VAR_5->i_dsf ? FUNC_0(120) : FUNC_0(90));
    }


    FUNC_4( VAR_4->out, VAR_3 + VAR_5->i_pcr );
    VAR_6 = FUNC_5( VAR_4->s, VAR_5->frame_size );
    if( VAR_6 == ((void*)0) )
        return VAR_1;

    if( VAR_5->p_es_audio )
    {
        FUNC_2( VAR_4->out, VAR_0,
                        VAR_5->p_es_audio, &VAR_7 );
    }

    VAR_6->i_dts =
    VAR_6->i_pts = VAR_3 + VAR_5->i_pcr;

    if( VAR_7 )
    {
        block_t *VAR_8 = FUNC_1( VAR_6 );
        if( VAR_8 )
            FUNC_3( VAR_4->out, VAR_5->p_es_audio, VAR_8 );
    }

    FUNC_3( VAR_4->out, VAR_5->p_es_video, VAR_6 );

    if( !VAR_5->b_hurry_up )
    {
        VAR_5->i_pcr += FUNC_7( VAR_5->f_rate );
    }

    return VAR_2;
}
