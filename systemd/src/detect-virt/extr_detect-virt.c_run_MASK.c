
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(int VAR_3, char *VAR_4[]) {
        int VAR_5;





        FUNC_6(1);
        FUNC_5();
        FUNC_4();

        VAR_5 = FUNC_7(VAR_3, VAR_4);
        if (VAR_5 <= 0)
                return VAR_5;

        switch (VAR_1) {
        case 128:
                VAR_5 = FUNC_2();
                if (VAR_5 < 0)
                        return FUNC_3(VAR_5, "Failed to check for VM: %m");
                break;

        case 130:
                VAR_5 = FUNC_0();
                if (VAR_5 < 0)
                        return FUNC_3(VAR_5, "Failed to check for container: %m");
                break;

        case 131:
                VAR_5 = FUNC_9();
                if (VAR_5 < 0)
                        return FUNC_3(VAR_5, "Failed to check for chroot() environment: %m");
                return !VAR_5;

        case 129:
                VAR_5 = FUNC_10();
                if (VAR_5 < 0)
                        return FUNC_3(VAR_5, "Failed to check for user namespace: %m");
                return !VAR_5;

        case 132:
        default:
                VAR_5 = FUNC_1();
                if (VAR_5 < 0)
                        return FUNC_3(VAR_5, "Failed to check for virtualization: %m");
                break;
        }

        if (!VAR_2)
                FUNC_8(FUNC_11(VAR_5));

        return VAR_5 == VAR_0;
}
