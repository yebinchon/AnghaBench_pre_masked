
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y1; scalar_t__ y0; scalar_t__ x1; scalar_t__ x0; } ;
typedef TYPE_1__ rectangle_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_2( const rectangle_t *VAR_0, const rectangle_t *VAR_1, int VAR_2, int VAR_3 )
{
    return FUNC_0(VAR_0->x0-VAR_2, VAR_1->x0) < FUNC_1( VAR_0->x1+VAR_2, VAR_1->x1 ) &&
            FUNC_0(VAR_0->y0-VAR_3, VAR_1->y0) < FUNC_1( VAR_0->y1+VAR_3, VAR_1->y1 );
}
