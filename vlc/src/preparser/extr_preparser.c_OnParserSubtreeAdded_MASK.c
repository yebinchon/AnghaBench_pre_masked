
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* req; } ;
typedef TYPE_2__ input_preparser_task_t ;
struct TYPE_6__ {int userdata; int item; TYPE_1__* cbs; } ;
typedef TYPE_3__ input_preparser_req_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;
struct TYPE_4__ {int (* on_subtree_added ) (int ,int *,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(input_item_t *VAR_0, input_item_node_t *VAR_1,
                                 void *VAR_2)
{
    FUNC_0(VAR_0);
    input_preparser_task_t* VAR_3 = VAR_2;
    input_preparser_req_t *VAR_4 = VAR_3->req;

    if (VAR_4->cbs && VAR_4->cbs->on_subtree_added)
        VAR_4->cbs->on_subtree_added(VAR_4->item, VAR_1, VAR_4->userdata);
}
