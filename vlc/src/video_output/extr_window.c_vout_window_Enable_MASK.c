
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vout_window_t ;
typedef int vout_window_cfg_t ;
struct TYPE_6__ {int (* enable ) (TYPE_2__*,int const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*,int) ;

int FUNC_2(vout_window_t *VAR_1,
                       const vout_window_cfg_t *restrict VAR_2)
{
    if (VAR_1->ops->enable != ((void*)0)) {
        int VAR_3 = VAR_1->ops->enable(VAR_1, VAR_2);
        if (VAR_3)
            return VAR_3;
    }

    FUNC_1(VAR_1, 1);
    return VAR_0;
}
