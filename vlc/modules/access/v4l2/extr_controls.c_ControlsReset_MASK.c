
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; struct TYPE_3__* next; int default_value; int name; } ;
typedef TYPE_1__ vlc_v4l2_ctrl_t ;
typedef int vlc_object_t ;






 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2 (vlc_object_t *VAR_0, vlc_v4l2_ctrl_t *VAR_1)
{
    while (VAR_1 != ((void*)0))
    {
        switch (VAR_1->type)
        {
            case 130:
            case 128:
            case 129:
                FUNC_1 (VAR_0, VAR_1->name, VAR_1->default_value);
                break;
            case 131:
                FUNC_0 (VAR_0, VAR_1->name, VAR_1->default_value);
                break;
            default:;
        }
        VAR_1 = VAR_1->next;
    }
}
