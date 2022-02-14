
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_continuity_counter; int b_discontinuity; int i_pid; } ;
typedef TYPE_1__ tsmux_stream_t ;
typedef int dvbpsi_t ;
typedef int dvbpsi_psi_section_t ;
typedef int dvbpsi_pat_t ;
typedef int block_t ;
typedef int PEStoTSCallback ;


 int FUNC_0 (void*,int ,int *,int ,int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int,int) ;
 int FUNC_5 (int *,int const,int ) ;
 int * FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;

void FUNC_8( dvbpsi_t *VAR_0,
               void *VAR_1, PEStoTSCallback VAR_2,
               int VAR_3, int VAR_4,
               tsmux_stream_t *VAR_5,
               unsigned VAR_6, tsmux_stream_t *VAR_7, const int *VAR_8 )
{
    dvbpsi_pat_t VAR_9;
    dvbpsi_psi_section_t *VAR_10;

    FUNC_4( &VAR_9, VAR_3, VAR_4, 1 );

    for (unsigned VAR_11 = 0; VAR_11 < VAR_6; VAR_11++ )
        FUNC_5( &VAR_9, VAR_8[VAR_11], VAR_7[VAR_11].i_pid );

    VAR_10 = FUNC_6( VAR_0, &VAR_9, 0 );
    if( FUNC_7(VAR_10) )
    {
        block_t *VAR_12 = FUNC_1( VAR_10 );
        if( FUNC_7(VAR_12) )
        {
            FUNC_0( VAR_1, VAR_2, VAR_12, VAR_5->i_pid,
                     &VAR_5->b_discontinuity, &VAR_5->i_continuity_counter );
        }
        FUNC_2( VAR_10 );
    }
    FUNC_3( &VAR_9 );
}
