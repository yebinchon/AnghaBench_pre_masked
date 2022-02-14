
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtfn_info {struct netnames* physfn_pcidev; scalar_t__* suffix; } ;
struct netnames {scalar_t__* pci_path; scalar_t__* pci_slot; scalar_t__* pci_onboard; struct netnames* pcidev; int type; } ;
typedef struct netnames sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netnames*) ;
 int FUNC_1 (struct netnames*,struct netnames*) ;
 int FUNC_2 (struct netnames*,struct netnames*) ;
 scalar_t__ FUNC_3 (struct netnames*,struct netnames*,struct virtfn_info*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct netnames*,struct netnames**) ;
 int FUNC_6 (struct netnames*,char*,int *,struct netnames**) ;
 scalar_t__ FUNC_7 (struct netnames*,char const**) ;
 int FUNC_8 (struct netnames*) ;
 struct netnames* FUNC_9 (struct netnames*) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 (scalar_t__*,int,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_13(sd_device *VAR_3, struct netnames *VAR_4) {
        sd_device *VAR_5;
        struct netnames VAR_6 = {};
        struct virtfn_info VAR_7 = {};
        const char *VAR_8;
        int VAR_9;

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_9 = FUNC_5(VAR_3, &VAR_5);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_5 = FUNC_9(VAR_5);

        if (!VAR_5)
                return -VAR_0;


        if (FUNC_7(VAR_5, &VAR_8) >= 0 &&
            FUNC_10("pci", VAR_8)) {
                VAR_4->type = VAR_2;
                VAR_4->pcidev = VAR_5;
        } else {
                VAR_9 = FUNC_6(VAR_3, "pci", ((void*)0), &VAR_4->pcidev);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        if (FUNC_4(VAR_1) &&
            FUNC_3(VAR_3, VAR_4, &VAR_7) >= 0) {

                VAR_6.pcidev = VAR_7.physfn_pcidev;
                FUNC_1(VAR_3, &VAR_6);
                FUNC_2(VAR_3, &VAR_6);
                if (VAR_6.pci_onboard[0])
                        if (FUNC_11(VAR_6.pci_onboard) + FUNC_11(VAR_7.suffix) < sizeof(VAR_4->pci_onboard))
                                FUNC_12(VAR_4->pci_onboard, sizeof(VAR_4->pci_onboard),
                                         VAR_6.pci_onboard, VAR_7.suffix, ((void*)0));
                if (VAR_6.pci_slot[0])
                        if (FUNC_11(VAR_6.pci_slot) + FUNC_11(VAR_7.suffix) < sizeof(VAR_4->pci_slot))
                                FUNC_12(VAR_4->pci_slot, sizeof(VAR_4->pci_slot),
                                         VAR_6.pci_slot, VAR_7.suffix, ((void*)0));
                if (VAR_6.pci_path[0])
                        if (FUNC_11(VAR_6.pci_path) + FUNC_11(VAR_7.suffix) < sizeof(VAR_4->pci_path))
                                FUNC_12(VAR_4->pci_path, sizeof(VAR_4->pci_path),
                                         VAR_6.pci_path, VAR_7.suffix, ((void*)0));
                FUNC_8(VAR_7.physfn_pcidev);
        } else {
                FUNC_1(VAR_3, VAR_4);
                FUNC_2(VAR_3, VAR_4);
        }

        return 0;
}
