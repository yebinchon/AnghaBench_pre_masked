
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* psz_name; void* p_next; } ;
typedef TYPE_1__ vlc_family_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( void *VAR_0, void *VAR_1 )
{
    vlc_family_t *VAR_2 = ( vlc_family_t * ) VAR_0;

    if( VAR_2->p_next )
        FUNC_1( VAR_2->p_next, VAR_1 );

    FUNC_0( VAR_2->psz_name );
    FUNC_0( VAR_2 );
}
