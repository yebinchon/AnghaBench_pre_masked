
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_3__ {int items; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;

libvlc_media_t *
FUNC_4( libvlc_media_list_t * VAR_0,
                                 int VAR_1 )
{
    libvlc_media_t * VAR_2;

    if( (size_t) VAR_1 >= FUNC_2( &VAR_0->items ))
    {
        FUNC_1( "Index out of bounds" );
        return ((void*)0);
    }

    VAR_2 = FUNC_3( &VAR_0->items, VAR_1 );
    FUNC_0( VAR_2 );
    return VAR_2;
}
