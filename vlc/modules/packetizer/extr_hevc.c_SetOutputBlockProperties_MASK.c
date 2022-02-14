
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {scalar_t__ pts; int * p_timing; int dts; scalar_t__ p_active_sps; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_8__ {scalar_t__ i_length; int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(decoder_t *VAR_2, block_t *VAR_3)
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;

    if(VAR_4->p_active_sps)
    {
        uint8_t VAR_5 = FUNC_2(VAR_4->p_active_sps,
                                                       VAR_4->p_timing);
        const vlc_tick_t VAR_6 = FUNC_0(&VAR_4->dts);
        if( VAR_6 != VAR_1 )
        {
            FUNC_1(&VAR_4->dts, VAR_5);
            VAR_3->i_length = FUNC_0(&VAR_4->dts) - VAR_6;
        }
        VAR_4->pts = VAR_1;
    }
    VAR_3->i_flags &= ~VAR_0;
    FUNC_3(VAR_4->p_timing);
    VAR_4->p_timing = ((void*)0);
}
