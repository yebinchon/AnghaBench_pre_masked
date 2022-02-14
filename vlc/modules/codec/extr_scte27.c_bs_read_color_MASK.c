
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int alpha; int v; int u; } ;
typedef TYPE_1__ scte27_color_t ;
typedef int bs_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static scte27_color_t FUNC_2(bs_t *VAR_0)
{
    scte27_color_t VAR_1;


    VAR_1.y = FUNC_0(VAR_0, 5) << 3;
    VAR_1.alpha = FUNC_1(VAR_0) ? 0xff : 0x80;
    VAR_1.v = FUNC_0(VAR_0, 5) << 3;
    VAR_1.u = FUNC_0(VAR_0, 5) << 3;

    return VAR_1;
}
