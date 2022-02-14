
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int network_veth_extra; } ;
typedef TYPE_1__ Settings ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (int *,char const*) ;

int FUNC_3(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        Settings *VAR_11 = VAR_9;
        int VAR_12;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);

        VAR_12 = FUNC_2(&VAR_11->network_veth_extra, VAR_8);
        if (VAR_12 < 0) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_12, "Invalid extra virtual Ethernet link specification %s: %m", VAR_8);
                return 0;
        }

        return 0;
}
