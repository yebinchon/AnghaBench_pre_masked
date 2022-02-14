
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_description_items; TYPE_3__* psz_name; TYPE_3__* psz_short_description; TYPE_3__* psz_description; TYPE_3__* description_items; } ;
typedef TYPE_1__ vlc_epg_event_t ;
struct TYPE_5__ {struct TYPE_5__* psz_value; struct TYPE_5__* psz_key; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(vlc_epg_event_t *VAR_0)
{
    for(int VAR_1=0; VAR_1<VAR_0->i_description_items; VAR_1++)
    {
        FUNC_0(VAR_0->description_items[VAR_1].psz_key);
        FUNC_0(VAR_0->description_items[VAR_1].psz_value);
    }
    FUNC_0(VAR_0->description_items);
    FUNC_0(VAR_0->psz_description);
    FUNC_0(VAR_0->psz_short_description);
    FUNC_0(VAR_0->psz_name);
}
