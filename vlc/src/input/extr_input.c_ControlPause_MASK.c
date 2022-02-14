
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
typedef int demux_t ;
struct TYPE_4__ {scalar_t__ b_can_pause; int p_es_out; TYPE_1__* master; } ;
struct TYPE_3__ {int * p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int,int ) ;
 int FUNC_2 (int *,int,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5( input_thread_t *VAR_2, vlc_tick_t VAR_3 )
{
    int VAR_4 = VAR_1;

    if( FUNC_3(VAR_2)->b_can_pause )
    {
        demux_t *VAR_5 = FUNC_3(VAR_2)->master->p_demux;

        if( FUNC_0( VAR_5, VAR_0, 1 ) )
        {
            FUNC_4( VAR_2, "cannot set pause state" );
            return;
        }
    }


    if( FUNC_1( FUNC_3(VAR_2)->p_es_out, FUNC_3(VAR_2)->b_can_pause,
                              1, VAR_3 ) )
    {
        FUNC_4( VAR_2, "cannot set pause state at es_out level" );
        return;
    }


    FUNC_2( VAR_2, VAR_4, VAR_3 );
}
