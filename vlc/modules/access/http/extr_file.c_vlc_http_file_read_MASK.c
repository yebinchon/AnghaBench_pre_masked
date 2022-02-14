
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_http_resource {int * response; } ;
struct vlc_http_file {scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ i_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct vlc_http_resource*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct vlc_http_resource*) ;

block_t *FUNC_4(struct vlc_http_resource *VAR_1)
{
    struct vlc_http_file *VAR_2 = (struct vlc_http_file *)VAR_1;
    block_t *VAR_3 = FUNC_3(VAR_1);

    if (VAR_3 == VAR_0)
    {
        if (VAR_1->response != ((void*)0)
         && FUNC_1(VAR_1->response)
         && VAR_2->offset < FUNC_2(VAR_1->response)
         && FUNC_0(VAR_1, VAR_2->offset) == 0)
            VAR_3 = FUNC_3(VAR_1);

        if (VAR_3 == VAR_0)
            return ((void*)0);
    }

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_2->offset += VAR_3->i_buffer;
    return VAR_3;
}
