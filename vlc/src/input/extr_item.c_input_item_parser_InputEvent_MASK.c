
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
struct TYPE_7__ {int length; } ;
struct vlc_input_event {int type; int subitems; TYPE_1__ state; TYPE_3__ times; } ;
typedef int input_thread_t ;
struct TYPE_8__ {int userdata; TYPE_2__* cbs; int state; } ;
typedef TYPE_4__ input_item_parser_id_t ;
struct TYPE_6__ {int (* on_subtree_added ) (int ,int ,int ) ;int (* on_ended ) (int ,int,int ) ;} ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(input_thread_t *VAR_3,
                             const struct vlc_input_event *VAR_4, void *VAR_5)
{
    input_item_parser_id_t *VAR_6 = VAR_5;

    switch (VAR_4->type)
    {
        case 128:
            FUNC_1(FUNC_0(VAR_3), VAR_4->times.length);
            break;
        case 130:
            VAR_6->state = VAR_4->state.value;
            break;
        case 131:
        {
            int VAR_7 = VAR_6->state == VAR_0 ? VAR_2 : VAR_1;
            VAR_6->cbs->on_ended(FUNC_0(VAR_3), VAR_7, VAR_6->userdata);
            break;
        }
        case 129:
            if (VAR_6->cbs->on_subtree_added)
                VAR_6->cbs->on_subtree_added(FUNC_0(VAR_3),
                                              VAR_4->subitems, VAR_6->userdata);
            break;
        default:
            break;
    }
}
