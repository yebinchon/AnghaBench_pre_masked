
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_7__ {TYPE_2__ scale; void* height; void* width; void* y; void* x; } ;
typedef TYPE_1__ spu_area_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,TYPE_2__) ;
 TYPE_2__ FUNC_1 () ;
 void* FUNC_2 (void*,TYPE_2__) ;

__attribute__((used)) static spu_area_t FUNC_3(spu_area_t VAR_1)
{
    if (VAR_1.scale.w == VAR_0 && VAR_1.scale.h == VAR_0)
        return VAR_1;

    VAR_1.x = FUNC_2(VAR_1.x, VAR_1.scale);
    VAR_1.y = FUNC_0(VAR_1.y, VAR_1.scale);
    VAR_1.width = FUNC_2(VAR_1.width, VAR_1.scale);
    VAR_1.height = FUNC_0(VAR_1.height, VAR_1.scale);

    VAR_1.scale = FUNC_1();
    return VAR_1;
}
