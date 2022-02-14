
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int enabled; scalar_t__ threshold_bytes; } ;
typedef TYPE_1__ JournalCompressOptions ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(
                const char* VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                int VAR_8,
                const char *VAR_9,
                void *VAR_10,
                void *VAR_11) {

        JournalCompressOptions* VAR_12 = VAR_10;
        int VAR_13;

        if (FUNC_0(VAR_9)) {
                VAR_12->enabled = 1;
                VAR_12->threshold_bytes = (uint64_t) -1;
        } else if (FUNC_4(VAR_9, "1")) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, 0,
                           "Compress= ambiguously specified as 1, enabling compression with default threshold");
                VAR_12->enabled = 1;
        } else if (FUNC_4(VAR_9, "0")) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, 0,
                           "Compress= ambiguously specified as 0, disabling compression");
                VAR_12->enabled = 0;
        } else {
                VAR_13 = FUNC_2(VAR_9);
                if (VAR_13 < 0) {
                        VAR_13 = FUNC_3(VAR_9, 1024, &VAR_12->threshold_bytes);
                        if (VAR_13 < 0)
                                FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4, VAR_13,
                                           "Failed to parse Compress= value, ignoring: %s", VAR_9);
                        else
                                VAR_12->enabled = 1;
                } else
                        VAR_12->enabled = VAR_13;
        }

        return 0;
}
