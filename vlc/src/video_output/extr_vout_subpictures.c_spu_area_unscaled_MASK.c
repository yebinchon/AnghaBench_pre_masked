
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ w; scalar_t__ h; } ;
typedef TYPE_1__ spu_scale_t ;
struct TYPE_11__ {TYPE_1__ scale; void* height; void* width; void* y; void* x; } ;
typedef TYPE_2__ spu_area_t ;


 TYPE_2__ FUNC_0 (TYPE_2__) ;
 void* FUNC_1 (void*,TYPE_1__) ;
 void* FUNC_2 (void*,TYPE_1__) ;

__attribute__((used)) static spu_area_t FUNC_3(spu_area_t VAR_0, spu_scale_t VAR_1)
{
    if (VAR_0.scale.w == VAR_1.w && VAR_0.scale.h == VAR_1.h)
        return VAR_0;

    VAR_0 = FUNC_0(VAR_0);

    VAR_0.x = FUNC_2(VAR_0.x, VAR_1);
    VAR_0.y = FUNC_1(VAR_0.y, VAR_1);
    VAR_0.width = FUNC_2(VAR_0.width, VAR_1);
    VAR_0.height = FUNC_1(VAR_0.height, VAR_1);

    VAR_0.scale = VAR_1;
    return VAR_0;
}
