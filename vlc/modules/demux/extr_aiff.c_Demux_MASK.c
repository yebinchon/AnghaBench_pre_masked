
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int out; int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_9__ {int i_rate; } ;
struct TYPE_10__ {TYPE_1__ audio; } ;
struct TYPE_12__ {scalar_t__ i_ssnd_end; int i_ssnd_fsize; int es; TYPE_2__ fmt; scalar_t__ i_time; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_13__ {int i_buffer; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_5__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    int64_t VAR_5 = FUNC_3( VAR_3->s );

    block_t *VAR_6;
    int VAR_7;

    if( VAR_4->i_ssnd_end > 0 && VAR_5 >= VAR_4->i_ssnd_end )
    {

        return VAR_0;
    }


    FUNC_1( VAR_3->out, VAR_2 + VAR_4->i_time);


    VAR_7 = VAR_4->i_ssnd_fsize * ( VAR_4->fmt.audio.i_rate / 10 );
    if( VAR_4->i_ssnd_end > 0 && VAR_4->i_ssnd_end - VAR_5 < VAR_7 )
    {
        VAR_7 = VAR_4->i_ssnd_end - VAR_5;
    }
    if( ( VAR_6 = FUNC_2( VAR_3->s, VAR_7 ) ) == ((void*)0) )
    {
        return VAR_0;
    }

    VAR_6->i_dts =
    VAR_6->i_pts = VAR_2 + VAR_4->i_time;

    VAR_4->i_time += FUNC_4(VAR_6->i_buffer,
                                           VAR_4->i_ssnd_fsize) /
                     VAR_4->fmt.audio.i_rate;


    FUNC_0( VAR_3->out, VAR_4->es, VAR_6 );
    return VAR_1;
}
