
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fetcher; } ;
typedef TYPE_1__ input_preparser_t ;
typedef int input_item_t ;
typedef int input_item_meta_request_option_t ;
typedef int input_fetcher_callbacks_t ;


 int FUNC_0 (scalar_t__,int *,int ,int const*,void*) ;

void FUNC_1( input_preparser_t *VAR_0,
    input_item_t *VAR_1, input_item_meta_request_option_t VAR_2,
    const input_fetcher_callbacks_t *VAR_3, void *VAR_4 )
{
    if( VAR_0->fetcher )
        FUNC_0( VAR_0->fetcher, VAR_1, VAR_2,
                            VAR_3, VAR_4 );
}
