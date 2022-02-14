
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int decoder_t ;
struct TYPE_6__ {scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static block_t *FUNC_1( void *VAR_0, bool *VAR_1, block_t *VAR_2 )
{
    decoder_t *VAR_3 = VAR_0;
    const vlc_tick_t VAR_4 = VAR_2->i_dts;
    const vlc_tick_t VAR_5 = VAR_2->i_pts;

    block_t *VAR_6 = FUNC_0( VAR_3, VAR_2 );

    *VAR_1 = VAR_6 && VAR_6->i_dts == VAR_4 && VAR_6->i_pts == VAR_5;

    return VAR_6;
}
