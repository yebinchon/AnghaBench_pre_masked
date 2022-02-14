
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int **** vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_6__ {int i_slave; float slave_subs_rate; int p_es_out; TYPE_3__** slave; TYPE_1__* master; } ;
typedef TYPE_2__ input_thread_private_t ;
struct TYPE_7__ {int b_eof; float sub_rate; int p_demux; scalar_t__ b_can_rate_control; scalar_t__ b_slave_sub; } ;
typedef TYPE_3__ input_source_t ;
struct TYPE_5__ {int p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,float*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static void FUNC_6( input_thread_t *VAR_4 )
{
    input_thread_private_t *VAR_5 = FUNC_3(VAR_4);
    vlc_tick_t VAR_6;
    int VAR_7;

    if( FUNC_0( FUNC_3(VAR_4)->master->p_demux, VAR_0, &VAR_6 ) )
    {
        FUNC_5( VAR_4, "demux doesn't like DEMUX_GET_TIME" );
        return;
    }

    for( VAR_7 = 0; VAR_7 < FUNC_3(VAR_4)->i_slave; VAR_7++ )
    {
        input_source_t *VAR_8 = FUNC_3(VAR_4)->slave[VAR_7];
        int VAR_9;

        if( VAR_8->b_eof )
            continue;

        if( VAR_5->slave_subs_rate != VAR_8->sub_rate )
        {
            if( VAR_8->b_slave_sub && VAR_8->b_can_rate_control )
            {
                if( VAR_8->sub_rate != 0 )
                    FUNC_2( VAR_5->p_es_out, VAR_3 );
                float VAR_10 = VAR_5->slave_subs_rate;
                FUNC_0( VAR_8->p_demux, VAR_2, &VAR_10 );
            }
            VAR_8->sub_rate = VAR_5->slave_subs_rate;
        }



        if( FUNC_0( VAR_8->p_demux, VAR_1, VAR_6 ) )
        {
            for( ;; )
            {
                vlc_tick_t VAR_11;
                if( FUNC_0( VAR_8->p_demux, VAR_0, &VAR_11 ) )
                {
                    FUNC_5( VAR_4, "slave[%d] doesn't like "
                             "DEMUX_GET_TIME -> EOF", VAR_7 );
                    VAR_9 = 0;
                    break;
                }

                if( VAR_11 >= VAR_6 )
                {
                    VAR_9 = 1;
                    break;
                }

                if( ( VAR_9 = FUNC_1( VAR_8->p_demux ) ) <= 0 )
                    break;
            }
        }
        else
        {
            VAR_9 = FUNC_1( VAR_8->p_demux );
        }

        if( VAR_9 <= 0 )
        {
            FUNC_4( VAR_4, "slave %d EOF", VAR_7 );
            VAR_8->b_eof = 1;
        }
    }
}
