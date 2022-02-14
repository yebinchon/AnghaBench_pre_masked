
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int thread; int wait; } ;
struct TYPE_11__ {int deleting; scalar_t__ renderer; int resource; scalar_t__ next_media; scalar_t__ media; TYPE_1__ destructor; int lock; int aout_listeners; int vout_listeners; int listeners; scalar_t__ input; } ;
typedef TYPE_2__ vlc_player_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;

void
FUNC_15(vlc_player_t *VAR_1)
{
    FUNC_7(&VAR_1->lock);

    if (VAR_1->input)
        FUNC_13(VAR_1, VAR_1->input);

    VAR_1->deleting = 1;
    FUNC_4(&VAR_1->destructor.wait);

    FUNC_0(FUNC_6(&VAR_1->listeners));
    FUNC_0(FUNC_6(&VAR_1->vout_listeners));
    FUNC_0(FUNC_6(&VAR_1->aout_listeners));

    FUNC_8(&VAR_1->lock);

    FUNC_5(VAR_1->destructor.thread, ((void*)0));

    if (VAR_1->media)
        FUNC_1(VAR_1->media);
    if (VAR_1->next_media)
        FUNC_1(VAR_1->next_media);

    FUNC_10(VAR_1);

    FUNC_11(VAR_1);

    FUNC_12(VAR_1);
    FUNC_3(VAR_1, "corks", VAR_0, ((void*)0));

    FUNC_2(VAR_1->resource);
    if (VAR_1->renderer)
        FUNC_14(VAR_1->renderer);

    FUNC_9(VAR_1);
}
