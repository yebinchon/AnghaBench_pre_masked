
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_7__ {size_t size; scalar_t__* data; } ;
typedef TYPE_3__ vec_on_current_media_changed ;
struct TYPE_6__ {size_t const size; scalar_t__* data; } ;
struct TYPE_5__ {TYPE_3__ on_current_media_changed; } ;
struct ctx {TYPE_2__ played_medias; int wait; TYPE_1__ report; int * player; } ;


 int * FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ctx*,int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ctx *VAR_0)
{
    vlc_player_t *VAR_1 = VAR_0->player;
    vec_on_current_media_changed *VAR_2 = &VAR_0->report.on_current_media_changed;

    FUNC_1(VAR_2->size > 0);
    FUNC_1(FUNC_4(VAR_1) != ((void*)0));
    FUNC_1(FUNC_0(VAR_2) == FUNC_4(VAR_1));
    const size_t VAR_3 = VAR_2->size;

    FUNC_2(VAR_0, ((void*)0), ((void*)0), 0);

    while (VAR_2->size == VAR_3)
        FUNC_3(VAR_1, &VAR_0->wait);

    FUNC_1(VAR_2->size == VAR_0->played_medias.size);
    for (size_t VAR_4 = 0; VAR_4 < VAR_2->size; ++VAR_4)
        FUNC_1(VAR_2->data[VAR_4] == VAR_0->played_medias.data[VAR_4]);

    FUNC_1(FUNC_0(VAR_2) == ((void*)0));
    FUNC_1(FUNC_4(VAR_1) == ((void*)0));
}
