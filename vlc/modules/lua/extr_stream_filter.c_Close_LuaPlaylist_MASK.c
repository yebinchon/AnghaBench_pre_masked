
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vlclua_playlist {struct vlclua_playlist* access; int * L; struct vlclua_playlist* filename; } ;
struct TYPE_2__ {struct vlclua_playlist* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlclua_playlist*) ;
 int FUNC_2 (int *) ;

void FUNC_3(vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    struct vlclua_playlist *VAR_2 = VAR_1->p_sys;

    FUNC_1(VAR_2->filename);
    FUNC_0(VAR_2->L != ((void*)0));
    FUNC_2(VAR_2->L);
    FUNC_1(VAR_2->access);
    FUNC_1(VAR_2);
}
