
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_8__ {scalar_t__ size; scalar_t__* data; } ;
typedef TYPE_4__ vec_on_length_changed ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_7__ {TYPE_4__ on_length_changed; } ;
struct ctx {TYPE_2__ params; int wait; int * player; TYPE_1__ played_medias; TYPE_3__ report; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ctx *VAR_0)
{
    vlc_player_t *VAR_1 = VAR_0->player;
    vec_on_length_changed *VAR_2 = &VAR_0->report.on_length_changed;
    while (VAR_2->size != VAR_0->played_medias.size)
        FUNC_1(VAR_0->player, &VAR_0->wait);
    for (size_t VAR_3 = 0; VAR_3 < VAR_2->size; ++VAR_3)
        FUNC_0(VAR_2->data[VAR_3] == VAR_0->params.length);
    FUNC_0(VAR_0->params.length == FUNC_2(VAR_1));
}
