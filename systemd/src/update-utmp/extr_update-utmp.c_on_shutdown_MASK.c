
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ audit_fd; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,char*,char*,int *,int *,int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(Context *VAR_3) {
        int VAR_4 = 0, VAR_5;

        FUNC_0(VAR_3);
        VAR_5 = FUNC_3();
        if (VAR_5 < 0) {
                FUNC_2(VAR_5, "Failed to write utmp record: %m");
                VAR_4 = VAR_5;
        }

        return VAR_4;
}
