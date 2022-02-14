
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* path; int metrics; } ;
struct TYPE_8__ {int storage; int seal; TYPE_4__ runtime_storage; scalar_t__ runtime_journal; scalar_t__ system_journal; TYPE_4__ system_storage; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (TYPE_1__*,int,char const*,int,int,int *,scalar_t__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 char* FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(Server *VAR_7, bool VAR_8, bool VAR_9) {
        const char *VAR_10;
        int VAR_11 = 0;

        if (!VAR_7->system_journal &&
            FUNC_0(VAR_7->storage, VAR_6, VAR_4) &&
            (VAR_8 || FUNC_2()) &&
            !VAR_9) {







                if (VAR_7->storage == VAR_6)
                        (void) FUNC_6("/var/log/journal/", 0755);

                (void) FUNC_5(VAR_7->system_storage.path, 0755);

                VAR_10 = FUNC_12(VAR_7->system_storage.path, "/system.journal");
                VAR_11 = FUNC_8(VAR_7, 1, VAR_10, VAR_3|VAR_2, VAR_7->seal, &VAR_7->system_storage.metrics, &VAR_7->system_journal);
                if (VAR_11 >= 0) {
                        FUNC_10(VAR_7->system_journal, 0);
                        (void) FUNC_1(VAR_7, &VAR_7->system_storage);
                        FUNC_9(&VAR_7->system_storage);
                } else {
                        if (!FUNC_0(VAR_11, -VAR_0, -VAR_1))
                                FUNC_4(VAR_11, "Failed to open system journal: %m");

                        VAR_11 = 0;
                }
                if (!VAR_8)
                        (void) FUNC_11(VAR_7, 1);
        }

        if (!VAR_7->runtime_journal &&
            (VAR_7->storage != VAR_5)) {

                VAR_10 = FUNC_12(VAR_7->runtime_storage.path, "/system.journal");

                if (VAR_7->system_journal && !VAR_9) {





                        VAR_11 = FUNC_8(VAR_7, 0, VAR_10, VAR_3, 0, &VAR_7->runtime_storage.metrics, &VAR_7->runtime_journal);
                        if (VAR_11 < 0) {
                                if (VAR_11 != -VAR_0)
                                        FUNC_4(VAR_11, "Failed to open runtime journal: %m");

                                VAR_11 = 0;
                        }

                } else {




                        (void) FUNC_5("/run/log", 0755);
                        (void) FUNC_5("/run/log/journal", 0755);
                        (void) FUNC_7(VAR_10, 0750);

                        VAR_11 = FUNC_8(VAR_7, 1, VAR_10, VAR_3|VAR_2, 0, &VAR_7->runtime_storage.metrics, &VAR_7->runtime_journal);
                        if (VAR_11 < 0)
                                return FUNC_3(VAR_11, "Failed to open runtime journal: %m");
                }

                if (VAR_7->runtime_journal) {
                        FUNC_10(VAR_7->runtime_journal, 0);
                        (void) FUNC_1(VAR_7, &VAR_7->runtime_storage);
                        FUNC_9(&VAR_7->runtime_storage);
                }
        }

        return VAR_11;
}
