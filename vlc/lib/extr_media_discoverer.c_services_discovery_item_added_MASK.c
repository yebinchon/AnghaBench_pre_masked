
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* sys; } ;
struct TYPE_14__ {TYPE_1__ owner; } ;
typedef TYPE_2__ services_discovery_t ;
typedef int libvlc_media_t ;
struct TYPE_15__ {int b_read_only; } ;
typedef TYPE_3__ libvlc_media_list_t ;
struct TYPE_16__ {TYPE_3__* p_mlist; int catname_to_submedialist; int p_libvlc_instance; } ;
typedef TYPE_4__ libvlc_media_discoverer_t ;
typedef int input_item_t ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int ,char const*) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int *,char const*) ;

__attribute__((used)) static void FUNC_9( services_discovery_t *VAR_1,
                                           input_item_t *VAR_2,
                                           input_item_t *VAR_3,
                                           const char *VAR_4 )
{
    libvlc_media_t * VAR_5;
    libvlc_media_discoverer_t *VAR_6 = VAR_1->owner.sys;
    libvlc_media_list_t * VAR_7 = VAR_6->p_mlist;

    VAR_5 = FUNC_4( VAR_6->p_libvlc_instance,
                                             VAR_3 );

    if( VAR_2 != ((void*)0) )
    {

    }
    else


    if( VAR_4 )
    {
        VAR_7 = FUNC_8( &VAR_6->catname_to_submedialist, VAR_4 );

        if( VAR_7 == VAR_0 )
        {
            libvlc_media_t * VAR_8;
            VAR_8 = FUNC_3( VAR_6->p_libvlc_instance, VAR_4 );
            VAR_7 = FUNC_6( VAR_8 );
            VAR_7->b_read_only = 1;


            FUNC_7( &VAR_6->catname_to_submedialist, VAR_4, VAR_7 );


            FUNC_1( VAR_6->p_mlist );
            FUNC_0( VAR_6->p_mlist, VAR_8 );
            FUNC_2( VAR_6->p_mlist );



            FUNC_5( VAR_8 );
        }
    }

    FUNC_1( VAR_7 );
    FUNC_0( VAR_7, VAR_5 );
    FUNC_2( VAR_7 );

    FUNC_5( VAR_5 );
}
