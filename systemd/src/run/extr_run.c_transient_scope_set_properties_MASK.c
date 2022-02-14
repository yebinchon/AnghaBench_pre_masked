
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sd_bus_message ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,char*,char*,char*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        VAR_3 = FUNC_6(VAR_2, VAR_0, VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_5(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_3(VAR_2, "(sv)", "PIDs", "au", 1, (uint32_t) FUNC_2());
        if (VAR_3 < 0)
                return FUNC_1(VAR_3);

        return 0;
}
