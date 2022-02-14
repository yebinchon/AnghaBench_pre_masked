
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int p_input_item; int p_libvlc_instance; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_11__ {TYPE_1__* p_md; int player; } ;
typedef TYPE_2__ libvlc_media_player_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

libvlc_media_player_t *
FUNC_8( libvlc_media_t * VAR_1 )
{
    libvlc_media_player_t * VAR_2;

    VAR_2 = FUNC_0( VAR_1->p_libvlc_instance );
    if( !VAR_2 )
        return ((void*)0);

    FUNC_2( VAR_1 );
    VAR_2->p_md = VAR_1;
    FUNC_3(VAR_1);

    FUNC_5(VAR_2->player);
    int VAR_3 = FUNC_6(VAR_2->player, VAR_1->p_input_item);
    FUNC_7(VAR_2->player);

    if (VAR_3 != VAR_0)
    {
        FUNC_4(VAR_1);
        FUNC_1(VAR_1);
        VAR_2->p_md = ((void*)0);
        return ((void*)0);
    }

    return VAR_2;
}
