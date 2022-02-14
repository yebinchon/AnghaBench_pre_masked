
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_4__ {int object_lock; int * p_md; scalar_t__ p_internal_md; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( libvlc_media_list_t * VAR_0,
                                  libvlc_media_t * VAR_1 )

{
    FUNC_3( &VAR_0->object_lock );
    if( VAR_0->p_internal_md || !FUNC_2(VAR_0) )
    {
        FUNC_4( &VAR_0->object_lock );
        return;
    }
    FUNC_0( VAR_0->p_md );
    FUNC_1( VAR_1 );
    VAR_0->p_md = VAR_1;
    FUNC_4( &VAR_0->object_lock );
}
