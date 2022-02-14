
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {int * mac; int mac_valid; } ;
typedef int sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,char*,int *,int) ;
 int FUNC_2 (char*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(sd_device *VAR_2, struct netnames *VAR_3, bool VAR_4) {
        char VAR_5[32];

        if (!VAR_3->mac_valid)
                return -VAR_1;

        if (FUNC_0(VAR_3->mac, "\0\0\0", 3) == 0)
                return -VAR_0;
        FUNC_2(VAR_5, "OUI:%02X%02X%02X%02X%02X%02X", VAR_3->mac[0],
                 VAR_3->mac[1], VAR_3->mac[2], VAR_3->mac[3], VAR_3->mac[4],
                 VAR_3->mac[5]);
        FUNC_1(VAR_2, ((void*)0), VAR_5, ((void*)0), VAR_4);
        return 0;
}
