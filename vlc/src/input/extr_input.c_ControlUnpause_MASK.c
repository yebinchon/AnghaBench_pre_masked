
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
typedef int demux_t ;
struct TYPE_4__ {int p_es_out; TYPE_1__* master; scalar_t__ b_can_pause; } ;
struct TYPE_3__ {int * p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5( input_thread_t *VAR_3, vlc_tick_t VAR_4 )
{
    if( FUNC_3(VAR_3)->b_can_pause )
    {
        demux_t *VAR_5 = FUNC_3(VAR_3)->master->p_demux;

        if( FUNC_0( VAR_5, VAR_0, 0 ) )
        {
            FUNC_4( VAR_3, "cannot resume" );
            FUNC_2( VAR_3, VAR_1, VAR_4 );
            return;
        }
    }


    FUNC_2( VAR_3, VAR_2, VAR_4 );
    FUNC_1( FUNC_3(VAR_3)->p_es_out, 0, 0, VAR_4 );
}
