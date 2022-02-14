
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frontend; int obj; } ;
typedef TYPE_1__ dvb_device_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (dvb_device_t *VAR_2)
{
    if (VAR_2->frontend != -1)
        return 0;
    int VAR_3 = FUNC_0 (VAR_2, "frontend", VAR_0);
    if (VAR_3 == -1)
    {
        FUNC_1 (VAR_2->obj, "cannot access frontend: %s", FUNC_2(VAR_1));
        return -1;
    }

    VAR_2->frontend = VAR_3;
    return 0;
}
