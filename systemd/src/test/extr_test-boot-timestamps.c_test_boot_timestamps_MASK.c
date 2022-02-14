
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int s ;
struct TYPE_5__ {int realtime; int monotonic; } ;
typedef TYPE_1__ dual_timestamp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,int,int ,int ) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(void) {
        char VAR_7[FUNC_0(VAR_3, VAR_4)];
        dual_timestamp VAR_8, VAR_9, VAR_10;
        int VAR_11;

        FUNC_2(&VAR_10, 0);

        VAR_11 = FUNC_1(((void*)0), &VAR_8, &VAR_9);
        if (VAR_11 < 0) {
                bool VAR_12 = VAR_11 == -VAR_1 || (FUNC_5() != 0 && VAR_11 == -VAR_0) || VAR_11 == -VAR_2;

                FUNC_6(VAR_12 ? VAR_5 : VAR_6, VAR_11, "Failed to read variables: %m");
                return VAR_12 ? 0 : VAR_11;
        }

        FUNC_7("Firmware began %s before kernel.", FUNC_3(VAR_7, sizeof(VAR_7), VAR_8.monotonic, 0));
        FUNC_7("Loader began %s before kernel.", FUNC_3(VAR_7, sizeof(VAR_7), VAR_9.monotonic, 0));
        FUNC_7("Firmware began %s.", FUNC_4(VAR_7, sizeof(VAR_7), VAR_8.realtime));
        FUNC_7("Loader began %s.", FUNC_4(VAR_7, sizeof(VAR_7), VAR_9.realtime));
        FUNC_7("Kernel began %s.", FUNC_4(VAR_7, sizeof(VAR_7), VAR_10.realtime));
        return 1;
}
