
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float new_position; } ;
struct TYPE_6__ {TYPE_1__ media_player_position_changed; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ libvlc_event_t ;


 double VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(const libvlc_event_t *VAR_4, void *VAR_5)
{
    float VAR_6;
    (void)VAR_5;

    FUNC_2(&VAR_2);
    switch (VAR_4->type) {
    case 129:
        VAR_6 = VAR_4->u.media_player_position_changed.new_position;
        if (VAR_6 < VAR_0 * .9 )
            break;
    case 128:
        VAR_1 = 1;
        FUNC_1(&VAR_3);
        break;

    default:
        FUNC_0(0);
    }
    FUNC_3(&VAR_2);
}
