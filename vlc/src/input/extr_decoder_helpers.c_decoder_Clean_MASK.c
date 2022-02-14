
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_description; int fmt_out; int fmt_in; int * p_module; } ;
typedef TYPE_1__ decoder_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( decoder_t *VAR_0 )
{
    if ( VAR_0->p_module != ((void*)0) )
    {
        FUNC_1(VAR_0, VAR_0->p_module);
        VAR_0->p_module = ((void*)0);
    }

    FUNC_0( &VAR_0->fmt_in );
    FUNC_0( &VAR_0->fmt_out );

    if ( VAR_0->p_description )
    {
        FUNC_2(VAR_0->p_description);
        VAR_0->p_description = ((void*)0);
    }
}
