
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_track ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(sd_bus_track *VAR_2, void *VAR_3) {
        int VAR_4;

        FUNC_1("TRACK CB Y");

        FUNC_0(!VAR_1);
        VAR_1 = 1;



        VAR_4 = FUNC_4(FUNC_2(FUNC_3(VAR_2)), VAR_0);
        FUNC_0(VAR_4 >= 0);

        return 0;
}
