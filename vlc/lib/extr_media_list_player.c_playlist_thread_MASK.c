
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ seek_offset; int mp_callback_lock; int seek_pending; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void *FUNC_8(void *VAR_0)
{
    libvlc_media_list_player_t *VAR_1 = VAR_0;

    FUNC_5(&VAR_1->mp_callback_lock);
    FUNC_0(&VAR_1->mp_callback_lock);

    for (;;)
    {
        int VAR_2;

        while (VAR_1->seek_offset == 0)
            FUNC_4(&VAR_1->seek_pending, &VAR_1->mp_callback_lock);

        VAR_2 = FUNC_7();
        FUNC_1(VAR_1, VAR_1->seek_offset);
        VAR_1->seek_offset = 0;
        FUNC_6(VAR_2);
    }

    FUNC_3();
    FUNC_2();
}
