
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parser; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;
typedef int input_item_t ;
typedef int input_item_meta_request_option_t ;
typedef int input_fetcher_callbacks_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int const*,void*) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(libvlc_int_t *VAR_3, input_item_t *VAR_4,
                      input_item_meta_request_option_t VAR_5,
                      const input_fetcher_callbacks_t *VAR_6,
                      void *VAR_7)
{
    libvlc_priv_t *VAR_8 = FUNC_2(VAR_3);
    FUNC_0(VAR_5 & VAR_0);

    if (FUNC_3(VAR_8->parser == ((void*)0)))
        return VAR_1;

    FUNC_1(VAR_8->parser, VAR_4, VAR_5,
                                 VAR_6, VAR_7);
    return VAR_2;
}
