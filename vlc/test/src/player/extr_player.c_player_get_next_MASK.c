
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_2__ {scalar_t__ size; int ** data; } ;
struct ctx {int played_medias; TYPE_1__ next_medias; } ;
typedef int input_item_t ;


 int FUNC_0 (int) ;
 struct ctx* FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static input_item_t *
FUNC_5(vlc_player_t *VAR_0, void *VAR_1)
{
    struct ctx *VAR_2 = FUNC_1(VAR_0, VAR_1);
    input_item_t *VAR_3;
    if (VAR_2->next_medias.size > 0)
    {
        VAR_3 = VAR_2->next_medias.data[0];
        FUNC_4(&VAR_2->next_medias, 0);

        FUNC_2(VAR_3);
        bool VAR_4 = FUNC_3(&VAR_2->played_medias, VAR_3);
        FUNC_0(VAR_4);
    }
    else
        VAR_3 = ((void*)0);
    return VAR_3;
}
