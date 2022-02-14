
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fou_encap_type; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ FouTunnel ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(NetDev *VAR_1) {
        FouTunnel *VAR_2;

        FUNC_1(VAR_1);

        VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        VAR_2->fou_encap_type = VAR_0;
}
