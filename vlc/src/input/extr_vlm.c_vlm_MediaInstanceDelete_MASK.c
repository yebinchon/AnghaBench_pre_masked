
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlm_t ;
struct TYPE_8__ {int psz_name; } ;
struct TYPE_9__ {int instance; int i_instance; TYPE_1__ cfg; } ;
typedef TYPE_2__ vlm_media_sys_t ;
struct TYPE_10__ {struct TYPE_10__* psz_name; int p_item; int p_parent; int listener; int * player; } ;
typedef TYPE_3__ vlm_media_instance_sys_t ;
typedef int vlc_player_t ;
typedef int int64_t ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_11( vlm_t *VAR_0, int64_t VAR_1, vlm_media_instance_sys_t *VAR_2, vlm_media_sys_t *VAR_3 )
{
    vlc_player_t *VAR_4 = VAR_2->player;

    FUNC_6(VAR_4);
    FUNC_7(VAR_4, VAR_2->listener);
    FUNC_8(VAR_4);
    bool VAR_5 = FUNC_5(VAR_4);
    FUNC_9(VAR_4);
    FUNC_4(VAR_4);

    if (VAR_5)
        FUNC_10( VAR_0, VAR_1, VAR_3->cfg.psz_name );
    FUNC_3(VAR_2->p_parent);

    FUNC_0( VAR_3->i_instance, VAR_3->instance, VAR_2 );
    FUNC_2( VAR_2->p_item );
    FUNC_1( VAR_2->psz_name );
    FUNC_1( VAR_2 );
}
