
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {int list; int lock; scalar_t__ p_blend; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_2 )
{
    filter_t *VAR_3 = (filter_t *)VAR_2;
    filter_sys_t *VAR_4 = VAR_3->p_sys;

    for( int VAR_5 = 0; VAR_1[VAR_5]; VAR_5++ )
        FUNC_3( VAR_3, VAR_1[VAR_5],
                         VAR_0, VAR_4 );

    if( VAR_4->p_blend )
        FUNC_1( VAR_4->p_blend );

    FUNC_4( &VAR_4->lock );
    FUNC_0( &VAR_4->list );
    FUNC_2( VAR_4 );
}
