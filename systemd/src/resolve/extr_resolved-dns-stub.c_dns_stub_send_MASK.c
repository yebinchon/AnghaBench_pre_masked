
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int destination; int sender_port; int sender; int family; } ;
typedef TYPE_1__ Manager ;
typedef int DnsStream ;
typedef TYPE_1__ DnsPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,int *,int ,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(Manager *VAR_1, DnsStream *VAR_2, DnsPacket *VAR_3, DnsPacket *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        if (VAR_2)
                VAR_5 = FUNC_1(VAR_2, VAR_4);
        else {
                int VAR_6;

                VAR_6 = FUNC_3(VAR_1);
                if (VAR_6 < 0)
                        return FUNC_2(VAR_6, "Failed to get reply socket: %m");





                VAR_5 = FUNC_4(VAR_1, VAR_6, VAR_0, VAR_3->family, &VAR_3->sender, VAR_3->sender_port, &VAR_3->destination, VAR_4);
        }
        if (VAR_5 < 0)
                return FUNC_2(VAR_5, "Failed to send reply packet: %m");

        return 0;
}
