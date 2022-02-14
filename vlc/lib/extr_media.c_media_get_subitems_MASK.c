
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int subitems_lock; TYPE_2__* p_subitems; int p_libvlc_instance; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_7__ {int b_read_only; TYPE_1__* p_internal_md; } ;
typedef TYPE_2__ libvlc_media_list_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static libvlc_media_list_t *FUNC_3( libvlc_media_t * VAR_0,
                                                bool VAR_1 )
{
    libvlc_media_list_t *VAR_2 = ((void*)0);

    FUNC_1( &VAR_0->subitems_lock );
    if( VAR_0->p_subitems == ((void*)0) && VAR_1 )
    {
        VAR_0->p_subitems = FUNC_0( VAR_0->p_libvlc_instance );
        if( VAR_0->p_subitems != ((void*)0) )
        {
            VAR_0->p_subitems->b_read_only = 1;
            VAR_0->p_subitems->p_internal_md = VAR_0;
        }
    }
    VAR_2 = VAR_0->p_subitems;
    FUNC_2( &VAR_0->subitems_lock );
    return VAR_2;
}
