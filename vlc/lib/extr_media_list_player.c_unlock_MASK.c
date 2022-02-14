
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object_lock; int mp_callback_lock; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(libvlc_media_list_player_t * VAR_0)
{
    FUNC_0(&VAR_0->mp_callback_lock);
    FUNC_0(&VAR_0->object_lock);
}
