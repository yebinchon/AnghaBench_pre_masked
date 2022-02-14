
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x; int width; int y; int height; int scale; } ;
typedef TYPE_1__ spu_area_t ;


 TYPE_1__ FUNC_0 (TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int ) ;

__attribute__((used)) static void FUNC_2(spu_area_t *VAR_0, const spu_area_t *VAR_1)
{
    spu_area_t VAR_2 = FUNC_0(*VAR_0);

    const int VAR_3 = (VAR_2.x + VAR_2.width) - VAR_1->width;
    if (VAR_3 > 0)
        VAR_2.x -= VAR_3;
    if (VAR_2.x < 0)
        VAR_2.x = 0;

    const int VAR_4 = (VAR_2.y + VAR_2.height) - VAR_1->height;
    if (VAR_4 > 0)
        VAR_2.y -= VAR_4;
    if (VAR_2.y < 0)
        VAR_2.y = 0;

    *VAR_0 = FUNC_1(VAR_2, VAR_0->scale);
}
