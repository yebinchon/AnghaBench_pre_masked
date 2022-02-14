
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef scalar_t__ DeviceAction ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;

bool FUNC_2(sd_device *VAR_0, DeviceAction VAR_1) {
        DeviceAction VAR_2;

        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0, &VAR_2) < 0)
                return 0;

        return VAR_2 == VAR_1;
}
