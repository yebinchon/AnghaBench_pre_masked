
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int allow_localremote; int ipv6_flowlabel; int ip6tnl_mode; int encap_limit; int ttl; } ;
typedef TYPE_1__ Tunnel ;
typedef TYPE_1__ NetDev ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_4) {
        Tunnel *VAR_5 = FUNC_0(VAR_4);

        FUNC_1(VAR_4);
        FUNC_1(VAR_5);

        VAR_5->ttl = VAR_0;
        VAR_5->encap_limit = VAR_1;
        VAR_5->ip6tnl_mode = VAR_2;
        VAR_5->ipv6_flowlabel = VAR_3;
        VAR_5->allow_localremote = -1;
}
