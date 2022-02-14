
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {scalar_t__ i_pause_date; int b_paused; int lock; int wait; int i_cmd_delay; int p_out; } ;
typedef TYPE_1__ ts_thread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( ts_thread_t *VAR_0, bool VAR_1, bool VAR_2, vlc_tick_t VAR_3 )
{
    FUNC_3( &VAR_0->lock );

    int VAR_4;
    if( VAR_2 )
    {
        FUNC_0( !VAR_1 );
        VAR_4 = FUNC_1( VAR_0->p_out, 1, 1, VAR_3 );
    }
    else
    {
        VAR_4 = FUNC_1( VAR_0->p_out, 0, 0, VAR_3 );
    }

    if( !VAR_4 )
    {
        if( !VAR_2 )
        {
            FUNC_0( VAR_0->i_pause_date > 0 );

            VAR_0->i_cmd_delay += VAR_3 - VAR_0->i_pause_date;
        }

        VAR_0->b_paused = VAR_2;
        VAR_0->i_pause_date = VAR_3;

        FUNC_2( &VAR_0->wait );
    }
    FUNC_4( &VAR_0->lock );
    return VAR_4;
}
