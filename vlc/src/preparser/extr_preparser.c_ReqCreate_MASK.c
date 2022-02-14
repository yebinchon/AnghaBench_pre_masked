
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rc; void* userdata; int const* cbs; int options; int * item; } ;
typedef TYPE_1__ input_preparser_req_t ;
typedef int input_preparser_callbacks_t ;
typedef int input_item_t ;
typedef int input_item_meta_request_option_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static input_preparser_req_t *FUNC_4(input_item_t *VAR_0,
                                        input_item_meta_request_option_t VAR_1,
                                        const input_preparser_callbacks_t *VAR_2,
                                        void *VAR_3)
{
    input_preparser_req_t *VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (FUNC_2(!VAR_4))
        return ((void*)0);

    VAR_4->item = VAR_0;
    VAR_4->options = VAR_1;
    VAR_4->cbs = VAR_2;
    VAR_4->userdata = VAR_3;
    FUNC_3(&VAR_4->rc);

    FUNC_0(VAR_0);

    return VAR_4;
}
