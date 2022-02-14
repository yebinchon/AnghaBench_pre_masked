
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_6__ {struct TYPE_6__* p_sys; } ;
typedef TYPE_1__ vlc_player_t ;
typedef int vlc_es_id_t ;
typedef TYPE_1__ intf_thread_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef enum vlc_player_vout_action { ____Placeholder_vlc_player_vout_action } vlc_player_vout_action ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(vlc_player_t *VAR_4,
                       enum vlc_player_vout_action VAR_5, vout_thread_t *VAR_6,
                       enum vlc_vout_order VAR_7, vlc_es_id_t *VAR_8,
                       void *VAR_9)
{
    FUNC_0(VAR_7);
    intf_thread_t *VAR_10 = VAR_9;

    if (FUNC_5(VAR_8) != VAR_2)
        return;

    bool VAR_11 = FUNC_3(VAR_6, "viewpoint-changeable");
    switch (VAR_5)
    {
        case 129:
            FUNC_1(VAR_6, "mouse-button-down", VAR_0, VAR_10);
            FUNC_1(VAR_6, "mouse-moved", VAR_1, VAR_10->p_sys);
            if (VAR_11)
                FUNC_1(VAR_6, "viewpoint-moved",
                                VAR_3, VAR_4);
            break;
        case 128:
            FUNC_2(VAR_6, "mouse-button-down", VAR_0, VAR_10);
            FUNC_2(VAR_6, "mouse-moved", VAR_1, VAR_10->p_sys);
            if (VAR_11)
                FUNC_2(VAR_6, "viewpoint-moved",
                                VAR_3, VAR_4);
            break;
        default:
            FUNC_4();
    }
}
