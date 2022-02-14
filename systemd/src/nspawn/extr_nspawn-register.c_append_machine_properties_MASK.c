
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ read_only; int source; } ;
typedef TYPE_1__ CustomMount ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *,char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_6(
                sd_bus_message *VAR_2,
                CustomMount *VAR_3,
                unsigned VAR_4,
                int VAR_5) {

        unsigned VAR_6;
        int VAR_7;

        FUNC_0(VAR_2);

        VAR_7 = FUNC_5(VAR_2, "(sv)", "DevicePolicy", "s", "closed");
        if (VAR_7 < 0)
                return FUNC_1(VAR_7);



        VAR_7 = FUNC_5(VAR_2, "(sv)", "DeviceAllow", "a(ss)", 2,






                                  "/dev/net/tun", "rwm",





                                  "char-pts", "rw");
        if (VAR_7 < 0)
                return FUNC_1(VAR_7);

        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
                CustomMount *VAR_8 = VAR_3 + VAR_6;

                if (VAR_8->type != VAR_0)
                        continue;

                VAR_7 = FUNC_2(VAR_8->source);
                if (VAR_7 == -VAR_1) {

                        FUNC_3(VAR_7, "Bind mount source %s not found, ignoring: %m", VAR_8->source);
                        continue;
                }
                if (VAR_7 < 0)
                        return FUNC_4(VAR_7, "Failed to stat %s: %m", VAR_8->source);

                if (VAR_7) {
                        VAR_7 = FUNC_5(VAR_2, "(sv)", "DeviceAllow", "a(ss)", 1,
                                                  VAR_8->source, VAR_8->read_only ? "r" : "rw");
                        if (VAR_7 < 0)
                                return FUNC_4(VAR_7, "Failed to append message arguments: %m");
                }
        }

        if (VAR_5 != 0) {
                VAR_7 = FUNC_5(VAR_2, "(sv)", "KillSignal", "i", VAR_5);
                if (VAR_7 < 0)
                        return FUNC_1(VAR_7);

                VAR_7 = FUNC_5(VAR_2, "(sv)", "KillMode", "s", "mixed");
                if (VAR_7 < 0)
                        return FUNC_1(VAR_7);
        }

        return 0;
}
