
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_6) {
        int VAR_7;

        VAR_7 = FUNC_0(VAR_6, "/run/systemd/netif/links/", VAR_4|VAR_2);
        if (VAR_7 >= 0)
                return 0;
        else if (VAR_5 != VAR_0)
                return -VAR_5;

        VAR_7 = FUNC_0(VAR_6, "/run/systemd/netif/", VAR_1|VAR_3);
        if (VAR_7 >= 0)
                return 0;
        else if (VAR_5 != VAR_0)
                return -VAR_5;

        VAR_7 = FUNC_0(VAR_6, "/run/systemd/", VAR_1|VAR_3);
        if (VAR_7 < 0)
                return -VAR_5;

        return 0;
}
