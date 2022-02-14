
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ media_stopped_action; int next_media_requested; int media_provider_data; TYPE_1__* media_provider; int * next_media; } ;
typedef TYPE_2__ vlc_player_t ;
struct TYPE_6__ {int * (* get_next ) (TYPE_2__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(vlc_player_t *VAR_1)
{
    FUNC_2(VAR_1);

    if (!VAR_1->media_provider
     || VAR_1->media_stopped_action != VAR_0
     || VAR_1->next_media_requested)
        return;

    FUNC_0(VAR_1->next_media == ((void*)0));
    VAR_1->next_media =
        VAR_1->media_provider->get_next(VAR_1, VAR_1->media_provider_data);
    VAR_1->next_media_requested = 1;
}
