
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_dhcp_client ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,char*) ;

__attribute__((used)) static void FUNC_5(sd_dhcp_client *VAR_1, int VAR_2) {
        FUNC_0(VAR_1);

        if (VAR_2 < 0)
                FUNC_4(VAR_1, VAR_2, "STOPPED: %m");
        else if (VAR_2 == VAR_0)
                FUNC_3(VAR_1, "STOPPED");
        else
                FUNC_3(VAR_1, "STOPPED: Unknown event");

        FUNC_2(VAR_1, VAR_2);

        FUNC_1(VAR_1);
}
