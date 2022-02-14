
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ height; scalar_t__ y; scalar_t__ width; scalar_t__ x; } ;
typedef TYPE_1__ spu_area_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_1__ FUNC_2 (TYPE_1__) ;

__attribute__((used)) static bool FUNC_3(spu_area_t VAR_0, spu_area_t VAR_1)
{
    VAR_0 = FUNC_2(VAR_0);
    VAR_1 = FUNC_2(VAR_1);

    return FUNC_0(VAR_0.x, VAR_1.x) < FUNC_1(VAR_0.x + VAR_0.width , VAR_1.x + VAR_1.width ) &&
           FUNC_0(VAR_0.y, VAR_1.y) < FUNC_1(VAR_0.y + VAR_0.height, VAR_1.y + VAR_1.height);
}
