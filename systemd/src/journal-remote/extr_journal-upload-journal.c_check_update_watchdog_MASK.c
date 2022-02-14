
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_3__ {int watchdog_usec; int watchdog_timestamp; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(Uploader *VAR_1) {
        usec_t VAR_2;
        usec_t VAR_3;

        if (VAR_1->watchdog_usec <= 0)
                return;

        VAR_2 = FUNC_1(VAR_0);
        VAR_3 = FUNC_3(VAR_2, VAR_1->watchdog_timestamp);
        if (VAR_3 > VAR_1->watchdog_usec / 2) {
                FUNC_0("Update watchdog timer");
                FUNC_2(0, "WATCHDOG=1");
                VAR_1->watchdog_timestamp = VAR_2;
        }
}
