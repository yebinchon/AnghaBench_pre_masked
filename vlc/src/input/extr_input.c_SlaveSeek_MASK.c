
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_5__ {int b_eof; int p_demux; } ;
typedef TYPE_2__ input_source_t ;
struct TYPE_6__ {int i_slave; TYPE_2__** slave; TYPE_1__* master; } ;
struct TYPE_4__ {int p_demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,...) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void FUNC_3( input_thread_t *VAR_2 )
{
    vlc_tick_t VAR_3;
    int VAR_4;

    if( FUNC_0( FUNC_1(VAR_2)->master->p_demux, VAR_0, VAR_3 ) )
    {
        FUNC_2( VAR_2, "demux doesn't like DEMUX_GET_TIME" );
        return;
    }

    for( VAR_4 = 0; VAR_4 < FUNC_1(VAR_2)->i_slave; VAR_4++ )
    {
        input_source_t *VAR_5 = FUNC_1(VAR_2)->slave[VAR_4];

        if( FUNC_0( VAR_5->p_demux, VAR_1, VAR_3, 1 ) )
        {
            if( !VAR_5->b_eof )
                FUNC_2( VAR_2, "seek failed for slave %d -> EOF", VAR_4 );
            VAR_5->b_eof = 1;
        }
        else
        {
            VAR_5->b_eof = 0;
        }
    }
}
