
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int p_libvlc_instance; int p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_10__ {int player; int p_libvlc_instance; TYPE_1__* p_md; } ;
typedef TYPE_2__ libvlc_media_player_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(
                            libvlc_media_player_t *VAR_0,
                            libvlc_media_t *VAR_1 )
{
    FUNC_4(VAR_0->player);

    if (VAR_0->p_md)
        FUNC_3(VAR_0->p_md);

    FUNC_0( VAR_0->p_md );

    if( VAR_1 )
    {
        FUNC_1( VAR_1 );
        FUNC_2(VAR_1);
    }
    VAR_0->p_md = VAR_1;

    FUNC_5(VAR_0->player, VAR_1->p_input_item);



    VAR_0->p_libvlc_instance = VAR_1->p_libvlc_instance;

    FUNC_6(VAR_0->player);
}
