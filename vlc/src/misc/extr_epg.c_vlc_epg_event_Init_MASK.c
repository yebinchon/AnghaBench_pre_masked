
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * description_items; scalar_t__ i_description_items; int i_duration; int i_id; int i_start; } ;
typedef TYPE_1__ vlc_epg_event_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(vlc_epg_event_t *VAR_0, uint16_t VAR_1,
                               int64_t VAR_2, uint32_t VAR_3)
{
    FUNC_0(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->i_start = VAR_2;
    VAR_0->i_id = VAR_1;
    VAR_0->i_duration = VAR_3;
    VAR_0->i_description_items = 0;
    VAR_0->description_items = ((void*)0);
}
