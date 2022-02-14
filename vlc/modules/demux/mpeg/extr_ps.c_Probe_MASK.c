
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_11__ {scalar_t__ i_last_pts; scalar_t__ i_first_pts; int i_skip; } ;
typedef TYPE_1__ ps_track_t ;
struct TYPE_12__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int b_have_pack; int b_lost_sync; scalar_t__ i_first_scr; TYPE_1__* tk; int format; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_14__ {scalar_t__ i_pts; int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__*,int*) ;
 int FUNC_6 (int ,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int FUNC_9( demux_t *VAR_4, bool VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_4->p_sys;
    int VAR_7, VAR_8;
    block_t *VAR_9;

    VAR_7 = FUNC_8( VAR_4->s, VAR_6->format, VAR_6->b_have_pack );
    if( VAR_7 < 0 )
    {
        return VAR_1;
    }
    else if( VAR_7 == 0 )
    {
        if( !VAR_6->b_lost_sync )
            FUNC_2( VAR_4, "garbage at input, trying to resync..." );

        VAR_6->b_lost_sync = 1;
        return VAR_2;
    }

    if( VAR_6->b_lost_sync ) FUNC_2( VAR_4, "found sync code" );
    VAR_6->b_lost_sync = 0;

    if( ( VAR_9 = FUNC_7( VAR_4->s ) ) == ((void*)0) )
    {
        return VAR_1;
    }

    VAR_8 = FUNC_4( VAR_9->p_buffer, VAR_9->i_buffer );
    if( VAR_8 >= 0xc0 )
    {
        ps_track_t *VAR_10 = &VAR_6->tk[FUNC_3(VAR_8)];
        if( !FUNC_6( FUNC_0(VAR_4), VAR_9, VAR_10->i_skip ) &&
             VAR_9->i_pts != VAR_3 )
        {
            if( VAR_5 && (VAR_10->i_last_pts == VAR_3 || VAR_9->i_pts > VAR_10->i_last_pts) )
            {
                VAR_10->i_last_pts = VAR_9->i_pts;
            }
            else if ( VAR_10->i_first_pts == VAR_3 )
            {
                VAR_10->i_first_pts = VAR_9->i_pts;
            }
        }
    }
    else if( VAR_8 == VAR_0 )
    {
        vlc_tick_t VAR_11; int VAR_12;
        if( !VAR_5 && !FUNC_5( VAR_9->p_buffer, VAR_9->i_buffer,
                                          &VAR_11, &VAR_12 ) )
        {
            if( VAR_6->i_first_scr == VAR_3 )
                VAR_6->i_first_scr = VAR_11;
        }
        VAR_6->b_have_pack = 1;
    }

    FUNC_1( VAR_9 );
    return VAR_2;
}
