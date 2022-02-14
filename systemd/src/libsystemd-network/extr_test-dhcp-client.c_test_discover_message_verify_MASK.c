
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DHCPMessage {int xid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct DHCPMessage*,size_t,int ,int *,int *) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_4(size_t VAR_3, struct DHCPMessage *VAR_4) {
        int VAR_5;

        VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_1, ((void*)0), ((void*)0));
        FUNC_0(VAR_5 == VAR_0);

        if (VAR_2)
                FUNC_3("  recv DHCP Discover 0x%08x\n", FUNC_1(VAR_4->xid));

        return 0;
}
