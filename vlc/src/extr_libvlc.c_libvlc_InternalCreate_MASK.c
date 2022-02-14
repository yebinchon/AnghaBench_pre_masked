
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vlc_custom_create ;
struct TYPE_3__ {int exit; int * media_source_provider; int * p_vlm; int * main_playlist; int * interfaces; int lock; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

libvlc_int_t * FUNC_3( void )
{
    libvlc_int_t *VAR_0;
    libvlc_priv_t *VAR_1;


    VAR_0 = (vlc_custom_create)( ((void)0), sizeof (*VAR_1), "libvlc" );
    if( VAR_0 == ((void*)0) )
        return ((void*)0);

    VAR_1 = FUNC_0 (VAR_0);
    FUNC_2(&VAR_1->lock);
    VAR_1->interfaces = ((void*)0);
    VAR_1->main_playlist = ((void*)0);
    VAR_1->p_vlm = ((void*)0);
    VAR_1->media_source_provider = ((void*)0);

    FUNC_1( &VAR_1->exit );

    return VAR_0;
}
