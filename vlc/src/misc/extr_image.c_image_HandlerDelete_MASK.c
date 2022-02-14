
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int outfifo; scalar_t__ p_converter; scalar_t__ p_enc; int p_dec; } ;
typedef TYPE_1__ image_handler_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5( image_handler_t *VAR_0 )
{
    if( !VAR_0 ) return;

    FUNC_2( VAR_0->p_dec );
    if( VAR_0->p_enc ) FUNC_1( VAR_0->p_enc );
    if( VAR_0->p_converter ) FUNC_0( VAR_0->p_converter );

    FUNC_4( VAR_0->outfifo );

    FUNC_3( VAR_0 );
    VAR_0 = ((void*)0);
}
