
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int destination; } ;
typedef TYPE_1__ CustomMount ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void) {
        size_t VAR_8;

        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
                CustomMount *VAR_9 = &VAR_3[VAR_8];

                if (FUNC_2(VAR_9->destination, "/") && VAR_7 != VAR_2) {
                        if (VAR_6)
                                return FUNC_1(FUNC_0(VAR_0),
                                                       "--private-users-chown may not be combined with custom root mounts.");
                        else if (VAR_5 == VAR_1)
                                return FUNC_1(FUNC_0(VAR_0),
                                                       "--private-users with automatic UID shift may not be combined with custom root mounts.");
                }
        }

        return 0;
}
