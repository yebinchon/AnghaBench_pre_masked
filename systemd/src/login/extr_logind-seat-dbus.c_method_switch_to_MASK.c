
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Seat ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Seat *VAR_4 = VAR_2;
        unsigned VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        VAR_6 = FUNC_1(VAR_1, "u", &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        if (VAR_5 <= 0)
                return -VAR_0;

        VAR_6 = FUNC_3(VAR_4, VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_2(VAR_1, ((void*)0));
}
