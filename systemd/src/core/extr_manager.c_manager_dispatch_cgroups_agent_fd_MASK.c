
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t ssize_t ;
typedef int sd_event_source ;
typedef int buf ;
typedef int Manager ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char*,int ,size_t) ;
 size_t FUNC_5 (int,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_2, int VAR_3, uint32_t VAR_4, void *VAR_5) {
        Manager *VAR_6 = VAR_5;
        char VAR_7[VAR_0];
        ssize_t VAR_8;

        VAR_8 = FUNC_5(VAR_3, VAR_7, sizeof(VAR_7), 0);
        if (VAR_8 < 0)
                return FUNC_2(VAR_1, "Failed to read cgroups agent message: %m");
        if (VAR_8 == 0) {
                FUNC_1("Got zero-length cgroups agent message, ignoring.");
                return 0;
        }
        if ((size_t) VAR_8 >= sizeof(VAR_7)) {
                FUNC_1("Got overly long cgroups agent message, ignoring.");
                return 0;
        }

        if (FUNC_4(VAR_7, 0, VAR_8)) {
                FUNC_1("Got cgroups agent message with embedded NUL byte, ignoring.");
                return 0;
        }
        VAR_7[VAR_8] = 0;

        FUNC_3(VAR_6, VAR_7);
        (void) FUNC_0(VAR_6, VAR_7);

        return 0;
}
