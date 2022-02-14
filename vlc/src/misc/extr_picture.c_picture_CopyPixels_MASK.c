
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_planes; TYPE_2__* context; scalar_t__ p; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_7__ {TYPE_2__* (* copy ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

void FUNC_3( picture_t *VAR_0, const picture_t *VAR_1 )
{
    for( int VAR_2 = 0; VAR_2 < VAR_1->i_planes ; VAR_2++ )
        FUNC_1( VAR_0->p+VAR_2, VAR_1->p+VAR_2 );

    FUNC_0( VAR_0->context == ((void*)0) );

    if( VAR_1->context != ((void*)0) )
        VAR_0->context = VAR_1->context->copy( VAR_1->context );
}
