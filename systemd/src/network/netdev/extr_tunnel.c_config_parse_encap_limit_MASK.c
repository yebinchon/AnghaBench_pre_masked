
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encap_limit; int flags; } ;
typedef TYPE_1__ Tunnel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,...) ;
 int FUNC_2 (char const*,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(const char* VAR_2,
                             const char *VAR_3,
                             unsigned VAR_4,
                             const char *VAR_5,
                             unsigned VAR_6,
                             const char *VAR_7,
                             int VAR_8,
                             const char *VAR_9,
                             void *VAR_10,
                             void *VAR_11) {
        Tunnel *VAR_12 = VAR_11;
        int VAR_13 = 0;
        int VAR_14;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);

        if (FUNC_3(VAR_9, "none"))
                VAR_12->flags |= VAR_0;
        else {
                VAR_14 = FUNC_2(VAR_9, &VAR_13);
                if (VAR_14 < 0) {
                        FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14, "Failed to parse Tunnel Encapsulation Limit option, ignoring: %s", VAR_9);
                        return 0;
                }

                if (VAR_13 > 255 || VAR_13 < 0)
                        FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, 0, "Invalid Tunnel Encapsulation value, ignoring: %d", VAR_13);
                else {
                        VAR_12->encap_limit = VAR_13;
                        VAR_12->flags &= ~VAR_0;
                }
        }

        return 0;
}
