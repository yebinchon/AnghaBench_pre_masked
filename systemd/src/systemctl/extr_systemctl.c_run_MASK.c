
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int,char**) ;

__attribute__((used)) static int FUNC_17(int VAR_6, char *VAR_7[]) {
        int VAR_8;

        FUNC_13(VAR_1, "");
        FUNC_5();
        FUNC_4();


        (void) FUNC_10(VAR_0);

        FUNC_14();




        VAR_5 = FUNC_2(VAR_2);

        VAR_8 = FUNC_7(VAR_6, VAR_7);
        if (VAR_8 <= 0)
                goto finish;

        if (VAR_3 != 129 && FUNC_12() > 0) {
                if (!VAR_4)
                        FUNC_3("Running in chroot, ignoring request.");
                VAR_8 = 0;
                goto finish;
        }




        switch (VAR_3) {

        case 129:
                VAR_8 = FUNC_16(VAR_6, VAR_7);
                break;





        case 145:
        case 141:
        case 140:
        case 142:
                VAR_8 = FUNC_1();
                break;

        case 135:
        case 134:
        case 133:
        case 132:
        case 137:
                VAR_8 = FUNC_15();
                break;

        case 138:
        case 139:
                VAR_8 = FUNC_9();
                break;

        case 149:
                VAR_8 = FUNC_6();
                break;

        case 136:
                VAR_8 = FUNC_11();
                break;

        case 146:
        case 131:
        case 144:
        case 143:
        case 130:
        case 147:
        case 148:



        case 128:
        default:
                FUNC_0("Unknown action");
        }

finish:
        FUNC_8();


        return VAR_8;
}
