
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {scalar_t__ i_queue; int * p_queue; int p_cea708; int p_dtvcc; scalar_t__ p_eia608; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_0 )
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;

    if( VAR_1->p_eia608 )
    {
        FUNC_2( VAR_1->p_eia608 );
    }
    else
    {
        FUNC_0( VAR_1->p_dtvcc );
        FUNC_1( VAR_1->p_cea708 );
    }

    FUNC_3( VAR_1->p_queue );
    VAR_1->p_queue = ((void*)0);
    VAR_1->i_queue = 0;
}
