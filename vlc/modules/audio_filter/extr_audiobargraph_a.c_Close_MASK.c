
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* first; } ;
typedef TYPE_2__ filter_sys_t ;
typedef TYPE_2__ ValueDate_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_0 )
{
    filter_t * VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;
    vlc_object_t *VAR_3 = FUNC_0(FUNC_3(VAR_1));

    FUNC_2(VAR_3, "audiobargraph_v-i_values");
    FUNC_2(VAR_3, "audiobargraph_v-alarm");

    while (VAR_2->first != ((void*)0)) {
        ValueDate_t *VAR_4 = VAR_2->first;
        VAR_2->first = VAR_2->first->next;
        FUNC_1(VAR_4);
    }
    FUNC_1(VAR_2);
}
