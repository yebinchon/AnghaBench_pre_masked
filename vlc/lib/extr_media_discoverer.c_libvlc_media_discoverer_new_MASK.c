
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; int catname_to_submedialist; int * p_sd; TYPE_3__* p_mlist; int * p_libvlc_instance; } ;
typedef TYPE_1__ libvlc_media_discoverer_t ;
typedef int libvlc_instance_t ;
struct TYPE_6__ {int b_read_only; } ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

libvlc_media_discoverer_t *
FUNC_9( libvlc_instance_t * VAR_0, const char * VAR_1 )
{

    if( !FUNC_6( VAR_1, "podcast", 7 ) )
        return ((void*)0);

    libvlc_media_discoverer_t *VAR_2;

    VAR_2 = FUNC_3(sizeof(*VAR_2) + FUNC_5(VAR_1) + 1);
    if( FUNC_7(VAR_2 == ((void*)0)) )
    {
        FUNC_1( "Not enough memory" );
        return ((void*)0);
    }

    VAR_2->p_libvlc_instance = VAR_0;
    VAR_2->p_mlist = FUNC_0( VAR_0 );
    VAR_2->p_mlist->b_read_only = 1;
    VAR_2->p_sd = ((void*)0);

    FUNC_8( &VAR_2->catname_to_submedialist, 0 );

    FUNC_2( VAR_0 );
    FUNC_4( VAR_2->name, VAR_1 );
    return VAR_2;
}
