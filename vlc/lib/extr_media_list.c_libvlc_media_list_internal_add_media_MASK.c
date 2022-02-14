
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
 int FUNC_1 (TYPE_1__*,int *,scalar_t__,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4( libvlc_media_list_t * VAR_2,
                                           libvlc_media_t * VAR_3 )
{
    FUNC_0( VAR_3 );

    FUNC_1( VAR_2, VAR_3, FUNC_3( &VAR_2->items ),
                          VAR_1 );
    FUNC_2( &VAR_2->items, VAR_3 );
    FUNC_1( VAR_2, VAR_3, FUNC_3( &VAR_2->items )-1,
                          VAR_0 );
}
