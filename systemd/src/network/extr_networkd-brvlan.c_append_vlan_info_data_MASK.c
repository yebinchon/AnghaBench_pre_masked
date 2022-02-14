
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bridge_vlan_info {int vid; int flags; } ;
typedef int sd_netlink_message ;
typedef int br_vlan ;
typedef int Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int * const,int,char*) ;
 int FUNC_4 (int *,int ,struct bridge_vlan_info*,int) ;

__attribute__((used)) static int FUNC_5(Link *const VAR_7, sd_netlink_message *VAR_8, uint16_t VAR_9, const uint32_t *VAR_10, const uint32_t *VAR_11) {
        struct bridge_vlan_info VAR_12;
        int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
        uint16_t VAR_18, VAR_19;
        bool VAR_20, VAR_21 = 0;

        FUNC_0(*VAR_7);
        FUNC_0(*VAR_8);
        FUNC_0(VAR_10);
        FUNC_0(VAR_11);

        VAR_17 = 0;

        VAR_18 = VAR_19 = VAR_6;
        for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
                unsigned VAR_22;
                uint32_t VAR_23 = VAR_10[VAR_15];
                uint32_t VAR_24 = VAR_11[VAR_15];

                VAR_22 = VAR_15 * 32;
                VAR_13 = -1;
                VAR_20 = 0;
                do {
                        VAR_14 = FUNC_1(VAR_13, VAR_23);
                        if (VAR_14 > 0) {

                                if (VAR_18 == VAR_6 && VAR_19 == VAR_6) {
                                        VAR_18 = VAR_19 = VAR_14 - 1 + VAR_22;
                                        VAR_21 = FUNC_2(VAR_14 - 1, VAR_24);
                                        goto next;
                                }


                                if (VAR_14 - 2 + VAR_22 == VAR_19 && VAR_21 == FUNC_2(VAR_14 - 1, VAR_24) && (uint16_t)VAR_14 - 1 + VAR_22 != VAR_9 && (uint16_t)VAR_18 != VAR_9) {
                                        VAR_19++;
                                        goto next;
                                }
                        } else
                                VAR_20 = 1;

                        if (VAR_18 != VAR_6) {
                                VAR_17++;
                                if (VAR_20 && VAR_15 < VAR_0 - 1)
                                        break;

                                VAR_12.flags = 0;
                                if (VAR_21)
                                        VAR_12.flags |= VAR_4;

                                if (VAR_18 == VAR_19) {
                                        VAR_12.vid = VAR_18;

                                        if (VAR_18 == VAR_9)
                                                VAR_12.flags |= VAR_1;

                                        VAR_16 = FUNC_4(VAR_8, VAR_5, &VAR_12, sizeof(VAR_12));
                                        if (VAR_16 < 0)
                                                return FUNC_3(VAR_7, VAR_16, "Could not append IFLA_BRIDGE_VLAN_INFO attribute: %m");
                                } else {
                                        VAR_12.vid = VAR_18;
                                        VAR_12.flags |= VAR_2;

                                        VAR_16 = FUNC_4(VAR_8, VAR_5, &VAR_12, sizeof(VAR_12));
                                        if (VAR_16 < 0)
                                                return FUNC_3(VAR_7, VAR_16, "Could not append IFLA_BRIDGE_VLAN_INFO attribute: %m");

                                        VAR_12.vid = VAR_19;
                                        VAR_12.flags &= ~VAR_2;
                                        VAR_12.flags |= VAR_3;

                                        VAR_16 = FUNC_4(VAR_8, VAR_5, &VAR_12, sizeof(VAR_12));
                                        if (VAR_16 < 0)
                                                return FUNC_3(VAR_7, VAR_16, "Could not append IFLA_BRIDGE_VLAN_INFO attribute: %m");
                                }

                                if (VAR_20)
                                        break;
                        }
                        if (VAR_14 > 0) {
                                VAR_18 = VAR_19 = VAR_14 - 1 + VAR_22;
                                VAR_21 = FUNC_2(VAR_14 - 1, VAR_24);
                        }

                next:
                        VAR_13 = VAR_14;
                } while (!VAR_20);
        }

        FUNC_0(VAR_17 > 0);
        return VAR_17;
}
