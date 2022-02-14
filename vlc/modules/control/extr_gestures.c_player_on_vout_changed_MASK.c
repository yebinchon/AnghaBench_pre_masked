
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_9__ {size_t size; int ** data; } ;
struct TYPE_8__ {TYPE_3__ vout_vector; } ;
typedef TYPE_2__ intf_sys_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef enum vlc_player_vout_action { ____Placeholder_vlc_player_vout_action } vlc_player_vout_action ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(vlc_player_t *VAR_3,
                       enum vlc_player_vout_action VAR_4,
                       vout_thread_t *VAR_5,
                       enum vlc_vout_order VAR_6,
                       vlc_es_id_t *VAR_7, void *VAR_8)
{
    FUNC_0(*VAR_3); FUNC_0(VAR_6);
    intf_thread_t *VAR_9 = VAR_8;
    intf_sys_t *VAR_10 = VAR_9->p_sys;

    if (FUNC_4(VAR_7) != VAR_2)
        return;

    switch (VAR_4)
    {
        case 129:
            if (FUNC_5(&VAR_10->vout_vector, VAR_5))
            {
                FUNC_7(VAR_5);
                FUNC_1(VAR_5, "mouse-moved", VAR_1, VAR_9);
                FUNC_1(VAR_5, "mouse-button-down", VAR_0, VAR_9);
            }
            break;
        case 128:
            for (size_t VAR_11 = 0; VAR_11 < VAR_10->vout_vector.size; ++VAR_11)
            {
                vout_thread_t *VAR_12 = VAR_10->vout_vector.data[VAR_11];
                if (VAR_12 == VAR_5)
                {
                    FUNC_6(&VAR_10->vout_vector, VAR_11);
                    FUNC_2(VAR_5, "mouse-moved", VAR_1, VAR_9);
                    FUNC_2(VAR_5, "mouse-button-down", VAR_0, VAR_9);
                    FUNC_8(VAR_5);
                    break;
                }
            }
            break;
        default:
            FUNC_3();
    }
}
