
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ p_pic; } ;
typedef TYPE_1__ logo_t ;
struct TYPE_6__ {unsigned int i_count; TYPE_1__* p_logo; } ;
typedef TYPE_2__ logo_list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2( logo_list_t *VAR_0 )
{
    for( unsigned VAR_1 = 0; VAR_1 < VAR_0->i_count; VAR_1++ )
    {
        logo_t *VAR_2 = &VAR_0->p_logo[VAR_1];

        if( VAR_2->p_pic )
            FUNC_1( VAR_2->p_pic );
    }
    FUNC_0( VAR_0->p_logo );
}
