
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int es_out_t ;
struct TYPE_3__ {scalar_t__ i_scr; int tk; } ;
typedef TYPE_1__ demux_sys_t ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3( demux_sys_t *VAR_1, es_out_t *VAR_2, vlc_tick_t VAR_3 )
{
    if( VAR_1->i_scr != VAR_0 &&
        FUNC_2( VAR_1->i_scr - VAR_3 ) > FUNC_1(1) )
        FUNC_0( VAR_1->tk, VAR_2 );
}
