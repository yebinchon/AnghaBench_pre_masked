
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int input_item_t ;
struct TYPE_8__ {scalar_t__ input; void* userdata; TYPE_2__ const* cbs; int state; } ;
typedef TYPE_1__ input_item_parser_id_t ;
struct TYPE_9__ {scalar_t__ on_ended; } ;
typedef TYPE_2__ input_item_parser_cbs_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int) ;

input_item_parser_id_t *
FUNC_6(input_item_t *VAR_2, vlc_object_t *VAR_3,
                 const input_item_parser_cbs_t *VAR_4, void *VAR_5)
{
    FUNC_0(VAR_4 && VAR_4->on_ended);
    input_item_parser_id_t *VAR_6 = FUNC_5(sizeof(*VAR_6));
    if (!VAR_6)
        return ((void*)0);

    VAR_6->state = VAR_0;
    VAR_6->cbs = VAR_4;
    VAR_6->userdata = VAR_5;
    VAR_6->input = FUNC_3(VAR_3, VAR_1,
                                          VAR_6, VAR_2);
    if (!VAR_6->input || FUNC_4(VAR_6->input))
    {
        if (VAR_6->input)
            FUNC_2(VAR_6->input);
        FUNC_1(VAR_6);
        return ((void*)0);
    }
    return VAR_6;
}
