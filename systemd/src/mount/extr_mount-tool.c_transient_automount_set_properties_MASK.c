
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*,char*,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(sd_bus_message *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_4);

        VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_2);
        if (VAR_5 < 0)
                return VAR_5;

        if (VAR_3 != VAR_1) {
                VAR_5 = FUNC_1(VAR_4, "(sv)", "TimeoutIdleUSec", "t", VAR_3);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        return 0;
}
