
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mp_callback_lock; int seek_pending; int seek_offset; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int libvlc_event_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(const libvlc_event_t * VAR_0, void * VAR_1)
{
    FUNC_0(VAR_0);
    libvlc_media_list_player_t * VAR_2 = VAR_1;





    FUNC_2(&VAR_2->mp_callback_lock);
    VAR_2->seek_offset++;
    FUNC_1(&VAR_2->seek_pending);
    FUNC_3(&VAR_2->mp_callback_lock);
}
