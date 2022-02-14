
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int default_memory_low_set; int default_memory_min_set; int memory_min_set; int memory_low_set; scalar_t__ memory_limit; scalar_t__ memory_swap_max; scalar_t__ memory_max; scalar_t__ memory_high; scalar_t__ memory_low; scalar_t__ memory_min; void* default_memory_min; void* default_memory_low; } ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*,char*,char*,char*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int,unsigned int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

int FUNC_7(
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

        CGroupContext *VAR_15 = VAR_13;
        uint64_t VAR_16 = VAR_0;
        int VAR_17;

        if (!FUNC_1(VAR_12) && !FUNC_6(VAR_12, "infinity")) {

                VAR_17 = FUNC_3(VAR_12);
                if (VAR_17 < 0) {
                        VAR_17 = FUNC_4(VAR_12, 1024, &VAR_16);
                        if (VAR_17 < 0) {
                                FUNC_2(VAR_5, VAR_3, VAR_6, VAR_7, VAR_17, "Invalid memory limit '%s', ignoring: %m", VAR_12);
                                return 0;
                        }
                } else
                        VAR_16 = FUNC_5(VAR_17, 1000U);

                if (VAR_16 >= VAR_4 ||
                    (VAR_16 <= 0 && !FUNC_0(VAR_10, "MemorySwapMax", "MemoryLow", "MemoryMin", "DefaultMemoryLow", "DefaultMemoryMin"))) {
                        FUNC_2(VAR_5, VAR_3, VAR_6, VAR_7, 0, "Memory limit '%s' out of range, ignoring.", VAR_12);
                        return 0;
                }
        }

        if (FUNC_6(VAR_10, "DefaultMemoryLow")) {
                VAR_15->default_memory_low_set = 1;
                if (FUNC_1(VAR_12))
                        VAR_15->default_memory_low = VAR_1;
                else
                        VAR_15->default_memory_low = VAR_16;
        } else if (FUNC_6(VAR_10, "DefaultMemoryMin")) {
                VAR_15->default_memory_min_set = 1;
                if (FUNC_1(VAR_12))
                        VAR_15->default_memory_min = VAR_1;
                else
                        VAR_15->default_memory_min = VAR_16;
        } else if (FUNC_6(VAR_10, "MemoryMin")) {
                VAR_15->memory_min = VAR_16;
                VAR_15->memory_min_set = 1;
        } else if (FUNC_6(VAR_10, "MemoryLow")) {
                VAR_15->memory_low = VAR_16;
                VAR_15->memory_low_set = 1;
        } else if (FUNC_6(VAR_10, "MemoryHigh"))
                VAR_15->memory_high = VAR_16;
        else if (FUNC_6(VAR_10, "MemoryMax"))
                VAR_15->memory_max = VAR_16;
        else if (FUNC_6(VAR_10, "MemorySwapMax"))
                VAR_15->memory_swap_max = VAR_16;
        else if (FUNC_6(VAR_10, "MemoryLimit"))
                VAR_15->memory_limit = VAR_16;
        else
                return -VAR_2;

        return 0;
}
