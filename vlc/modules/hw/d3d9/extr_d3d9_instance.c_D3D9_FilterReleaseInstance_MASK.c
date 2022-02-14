
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dev; } ;
typedef TYPE_1__ d3d9_device_t ;
struct TYPE_6__ {int * dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(d3d9_device_t *VAR_3)
{
    FUNC_2(&VAR_1);
    if (VAR_3->dev && VAR_3->dev == VAR_0.dev)
    {
        FUNC_1(VAR_2 != 0);
        if (--VAR_2 == 0)
            VAR_0.dev = ((void*)0);
    }
    FUNC_0(VAR_3);
    FUNC_3(&VAR_1);
}
