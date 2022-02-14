
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;
typedef int pthread_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int ,struct udev_device**) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct udev_device*) ;
 struct udev_device* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (char*) ;

int FUNC_6(int VAR_1, char *VAR_2[]) {
        struct udev_device *VAR_3;
        pthread_t VAR_4;

        FUNC_0(FUNC_5("SYSTEMD_MEMPOOL") == 0);

        FUNC_0(VAR_3 = FUNC_4(((void*)0), "/sys/class/net/lo"));

        FUNC_0(FUNC_3(VAR_3));

        FUNC_0(FUNC_1(&VAR_4, ((void*)0), VAR_0, &VAR_3) == 0);
        FUNC_0(FUNC_2(VAR_4, ((void*)0)) == 0);

        FUNC_0(!VAR_3);

        return 0;
}
