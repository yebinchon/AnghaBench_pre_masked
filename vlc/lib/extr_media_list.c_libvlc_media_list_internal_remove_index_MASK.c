
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_4__ {int items; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *,int,int ) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

int FUNC_6( libvlc_media_list_t * VAR_2,
                                             int VAR_3 )
{
    libvlc_media_t * VAR_4;

    if( (size_t) VAR_3 >= FUNC_3( &VAR_2->items ))
    {
        FUNC_1( "Index out of bounds" );
        return -1;
    }

    VAR_4 = FUNC_4( &VAR_2->items, VAR_3 );

    FUNC_2( VAR_2, VAR_4, VAR_3, VAR_1 );
    FUNC_5( &VAR_2->items, VAR_3 );
    FUNC_2( VAR_2, VAR_4, VAR_3, VAR_0 );

    FUNC_0( VAR_4 );
    return 0;
}
