
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {int lock; scalar_t__ p_mask; } ;
typedef TYPE_2__ filter_sys_t ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static picture_t *FUNC_7( filter_t *VAR_0, picture_t *VAR_1 )
{
    picture_t *VAR_2;
    filter_sys_t *VAR_3 = VAR_0->p_sys;

    if( !VAR_1 ) return ((void*)0);

    VAR_2 = FUNC_2( VAR_0 );
    if( !VAR_2 )
    {
        FUNC_4( VAR_1 );
        return ((void*)0);
    }


    FUNC_5( &VAR_3->lock );
    if( VAR_3->p_mask )
        FUNC_1( VAR_0, VAR_1, VAR_2 );
    else
        FUNC_3( VAR_2, VAR_1 );
    FUNC_6( &VAR_3->lock );

    return FUNC_0( VAR_2, VAR_1 );
}
