
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_file_info_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,int ,int ,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(char *VAR_6, ngx_cycle_t *VAR_7)
{
    ngx_file_info_t VAR_8;
    char VAR_9[1024];
    char *VAR_10;

    for (VAR_10 = VAR_6; (VAR_10 = FUNC_5(VAR_10, '/')); VAR_10++)
    {
        if (VAR_10 == VAR_6) {
            continue;
        }

        FUNC_4(VAR_9, VAR_6, VAR_10 - VAR_6);
        VAR_9[VAR_10-VAR_6] = '\0';

        if (FUNC_2(VAR_9, &VAR_8) < 0) {
            if (VAR_4 != VAR_1) {
                FUNC_3(VAR_2, VAR_7->log, VAR_5,
                              "stat [%s] failed", VAR_9);
                FUNC_0(2);

            } else {
                if ((FUNC_1(VAR_9, VAR_3) < 0) && (VAR_4 != VAR_0)) {
                    FUNC_3(VAR_2, VAR_7->log, VAR_5,
                                  "mkdir [%s] failed", VAR_9);
                    FUNC_0(2);
                }
            }
        }
    }
}
