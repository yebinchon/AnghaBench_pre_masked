
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_2__ {int polkit_registry; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(sd_bus_message *VAR_5, void *VAR_6, sd_bus_error *VAR_7) {
        Manager *VAR_8 = VAR_6;
        uint64_t VAR_9;
        int VAR_10;

        FUNC_1(VAR_5);

        VAR_10 = FUNC_7(VAR_5, "t", &VAR_9);
        if (VAR_10 < 0)
                return VAR_10;
        if (!FUNC_0(VAR_9))
                return FUNC_6(VAR_7, VAR_2, "New limit out of range");

        VAR_10 = FUNC_4(
                        VAR_5,
                        VAR_0,
                        "org.freedesktop.portable1.manage-images",
                        ((void*)0),
                        0,
                        VAR_4,
                        &VAR_8->polkit_registry,
                        VAR_7);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        (void) FUNC_2("/var/lib/portables", 0, VAR_9);

        VAR_10 = FUNC_3("/var/lib/portables", 0, VAR_9);
        if (VAR_10 == -VAR_1)
                return FUNC_6(VAR_7, VAR_3, "Quota is only supported on btrfs.");
        if (VAR_10 < 0)
                return FUNC_5(VAR_7, VAR_10, "Failed to adjust quota limit: %m");

        return FUNC_8(VAR_5, ((void*)0));
}
