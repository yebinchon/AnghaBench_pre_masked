
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int player; int i_refcount; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4( libvlc_media_player_t *VAR_0 )
{
    bool VAR_1;

    FUNC_0( VAR_0 );
    FUNC_2(VAR_0->player);
    VAR_1 = !--VAR_0->i_refcount;
    FUNC_3(VAR_0->player);

    if( VAR_1 )
        FUNC_1( VAR_0 );
}
