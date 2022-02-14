
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {int (* pf_sepia ) (int *,int *,int) ;int i_intensity; } ;
typedef TYPE_2__ filter_sys_t ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static picture_t *FUNC_6( filter_t *VAR_0, picture_t *VAR_1 )
{
    picture_t *VAR_2;

    if( !VAR_1 ) return ((void*)0);

    filter_sys_t *VAR_3 = VAR_0->p_sys;
    int VAR_4 = FUNC_1( &VAR_3->i_intensity );

    VAR_2 = FUNC_2( VAR_0 );
    if( !VAR_2 )
    {
        FUNC_3( VAR_0, "can't get output picture" );
        FUNC_4( VAR_1 );
        return ((void*)0);
    }

    VAR_3->pf_sepia( VAR_1, VAR_2, VAR_4 );

    return FUNC_0( VAR_2, VAR_1 );
}
