
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_2__ {scalar_t__ uid_range; void* uid_shift; void* userns_mode; } ;
typedef TYPE_1__ Settings ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,scalar_t__*) ;
 int FUNC_5 (char const*,scalar_t__*) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char const*,int) ;

int FUNC_9(
                const char *VAR_5,
                const char *VAR_6,
                unsigned VAR_7,
                const char *VAR_8,
                unsigned VAR_9,
                const char *VAR_10,
                int VAR_11,
                const char *VAR_12,
                void *VAR_13,
                void *VAR_14) {

        Settings *VAR_15 = VAR_13;
        int VAR_16;

        FUNC_1(VAR_6);
        FUNC_1(VAR_10);
        FUNC_1(VAR_12);

        VAR_16 = FUNC_3(VAR_12);
        if (VAR_16 == 0) {

                VAR_15->userns_mode = VAR_3;
                VAR_15->uid_shift = VAR_1;
                VAR_15->uid_range = FUNC_0(0x10000);
        } else if (VAR_16 > 0) {

                VAR_15->userns_mode = VAR_2;
                VAR_15->uid_shift = VAR_1;
                VAR_15->uid_range = FUNC_0(0x10000);
        } else if (FUNC_7(VAR_12, "pick")) {

                VAR_15->userns_mode = VAR_4;
                VAR_15->uid_shift = VAR_1;
                VAR_15->uid_range = FUNC_0(0x10000);
        } else {
                const char *VAR_17, *VAR_18;
                uid_t VAR_19, VAR_20;



                VAR_17 = FUNC_6(VAR_12, ':');
                if (VAR_17) {
                        VAR_18 = FUNC_8(VAR_12, VAR_17 - VAR_12);
                        VAR_17++;

                        VAR_16 = FUNC_5(VAR_17, &VAR_20);
                        if (VAR_16 < 0 || VAR_20 <= 0) {
                                FUNC_2(VAR_5, VAR_0, VAR_6, VAR_7, VAR_16, "UID/GID range invalid, ignoring: %s", VAR_17);
                                return 0;
                        }
                } else {
                        VAR_18 = VAR_12;
                        VAR_20 = FUNC_0(0x10000);
                }

                VAR_16 = FUNC_4(VAR_18, &VAR_19);
                if (VAR_16 < 0) {
                        FUNC_2(VAR_5, VAR_0, VAR_6, VAR_7, VAR_16, "UID/GID shift invalid, ignoring: %s", VAR_17);
                        return 0;
                }

                VAR_15->userns_mode = VAR_2;
                VAR_15->uid_shift = VAR_19;
                VAR_15->uid_range = VAR_20;
        }

        return 0;
}
