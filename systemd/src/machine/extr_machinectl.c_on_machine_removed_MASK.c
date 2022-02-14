
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sd_bus_message ;
typedef int sd_bus_error ;
typedef int PTYForward ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        PTYForward ** VAR_4 = (PTYForward**) VAR_2;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        if (*VAR_4) {




                VAR_5 = FUNC_2(*VAR_4, 0);
                if (VAR_5 >= 0)
                        return 0;

                FUNC_1(VAR_5, "Failed to set ignore_vhangup flag: %m");
        }


        FUNC_5(FUNC_3(FUNC_4(VAR_1)), VAR_0);
        return 0;
}
