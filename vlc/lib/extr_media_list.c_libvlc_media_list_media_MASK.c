
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_3__ {int object_lock; int * p_md; int * p_internal_md; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

libvlc_media_t *
FUNC_3( libvlc_media_list_t * VAR_0 )
{
    libvlc_media_t *VAR_1;

    FUNC_1( &VAR_0->object_lock );
    VAR_1 = VAR_0->p_internal_md ? VAR_0->p_internal_md : VAR_0->p_md;
    if( VAR_1 )
        FUNC_0( VAR_1 );
    FUNC_2( &VAR_0->object_lock );

    return VAR_1;
}
