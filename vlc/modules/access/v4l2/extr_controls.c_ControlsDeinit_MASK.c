
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; struct TYPE_5__* next; } ;
typedef TYPE_1__ vlc_v4l2_ctrl_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3 (vlc_object_t *VAR_2, vlc_v4l2_ctrl_t *VAR_3)
{
    FUNC_1 (VAR_2, "reset", VAR_1, VAR_3);
    FUNC_2 (VAR_2, "reset");

    while (VAR_3 != ((void*)0))
    {
        vlc_v4l2_ctrl_t *VAR_4 = VAR_3->next;

        FUNC_1 (VAR_2, VAR_3->name, VAR_0, VAR_3);
        FUNC_2 (VAR_2, VAR_3->name);
        FUNC_0 (VAR_3);
        VAR_3 = VAR_4;
    }

    FUNC_2 (VAR_2, "controls");
}
