
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_3__ {int items; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2( libvlc_media_list_t * VAR_0,
                                     libvlc_media_t * VAR_1 )
{
    int VAR_2 = FUNC_1( &VAR_0->items, VAR_1 );
    if( VAR_2 == -1 )
        FUNC_0( "Media not found" );

    return VAR_2;
}
