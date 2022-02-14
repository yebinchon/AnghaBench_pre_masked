
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;
typedef int BusTransport ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int **,char const*) ;
 int FUNC_9 (int **,char const*) ;

int FUNC_10(BusTransport VAR_4, const char *VAR_5, bool VAR_6, sd_bus **VAR_7) {
        int VAR_8;

        FUNC_1(VAR_4 >= 0);
        FUNC_1(VAR_4 < VAR_3);
        FUNC_1(VAR_7);

        FUNC_3((VAR_4 == 130) == !VAR_5, -VAR_1);
        FUNC_3(VAR_4 == 130 || !VAR_6, -VAR_2);

        switch (VAR_4) {

        case 130:
                if (VAR_6)
                        VAR_8 = FUNC_5(VAR_7);
                else {
                        if (FUNC_7() <= 0)

                                return FUNC_6(FUNC_0(VAR_0),
                                                       "System has not been booted with systemd as init system (PID 1). Can't operate.");
                        VAR_8 = FUNC_4(VAR_7);
                }
                break;

        case 128:
                VAR_8 = FUNC_9(VAR_7, VAR_5);
                break;

        case 129:
                VAR_8 = FUNC_8(VAR_7, VAR_5);
                break;

        default:
                FUNC_2("Hmm, unknown transport type.");
        }

        return VAR_8;
}
