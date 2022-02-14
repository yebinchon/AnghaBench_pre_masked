
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int p_module; } ;
struct TYPE_5__ {TYPE_2__ m; int lock; int cbs; } ;
typedef TYPE_1__ vlc_medialibrary_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5( vlc_medialibrary_t* VAR_0 )
{
    FUNC_0( VAR_0 != ((void*)0) );
    FUNC_1( &VAR_0->m, VAR_0->m.p_module );
    FUNC_0( FUNC_2( &VAR_0->cbs ) );
    FUNC_3( &VAR_0->lock );
    FUNC_4(&VAR_0->m);
}
