
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ processorOutput; scalar_t__ processorInput; scalar_t__ context; scalar_t__* texture; scalar_t__* renderSrc; } ;
typedef TYPE_1__ picture_sys_d3d11_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(picture_sys_d3d11_t *VAR_1)
{
    for (int VAR_2=0; VAR_2<VAR_0; VAR_2++) {
        if (VAR_1->renderSrc[VAR_2])
            FUNC_1(VAR_1->renderSrc[VAR_2]);
        if (VAR_1->texture[VAR_2])
            FUNC_2(VAR_1->texture[VAR_2]);
    }
    if (VAR_1->context)
        FUNC_0(VAR_1->context);
    if (VAR_1->processorInput)
        FUNC_3(VAR_1->processorInput);
    if (VAR_1->processorOutput)
        FUNC_4(VAR_1->processorOutput);
}
