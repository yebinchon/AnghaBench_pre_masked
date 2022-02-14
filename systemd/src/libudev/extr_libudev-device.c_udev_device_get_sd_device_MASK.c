
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int * device; } ;
typedef int sd_device ;


 int FUNC_0 (struct udev_device*) ;

sd_device *FUNC_1(struct udev_device *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->device;
}
