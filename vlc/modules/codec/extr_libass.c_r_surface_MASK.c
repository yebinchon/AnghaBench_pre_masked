
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x0; int y1; int y0; } ;
typedef TYPE_1__ rectangle_t ;



__attribute__((used)) static int FUNC_0( const rectangle_t *VAR_0 )
{
    return (VAR_0->x1-VAR_0->x0) * (VAR_0->y1-VAR_0->y0);
}
