
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int as_uint64; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ MACsecSCI ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(NetDev *VAR_2, MACsecSCI *VAR_3, sd_netlink_message *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);
        FUNC_0(VAR_3);

        VAR_5 = FUNC_4(VAR_4, VAR_0);
        if (VAR_5 < 0)
                return FUNC_1(VAR_2, VAR_5, "Could not append MACSEC_ATTR_RXSC_CONFIG attribute: %m");

        VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_3->as_uint64);
        if (VAR_5 < 0)
                return FUNC_1(VAR_2, VAR_5, "Could not append MACSEC_RXSC_ATTR_SCI attribute: %m");

        VAR_5 = FUNC_3(VAR_4);
        if (VAR_5 < 0)
                return FUNC_1(VAR_2, VAR_5, "Could not append MACSEC_ATTR_RXSC_CONFIG attribute: %m");

        return 0;
}
