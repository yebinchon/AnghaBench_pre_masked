
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fmt; int p_text; scalar_t__ p_picture; scalar_t__ p_private; } ;
typedef TYPE_1__ subpicture_region_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5( subpicture_region_t *VAR_0 )
{
    if( !VAR_0 )
        return;

    if( VAR_0->p_private )
        FUNC_2( VAR_0->p_private );

    if( VAR_0->p_picture )
        FUNC_1( VAR_0->p_picture );

    FUNC_3( VAR_0->p_text );
    FUNC_4( &VAR_0->fmt );
    FUNC_0( VAR_0 );
}
