
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_netlink_message ;
struct TYPE_3__ {scalar_t__ port; scalar_t__ encrypt; scalar_t__ encoding_an; } ;
typedef int NetDev ;
typedef TYPE_1__ MACsec ;
typedef int Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(NetDev *VAR_3, Link *VAR_4, sd_netlink_message *VAR_5) {
        MACsec *VAR_6;
        int VAR_7;

        FUNC_1(VAR_3);
        FUNC_1(VAR_5);

        VAR_6 = FUNC_0(VAR_3);

        if (VAR_6->port > 0) {
                VAR_7 = FUNC_3(VAR_5, VAR_2, VAR_6->port);
                if (VAR_7 < 0)
                        return FUNC_2(VAR_3, VAR_7, "Could not append IFLA_MACSEC_PORT attribute: %m");
        }

        if (VAR_6->encrypt >= 0) {
                VAR_7 = FUNC_4(VAR_5, VAR_1, VAR_6->encrypt);
                if (VAR_7 < 0)
                        return FUNC_2(VAR_3, VAR_7, "Could not append IFLA_MACSEC_ENCRYPT attribute: %m");
        }

        VAR_7 = FUNC_4(VAR_5, VAR_0, VAR_6->encoding_an);
        if (VAR_7 < 0)
                return FUNC_2(VAR_3, VAR_7, "Could not append IFLA_MACSEC_ENCODING_SA attribute: %m");

        return VAR_7;
}
