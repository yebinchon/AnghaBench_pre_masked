
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void) {


        if (VAR_1)
                return 0;

        if (!VAR_0)
                return 0;

        VAR_1 = FUNC_2("/dev/mapper/root");
        if (!VAR_1)
                return FUNC_1();

        FUNC_0("Using verity root device %s.", VAR_1);

        return 1;
}
