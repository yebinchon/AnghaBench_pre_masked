
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int en50221_capmt_info_t ;
struct TYPE_3__ {int * cam; } ;
typedef TYPE_1__ dvb_device_t ;


 int FUNC_0 (int *,int *) ;

bool FUNC_1 (dvb_device_t *VAR_0, en50221_capmt_info_t *VAR_1)
{
    if (VAR_0->cam != ((void*)0))
    {
        FUNC_0 (VAR_0->cam, VAR_1);
        return 1;
    }
    return 0;
}
