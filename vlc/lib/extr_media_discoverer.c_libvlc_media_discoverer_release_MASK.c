
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_libvlc_instance; int catname_to_submedialist; int p_mlist; int * p_sd; } ;
typedef TYPE_1__ libvlc_media_discoverer_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;

void
FUNC_5( libvlc_media_discoverer_t * VAR_1 )
{
    if( VAR_1->p_sd != ((void*)0) )
        FUNC_1( VAR_1 );

    FUNC_2( VAR_1->p_mlist );

    FUNC_4( &VAR_1->catname_to_submedialist,
        VAR_0, ((void*)0) );

    FUNC_3( VAR_1->p_libvlc_instance );

    FUNC_0( VAR_1 );
}
