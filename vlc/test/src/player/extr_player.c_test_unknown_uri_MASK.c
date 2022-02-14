
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_6__ {int size; scalar_t__* data; } ;
typedef TYPE_3__ vec_on_error_changed ;
struct TYPE_5__ {TYPE_3__ on_error_changed; } ;
struct TYPE_4__ {int error; } ;
struct ctx {TYPE_2__ report; int played_medias; TYPE_1__ params; int * player; } ;
typedef int input_item_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (struct ctx*) ;
 int FUNC_3 (struct ctx*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_8(struct ctx *VAR_4)
{
    FUNC_4("unknown_uri");
    vlc_player_t *VAR_5 = VAR_4->player;

    input_item_t *VAR_6 = FUNC_1("unknownuri://foo", "fail");
    FUNC_0(*VAR_6);
    int VAR_7 = FUNC_5(VAR_5, VAR_6);
    FUNC_0(VAR_7 == VAR_3);

    VAR_4->params.error = 1;
    bool VAR_8 = FUNC_6(&VAR_4->played_medias, VAR_6);
    FUNC_0(VAR_8);

    FUNC_2(VAR_4);

    FUNC_7(VAR_4, VAR_1);
    FUNC_7(VAR_4, VAR_2);
    {
        vec_on_error_changed *VAR_9 = &VAR_4->report.on_error_changed;
        FUNC_0(VAR_9->size == 1);
        FUNC_0(VAR_9->data[0] != VAR_0);
    }

    FUNC_3(VAR_4);
}
