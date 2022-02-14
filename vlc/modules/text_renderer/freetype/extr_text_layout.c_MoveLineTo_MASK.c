
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ yMax; scalar_t__ xMin; } ;
struct TYPE_6__ {TYPE_1__ bbox; } ;
typedef TYPE_2__ line_desc_t ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1( line_desc_t *VAR_0, int VAR_1, int VAR_2 )
{
    FUNC_0( VAR_0, VAR_1 - VAR_0->bbox.xMin,
                       VAR_2 - VAR_0->bbox.yMax );
}
