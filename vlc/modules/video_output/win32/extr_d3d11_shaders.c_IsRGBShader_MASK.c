
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* resourceFormat; scalar_t__ formatTexture; } ;
typedef TYPE_1__ d3d_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool FUNC_0(const d3d_format_t *VAR_3)
{
    return VAR_3->resourceFormat[0] != VAR_1 &&
           VAR_3->resourceFormat[0] != VAR_0 &&
           VAR_3->formatTexture != VAR_2;
}
