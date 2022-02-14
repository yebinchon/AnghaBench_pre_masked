
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adjust_params {TYPE_1__* sigma; } ;
struct adjust_data {struct adjust_params params; } ;
struct TYPE_4__ {int value; } ;
typedef TYPE_2__ VAProcFilterParameterBufferColorBalance ;
struct TYPE_3__ {int drv_value; scalar_t__ is_available; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void * VAR_1, void * VAR_2)
{
    struct adjust_data *const VAR_3 = VAR_1;
    struct adjust_params *const VAR_4 = &VAR_3->params;
    VAProcFilterParameterBufferColorBalance *const VAR_5 = VAR_2;

    unsigned int VAR_6 = 0;
    for (unsigned int VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
        if (VAR_4->sigma[VAR_7].is_available)
            VAR_5[VAR_6++].value =
                FUNC_0(&VAR_4->sigma[VAR_7].drv_value);
}
