
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int order; } ;
typedef TYPE_1__ vlc_playlist_t ;




 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

bool
FUNC_4(vlc_playlist_t *VAR_0)
{
    FUNC_1(VAR_0);
    switch (VAR_0->order)
    {
        case 129:
            return FUNC_2(VAR_0);
        case 128:
            return FUNC_3(VAR_0);
        default:
            FUNC_0();
    }
}
