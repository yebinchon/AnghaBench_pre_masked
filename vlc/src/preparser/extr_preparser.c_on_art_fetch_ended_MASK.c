
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int preparse_status; TYPE_3__* req; } ;
typedef TYPE_2__ input_preparser_task_t ;
struct TYPE_8__ {int userdata; int item; TYPE_1__* cbs; } ;
typedef TYPE_3__ input_preparser_req_t ;
typedef int input_item_t ;
struct TYPE_6__ {int (* on_preparse_ended ) (int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(input_item_t *VAR_0, bool VAR_1, void *VAR_2)
{
    FUNC_1(*VAR_0);
    FUNC_1(VAR_1);
    input_preparser_task_t *VAR_3 = VAR_2;
    input_preparser_req_t *VAR_4 = VAR_3->req;

    FUNC_3(VAR_4->item, 1);

    if (VAR_4->cbs && VAR_4->cbs->on_preparse_ended)
        VAR_4->cbs->on_preparse_ended(VAR_4->item, VAR_3->preparse_status, VAR_4->userdata);

    FUNC_0(VAR_4);
    FUNC_2(VAR_3);
}
