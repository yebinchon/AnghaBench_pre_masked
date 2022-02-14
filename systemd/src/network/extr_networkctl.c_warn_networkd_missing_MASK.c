
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void) {

        if (FUNC_0("/run/systemd/netif/state", VAR_0) >= 0)
                return;

        FUNC_1(VAR_1, "WARNING: systemd-networkd is not running, output will be incomplete.\n\n");
}
