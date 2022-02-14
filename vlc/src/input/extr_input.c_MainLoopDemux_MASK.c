
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_5__ {scalar_t__ i_stop; scalar_t__ i_slave; int p_es_out; TYPE_1__* master; } ;
typedef TYPE_2__ input_thread_private_t ;
typedef int demux_t ;
struct TYPE_4__ {int b_eof; scalar_t__ b_title_demux; int * p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 TYPE_2__* FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static void FUNC_11( input_thread_t *VAR_7, bool *VAR_8 )
{
    input_thread_private_t* VAR_9 = FUNC_9(VAR_7);
    demux_t *VAR_10 = VAR_9->master->p_demux;
    int VAR_11 = VAR_5;

    *VAR_8 = 0;

    if( VAR_9->i_stop > 0 )
    {
        vlc_tick_t VAR_12;
        if( FUNC_4( VAR_10, VAR_0, &VAR_12 ) )
            VAR_12 = VAR_6;

        if( VAR_9->i_stop <= VAR_12 )
            VAR_11 = VAR_4;
    }

    if( VAR_11 == VAR_5 )
        VAR_11 = FUNC_5( VAR_10 );

    VAR_11 = VAR_11 > 0 ? VAR_5 : ( VAR_11 < 0 ? VAR_3 : VAR_4);

    if( VAR_11 == VAR_5 )
    {
        if( FUNC_6( VAR_10, VAR_2 ) )
            FUNC_2( VAR_7 );

        if( VAR_9->master->b_title_demux )
        {
            VAR_11 = FUNC_3( VAR_7 );
            *VAR_8 = 1;
        }

        FUNC_1( VAR_7 );
    }

    if( VAR_11 == VAR_4 )
    {
        FUNC_10( VAR_7, "EOF reached" );
        VAR_9->master->b_eof = 1;
        FUNC_7(VAR_9->p_es_out);
    }
    else if( VAR_11 == VAR_3 )
    {
        FUNC_8( VAR_7, VAR_1, VAR_6 );
    }
    else if( VAR_9->i_slave > 0 )
        FUNC_0( VAR_7 );
}
