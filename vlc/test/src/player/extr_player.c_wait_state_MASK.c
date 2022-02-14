
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int* data; } ;
typedef TYPE_2__ vec_on_state_changed ;
struct TYPE_3__ {TYPE_2__ on_state_changed; } ;
struct ctx {scalar_t__ last_state_idx; int wait; int player; TYPE_1__ report; } ;
typedef enum vlc_player_state { ____Placeholder_vlc_player_state } vlc_player_state ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct ctx *VAR_0, enum vlc_player_state VAR_1)
{
    vec_on_state_changed *VAR_2 = &VAR_0->report.on_state_changed;
    for (;;)
    {
        while (VAR_2->size <= VAR_0->last_state_idx)
            FUNC_0(VAR_0->player, &VAR_0->wait);
        for (size_t VAR_3 = VAR_0->last_state_idx; VAR_3 < VAR_2->size; ++VAR_3)
            if ((VAR_2)->data[VAR_3] == VAR_1)
            {
                VAR_0->last_state_idx = VAR_3 + 1;
                return;
            }
        VAR_0->last_state_idx = VAR_2->size;
    }
}
