
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_dhcp_client ;
typedef int DHCPMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,int *,int *,int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(sd_dhcp_client *VAR_2, DHCPMessage *VAR_3, size_t VAR_4) {
        int VAR_5;

        VAR_5 = FUNC_0(VAR_3, VAR_4, ((void*)0), ((void*)0), ((void*)0));
        if (VAR_5 != VAR_0)
                return -VAR_1;

        FUNC_1(VAR_2, "FORCERENEW");

        return 0;
}
