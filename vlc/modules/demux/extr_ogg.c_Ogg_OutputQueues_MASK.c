
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int logical_stream_t ;
struct TYPE_6__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {scalar_t__ i_pcr; int i_streams; int b_slave; int ** pp_stream; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( demux_t *VAR_1, bool VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;
    vlc_tick_t VAR_4;


    if( VAR_3->i_pcr == VAR_0 )
    {
        VAR_4 = FUNC_0( VAR_1, VAR_2 );
        if( VAR_4 != VAR_0 && VAR_4 != VAR_3->i_pcr )
        {
            VAR_3->i_pcr = VAR_4;
            if( FUNC_4( !VAR_3->b_slave ) )
                FUNC_3( VAR_1->out, VAR_3->i_pcr );
        }
    }

    if( VAR_3->i_pcr != VAR_0 )
    {
        bool VAR_5;
        do
        {
            VAR_5 = 0;
            for( int VAR_6 = 0; VAR_6 < VAR_3->i_streams; VAR_6++ )
            {
                logical_stream_t *VAR_7 = VAR_3->pp_stream[VAR_6];
                if( FUNC_1( VAR_7 ) )
                    FUNC_2( VAR_1, VAR_7 );
                VAR_5 |= FUNC_1( VAR_7 );
            }


            VAR_4 = FUNC_0( VAR_1, VAR_2 );
            if( VAR_4 != VAR_0 && VAR_4 != VAR_3->i_pcr )
            {
                VAR_3->i_pcr = VAR_4;
                if( FUNC_4( !VAR_3->b_slave ) )
                    FUNC_3( VAR_1->out, VAR_3->i_pcr );
            }
        } while ( VAR_5 );
    }
}
