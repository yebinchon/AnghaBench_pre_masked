
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netnames {scalar_t__ type; char* pci_path; char* pci_slot; int bcma_core; int usb_ports; scalar_t__ pci_onboard_label; scalar_t__* pci_onboard; int netdevsim_path; int platform_path; int vio_slot; int ccw_busid; int * mac; scalar_t__ mac_valid; } ;
typedef int sd_device ;
struct TYPE_2__ {char* name; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,struct netnames*,int) ;
 scalar_t__ FUNC_1 (int *,struct netnames*) ;
 scalar_t__ FUNC_2 (int *,struct netnames*) ;
 int FUNC_3 (int *,struct netnames*) ;
 scalar_t__ FUNC_4 (int *,struct netnames*) ;
 scalar_t__ FUNC_5 (int *,struct netnames*) ;
 scalar_t__ FUNC_6 (int *,struct netnames*,int) ;
 scalar_t__ FUNC_7 (int *,struct netnames*) ;
 scalar_t__ FUNC_8 (int *,struct netnames*) ;
 TYPE_1__* FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,char const**) ;
 int FUNC_12 (int *,char*,char const**) ;
 scalar_t__ FUNC_13 (char*,int,char*,char const*,char*,int ) ;
 scalar_t__ FUNC_14 (char*,int,char*,char const*,char*,...) ;
 scalar_t__ FUNC_15 (char const*,char const*) ;
 unsigned long FUNC_16 (char const*,int *,int ) ;
 int FUNC_17 (int *,int,char*,char*) ;
 int FUNC_18 (char*,char*,char const*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_19(sd_device *VAR_10, int VAR_11, char *VAR_12[], bool VAR_13) {
        const char *VAR_14, *VAR_15, *VAR_16, *VAR_17 = "en";
        struct netnames VAR_18 = {};
        unsigned long VAR_19;
        int VAR_20;


        VAR_20 = FUNC_12(VAR_10, "type", &VAR_14);
        if (VAR_20 < 0)
                return VAR_20;

        VAR_19 = FUNC_16(VAR_14, ((void*)0), 0);
        switch (VAR_19) {
        case 130:
                VAR_17 = "en";
                break;
        case 129:
                if (FUNC_10(VAR_1))
                        VAR_17 = "ib";
                else
                        return 0;
                break;
        case 128:
                VAR_17 = "sl";
                break;
        default:
                return 0;
        }


        VAR_20 = FUNC_12(VAR_10, "ifindex", &VAR_14);
        if (VAR_20 < 0)
                return VAR_20;
        VAR_20 = FUNC_12(VAR_10, "iflink", &VAR_15);
        if (VAR_20 < 0)
                return VAR_20;
        if (!FUNC_15(VAR_14, VAR_15))
                return 0;

        if (FUNC_11(VAR_10, &VAR_16) >= 0) {
                if (FUNC_15("wlan", VAR_16))
                        VAR_17 = "wl";
                else if (FUNC_15("wwan", VAR_16))
                        VAR_17 = "ww";
        }

        FUNC_17(VAR_10, VAR_13, "ID_NET_NAMING_SCHEME", FUNC_9()->name);

        VAR_20 = FUNC_3(VAR_10, &VAR_18);
        if (VAR_20 >= 0 && VAR_18.mac_valid) {
                char VAR_21[VAR_0];

                FUNC_18(VAR_21, "%sx%02x%02x%02x%02x%02x%02x", VAR_17,
                         VAR_18.mac[0], VAR_18.mac[1], VAR_18.mac[2],
                         VAR_18.mac[3], VAR_18.mac[4], VAR_18.mac[5]);
                FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_MAC", VAR_21);

                FUNC_0(VAR_10, &VAR_18, VAR_13);
        }


        if (FUNC_2(VAR_10, &VAR_18) >= 0 && VAR_18.type == VAR_4) {
                char VAR_22[VAR_0];

                if (FUNC_14(VAR_22, sizeof VAR_22, "%s%s", VAR_17, VAR_18.ccw_busid))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_PATH", VAR_22);
                return 0;
        }


        if (FUNC_8(VAR_10, &VAR_18) >= 0 && VAR_18.type == VAR_9) {
                char VAR_23[VAR_0];

                if (FUNC_14(VAR_23, sizeof VAR_23, "%s%s", VAR_17, VAR_18.vio_slot))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_SLOT", VAR_23);
                return 0;
        }


        if (FUNC_6(VAR_10, &VAR_18, VAR_13) >= 0 && VAR_18.type == VAR_7) {
                char VAR_24[VAR_0];

                if (FUNC_14(VAR_24, sizeof VAR_24, "%s%s", VAR_17, VAR_18.platform_path))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_PATH", VAR_24);
                return 0;
        }


        if (FUNC_4(VAR_10, &VAR_18) >= 0 && VAR_18.type == VAR_5) {
                char VAR_25[VAR_0];

                if (FUNC_14(VAR_25, sizeof VAR_25, "%s%s", VAR_17, VAR_18.netdevsim_path))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_PATH", VAR_25);

                return 0;
        }


        if (FUNC_5(VAR_10, &VAR_18) < 0)
                return 0;


        if (VAR_18.type == VAR_6) {
                char VAR_26[VAR_0];

                if (VAR_18.pci_onboard[0] &&
                    FUNC_14(VAR_26, sizeof VAR_26, "%s%s", VAR_17, VAR_18.pci_onboard))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_ONBOARD", VAR_26);

                if (VAR_18.pci_onboard_label &&
                    FUNC_14(VAR_26, sizeof VAR_26, "%s%s",
                                FUNC_10(VAR_2) ? "" : VAR_17,
                                VAR_18.pci_onboard_label))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_LABEL_ONBOARD", VAR_26);

                if (VAR_18.pci_path[0] &&
                    FUNC_14(VAR_26, sizeof VAR_26, "%s%s", VAR_17, VAR_18.pci_path))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_PATH", VAR_26);

                if (VAR_18.pci_slot[0] &&
                    FUNC_14(VAR_26, sizeof VAR_26, "%s%s", VAR_17, VAR_18.pci_slot))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_SLOT", VAR_26);
                return 0;
        }


        if (FUNC_7(VAR_10, &VAR_18) >= 0 && VAR_18.type == VAR_8) {
                char VAR_27[VAR_0];

                if (VAR_18.pci_path[0] &&
                    FUNC_14(VAR_27, sizeof VAR_27, "%s%s%s", VAR_17, VAR_18.pci_path, VAR_18.usb_ports))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_PATH", VAR_27);

                if (VAR_18.pci_slot[0] &&
                    FUNC_14(VAR_27, sizeof VAR_27, "%s%s%s", VAR_17, VAR_18.pci_slot, VAR_18.usb_ports))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_SLOT", VAR_27);
                return 0;
        }


        if (FUNC_1(VAR_10, &VAR_18) >= 0 && VAR_18.type == VAR_3) {
                char VAR_28[VAR_0];

                if (VAR_18.pci_path[0] &&
                    FUNC_14(VAR_28, sizeof VAR_28, "%s%s%s", VAR_17, VAR_18.pci_path, VAR_18.bcma_core))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_PATH", VAR_28);

                if (VAR_18.pci_slot[0] &&
                    FUNC_13(VAR_28, sizeof VAR_28, "%s%s%s", VAR_17, VAR_18.pci_slot, VAR_18.bcma_core))
                        FUNC_17(VAR_10, VAR_13, "ID_NET_NAME_SLOT", VAR_28);
                return 0;
        }

        return 0;
}
