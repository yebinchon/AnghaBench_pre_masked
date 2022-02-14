
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_3__ {int name; int rtnl; int * dev; } ;
typedef TYPE_1__ UdevEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int,char const*,int ) ;
 int FUNC_4 (int *,int,char*,...) ;
 int FUNC_5 (int *,int,char*,...) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,char const**) ;
 scalar_t__ FUNC_9 (int ,char const*) ;

__attribute__((used)) static int FUNC_10(UdevEvent *VAR_2) {
        sd_device *VAR_3 = VAR_2->dev;
        const char *VAR_4;
        int VAR_5, VAR_6;

        if (!VAR_2->name)
                return 0;

        VAR_6 = FUNC_8(VAR_3, &VAR_4);
        if (VAR_6 < 0)
                return FUNC_4(VAR_3, VAR_6, "Failed to get sysname: %m");

        if (FUNC_9(VAR_2->name, VAR_4))
                return 0;

        if (!FUNC_1(VAR_3, VAR_0))
                return 0;

        VAR_6 = FUNC_7(VAR_3, &VAR_5);
        if (VAR_6 == -VAR_1)
                return 0;
        if (VAR_6 < 0)
                return FUNC_4(VAR_3, VAR_6, "Failed to get ifindex: %m");

        VAR_6 = FUNC_6(&VAR_2->rtnl, VAR_5, VAR_2->name);
        if (VAR_6 < 0)
                return FUNC_4(VAR_3, VAR_6, "Failed to rename network interface %i from '%s' to '%s': %m",
                                              VAR_5, VAR_4, VAR_2->name);


        VAR_6 = FUNC_0(VAR_3, "ID_RENAMING", "1");
        if (VAR_6 < 0)
                return FUNC_5(VAR_3, VAR_6, "Failed to add 'ID_RENAMING' property: %m");

        VAR_6 = FUNC_2(VAR_3, VAR_2->name);
        if (VAR_6 < 0)
                return FUNC_5(VAR_3, VAR_6, "Failed to update properties with new name '%s': %m", VAR_2->name);

        FUNC_3(VAR_3, "Network interface %i is renamed from '%s' to '%s'", VAR_5, VAR_4, VAR_2->name);

        return 1;
}
