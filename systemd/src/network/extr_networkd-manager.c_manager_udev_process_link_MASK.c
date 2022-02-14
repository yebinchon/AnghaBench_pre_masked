
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device_monitor ;
typedef int sd_device ;
typedef int Manager ;
typedef int Link ;
typedef int DeviceAction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int,char*,int ) ;
 int FUNC_11 (int *,int*) ;

__attribute__((used)) static int FUNC_12(sd_device_monitor *VAR_4, sd_device *VAR_5, void *VAR_6) {
        Manager *VAR_7 = VAR_6;
        DeviceAction VAR_8;
        Link *VAR_9 = ((void*)0);
        int VAR_10, VAR_11;

        FUNC_1(VAR_7);
        FUNC_1(VAR_5);

        VAR_10 = FUNC_3(VAR_5, &VAR_8);
        if (VAR_10 < 0) {
                FUNC_9(VAR_5, VAR_10, "Failed to get udev action, ignoring device: %m");
                return 0;
        }

        if (!FUNC_0(VAR_8, VAR_0, VAR_1, VAR_2)) {
                FUNC_8(VAR_5, "Ignoring udev %s event for device.", FUNC_2(VAR_8));
                return 0;
        }

        VAR_10 = FUNC_11(VAR_5, &VAR_11);
        if (VAR_10 < 0) {
                FUNC_9(VAR_5, VAR_10, "Ignoring udev ADD event for device without ifindex or with invalid ifindex: %m");
                return 0;
        }

        VAR_10 = FUNC_4(VAR_5);
        if (VAR_10 < 0) {
                FUNC_10(VAR_5, VAR_10, "Failed to determine the device is renamed or not, ignoring '%s' uevent: %m",
                                       FUNC_2(VAR_8));
                return 0;
        }
        if (VAR_10 > 0) {
                FUNC_8(VAR_5, "Interface is under renaming, wait for the interface to be renamed: %m");
                return 0;
        }

        VAR_10 = FUNC_5(VAR_7, VAR_11, &VAR_9);
        if (VAR_10 < 0) {
                if (VAR_10 != -VAR_3)
                        FUNC_7(VAR_10, "Failed to get link from ifindex %i, ignoring: %m", VAR_11);
                return 0;
        }

        (void) FUNC_6(VAR_9, VAR_5);

        return 0;
}
