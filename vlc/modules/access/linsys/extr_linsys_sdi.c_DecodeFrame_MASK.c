
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_11__ {int i_height; int i_width; scalar_t__ i_incr; int i_next_date; TYPE_9__* p_audios; scalar_t__ i_telx_count; scalar_t__ p_y; scalar_t__ b_vbi; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_12__ {int * p_es; scalar_t__ i_group; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_9__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    if ( VAR_5->b_vbi )
    {
        FUNC_3( VAR_4 );

        if ( VAR_5->i_height == 576 )
        {


            FUNC_6( VAR_5->p_y, 0, VAR_5->i_width / 2 );
            FUNC_6( VAR_5->p_y + VAR_5->i_width * 574 + VAR_5->i_width / 2,
                        0, VAR_5->i_width * 3 / 2 );
        }
    }

    if ( VAR_5->i_telx_count )
        if ( FUNC_1( VAR_4 ) != VAR_3 )
            return VAR_2;

    for ( int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
    {
        if ( VAR_5->p_audios[VAR_6].i_group && VAR_5->p_audios[VAR_6].p_es != ((void*)0) )
            if( FUNC_0( VAR_4, &VAR_5->p_audios[VAR_6] ) != VAR_3 )
                return VAR_1;
    }

    FUNC_2( VAR_4 );

    FUNC_5( VAR_4->out, VAR_5->i_next_date );
    VAR_5->i_next_date += VAR_5->i_incr;

    if( FUNC_4( VAR_4 ) != VAR_3 )
        return VAR_2;

    return VAR_3;
}
