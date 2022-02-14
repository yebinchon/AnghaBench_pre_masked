
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ encoder_t ;
struct TYPE_5__ {int p_chain; scalar_t__ p_dts_fifo; struct TYPE_5__* p_format; scalar_t__ p_schro; } ;
typedef TYPE_2__ encoder_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_0 )
{
    encoder_t *VAR_1 = (encoder_t *)VAR_0;
    encoder_sys_t *VAR_2 = VAR_1->p_sys;


    if( VAR_2->p_schro )
        FUNC_2( VAR_2->p_schro );

    FUNC_1( VAR_2->p_format );

    if( VAR_2->p_dts_fifo )
        FUNC_3( VAR_2->p_dts_fifo );

    FUNC_0( VAR_2->p_chain );

    FUNC_1( VAR_2 );
}
