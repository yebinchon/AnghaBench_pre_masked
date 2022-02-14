
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context_mutex; scalar_t__ owner; int * d3ddevice; int * d3dcontext; } ;
typedef TYPE_1__ d3d11_device_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;

void FUNC_4(d3d11_device_t *VAR_1)
{
    if (VAR_1->d3dcontext)
    {
        FUNC_1(VAR_1->d3dcontext);
        FUNC_2(VAR_1->d3dcontext);
        VAR_1->d3dcontext = ((void*)0);
    }
    if (VAR_1->d3ddevice)
    {
        FUNC_3(VAR_1->d3ddevice);
        VAR_1->d3ddevice = ((void*)0);
    }







}
