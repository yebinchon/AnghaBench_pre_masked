
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_meta_type_t ;
struct TYPE_3__ {int p_meta; int lock; } ;
typedef TYPE_1__ input_item_t ;


 char const* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

const char *FUNC_2(input_item_t *VAR_0,
                                     vlc_meta_type_t VAR_1)
{
    FUNC_1(&VAR_0->lock);

    if (!VAR_0->p_meta)
        return ((void*)0);

    return FUNC_0(VAR_0->p_meta, VAR_1);
}
