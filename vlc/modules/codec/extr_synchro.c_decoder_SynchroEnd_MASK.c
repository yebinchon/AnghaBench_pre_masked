
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int decoding_start; int* p_tau; int* pi_meaningful; } ;
typedef TYPE_1__ decoder_synchro_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1( decoder_synchro_t * VAR_2, int VAR_3,
                      bool VAR_4 )
{
    vlc_tick_t VAR_5;

    if( VAR_4 )
        return;

    VAR_5 = FUNC_0() - VAR_2->decoding_start;



    if( VAR_5 < 3 * VAR_2->p_tau[VAR_3] ||
          ( !VAR_2->pi_meaningful[VAR_3] && VAR_5 < VAR_1 ) )
    {

        VAR_2->p_tau[VAR_3] =
            (VAR_2->pi_meaningful[VAR_3]
             * VAR_2->p_tau[VAR_3] + VAR_5)
            / (VAR_2->pi_meaningful[VAR_3] + 1);
        if( VAR_2->pi_meaningful[VAR_3] < VAR_0 )
        {
            VAR_2->pi_meaningful[VAR_3]++;
        }
    }
}
