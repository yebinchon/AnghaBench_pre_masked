
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct TYPE_3__ {int lock; int * main_playlist; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static vlc_playlist_t *
FUNC_6(libvlc_int_t *VAR_0)
{
    libvlc_priv_t *VAR_1 = FUNC_2(VAR_0);

    FUNC_3(&VAR_1->lock);
    vlc_playlist_t *VAR_2 = VAR_1->main_playlist;
    if (VAR_1->main_playlist == ((void*)0))
    {
        VAR_2 = VAR_1->main_playlist = FUNC_5(FUNC_1(VAR_0));
        if (VAR_2)
            FUNC_0(VAR_2, FUNC_1(VAR_0));
    }
    FUNC_4(&VAR_1->lock);

    return VAR_2;
}
