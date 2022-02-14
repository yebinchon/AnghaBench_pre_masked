
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int files; int lock; } ;
typedef TYPE_1__ addon_entry_t ;
struct TYPE_6__ {TYPE_1__ entry; int rc; } ;
typedef TYPE_2__ addon_entry_owner_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

addon_entry_t * FUNC_5(void)
{
    addon_entry_owner_t *VAR_0 = FUNC_1( 1, sizeof(addon_entry_owner_t) );
    if( FUNC_2(VAR_0 == ((void*)0)) )
        return ((void*)0);

    FUNC_3( &VAR_0->rc );

    addon_entry_t *VAR_1 = &VAR_0->entry;
    FUNC_4( &VAR_1->lock );
    FUNC_0( VAR_1->files );
    return VAR_1;
}
