
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fmt_out; int fmt_in; scalar_t__ p_module; } ;
typedef TYPE_1__ encoder_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3( encoder_t * VAR_0 )
{
    if( VAR_0->p_module ) FUNC_1( VAR_0, VAR_0->p_module );

    FUNC_0( &VAR_0->fmt_in );
    FUNC_0( &VAR_0->fmt_out );

    FUNC_2(VAR_0);
}
