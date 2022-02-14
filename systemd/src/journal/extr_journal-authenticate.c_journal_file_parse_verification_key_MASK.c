
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {size_t fsprg_seed_size; unsigned long long fss_start_usec; unsigned long long fss_interval_usec; scalar_t__* fsprg_seed; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (size_t) ;
 int FUNC_2 (char const*,char*,unsigned long long*,unsigned long long*) ;
 int FUNC_3 (char const) ;

int FUNC_4(JournalFile *VAR_3, const char *VAR_4) {
        uint8_t *VAR_5;
        size_t VAR_6, VAR_7;
        const char *VAR_8;
        int VAR_9;
        unsigned long long VAR_10, VAR_11;

        VAR_6 = VAR_2;
        VAR_5 = FUNC_1(VAR_6);
        if (!VAR_5)
                return -VAR_1;

        VAR_8 = VAR_4;
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
                int VAR_12, VAR_13;

                while (*VAR_8 == '-')
                        VAR_8++;

                VAR_12 = FUNC_3(*VAR_8);
                if (VAR_12 < 0) {
                        FUNC_0(VAR_5);
                        return -VAR_0;
                }
                VAR_8++;
                VAR_13 = FUNC_3(*VAR_8);
                if (VAR_13 < 0) {
                        FUNC_0(VAR_5);
                        return -VAR_0;
                }
                VAR_8++;

                VAR_5[VAR_7] = (uint8_t) (VAR_12 * 16 + VAR_13);
        }

        if (*VAR_8 != '/') {
                FUNC_0(VAR_5);
                return -VAR_0;
        }
        VAR_8++;

        VAR_9 = FUNC_2(VAR_8, "%llx-%llx", &VAR_10, &VAR_11);
        if (VAR_9 != 2) {
                FUNC_0(VAR_5);
                return -VAR_0;
        }

        VAR_3->fsprg_seed = VAR_5;
        VAR_3->fsprg_seed_size = VAR_6;

        VAR_3->fss_start_usec = VAR_10 * VAR_11;
        VAR_3->fss_interval_usec = VAR_11;

        return 0;
}
