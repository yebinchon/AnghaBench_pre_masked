
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int frontend; } ;
typedef TYPE_1__ dvb_device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;

float FUNC_1 (dvb_device_t *VAR_1)
{
    uint16_t VAR_2;

    if (VAR_1->frontend == -1
     || FUNC_0 (VAR_1->frontend, VAR_0, &VAR_2) < 0)
        return 0.;
    return VAR_2 / 65535.;
}
