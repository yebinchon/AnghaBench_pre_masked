
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void) {
        int VAR_1;

        if (VAR_0)
                return 0;

        VAR_1 = FUNC_0(&VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        VAR_1 = FUNC_1(VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        FUNC_2("Created link configuration context.");
        return 0;
}
