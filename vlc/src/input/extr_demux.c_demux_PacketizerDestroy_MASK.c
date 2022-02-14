
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ p_description; int fmt_out; int fmt_in; scalar_t__ p_module; } ;
typedef TYPE_1__ decoder_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( decoder_t *VAR_0 )
{
    if( VAR_0->p_module )
        FUNC_1( VAR_0, VAR_0->p_module );
    FUNC_0( &VAR_0->fmt_in );
    FUNC_0( &VAR_0->fmt_out );
    if( VAR_0->p_description )
        FUNC_2( VAR_0->p_description );
    FUNC_3(VAR_0);
}
