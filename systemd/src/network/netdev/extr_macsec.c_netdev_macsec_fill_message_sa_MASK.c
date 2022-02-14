
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ association_number; scalar_t__ packet_number; scalar_t__ key_len; scalar_t__ activate; int key; int key_id; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ SecurityAssociation ;
typedef TYPE_1__ NetDev ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(NetDev *VAR_7, SecurityAssociation *VAR_8, sd_netlink_message *VAR_9) {
        int VAR_10;

        FUNC_0(VAR_7);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_10 = FUNC_6(VAR_9, VAR_0);
        if (VAR_10 < 0)
                return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_ATTR_SA_CONFIG attribute: %m");

        VAR_10 = FUNC_4(VAR_9, VAR_3, VAR_8->association_number);
        if (VAR_10 < 0)
                return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_SA_ATTR_AN attribute: %m");

        if (VAR_8->packet_number > 0) {
                VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_8->packet_number);
                if (VAR_10 < 0)
                        return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_SA_ATTR_PN attribute: %m");
        }

        if (VAR_8->key_len > 0) {
                VAR_10 = FUNC_2(VAR_9, VAR_5, VAR_8->key_id, VAR_1);
                if (VAR_10 < 0)
                        return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_SA_ATTR_KEYID attribute: %m");

                VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_8->key, VAR_8->key_len);
                if (VAR_10 < 0)
                        return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_SA_ATTR_KEY attribute: %m");
        }

        if (VAR_8->activate >= 0) {
                VAR_10 = FUNC_4(VAR_9, VAR_2, VAR_8->activate);
                if (VAR_10 < 0)
                        return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_SA_ATTR_ACTIVE attribute: %m");
        }

        VAR_10 = FUNC_5(VAR_9);
        if (VAR_10 < 0)
                return FUNC_1(VAR_7, VAR_10, "Could not append MACSEC_ATTR_SA_CONFIG attribute: %m");

        return 0;
}
