
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parser; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;
typedef int input_preparser_callbacks_t ;
struct TYPE_7__ {int i_preparse_depth; int lock; } ;
typedef TYPE_2__ input_item_t ;
typedef int input_item_meta_request_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,int,int const*,void*,int,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(libvlc_int_t *VAR_2, input_item_t *VAR_3,
                           input_item_meta_request_option_t VAR_4,
                           const input_preparser_callbacks_t *VAR_5,
                           void *VAR_6,
                           int VAR_7, void *VAR_8)
{
    libvlc_priv_t *VAR_9 = FUNC_1(VAR_2);
    FUNC_0(VAR_4 & VAR_0);

    if (FUNC_2(VAR_9->parser == ((void*)0)))
        return VAR_1;

    FUNC_4( &VAR_3->lock );
    if( VAR_3->i_preparse_depth == 0 )
        VAR_3->i_preparse_depth = 1;
    FUNC_5( &VAR_3->lock );

    return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
