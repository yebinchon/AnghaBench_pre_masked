
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netnames {char* pci_onboard; char const* pci_onboard_label; int * pcidev; } ;
typedef int sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,unsigned long*) ;
 int FUNC_2 (int *,char*,char const**) ;
 size_t FUNC_3 (char**,size_t,char*,...) ;
 unsigned long FUNC_4 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_5(sd_device *VAR_4, struct netnames *VAR_5) {
        unsigned long VAR_6, VAR_7 = 0;
        const char *VAR_8, *VAR_9 = ((void*)0);
        size_t VAR_10;
        char *VAR_11;
        int VAR_12;


        if (FUNC_2(VAR_5->pcidev, "acpi_index", &VAR_8) < 0) {

                VAR_12 = FUNC_2(VAR_5->pcidev, "index", &VAR_8);
                if (VAR_12 < 0)
                        return VAR_12;
        }

        VAR_12 = FUNC_1(VAR_8, &VAR_6);
        if (VAR_12 < 0)
                return VAR_12;
        if (VAR_6 == 0 && !FUNC_0(VAR_2))
                return -VAR_0;






        if (VAR_6 > VAR_3)
                return -VAR_1;


        if (FUNC_2(VAR_4, "dev_port", &VAR_8) >= 0)
                VAR_7 = FUNC_4(VAR_8, ((void*)0), 10);


        (void) FUNC_2(VAR_4, "phys_port_name", &VAR_9);

        VAR_11 = VAR_5->pci_onboard;
        VAR_10 = sizeof(VAR_5->pci_onboard);
        VAR_10 = FUNC_3(&VAR_11, VAR_10, "o%lu", VAR_6);
        if (VAR_9)
                VAR_10 = FUNC_3(&VAR_11, VAR_10, "n%s", VAR_9);
        else if (VAR_7 > 0)
                VAR_10 = FUNC_3(&VAR_11, VAR_10, "d%lu", VAR_7);
        if (VAR_10 == 0)
                VAR_5->pci_onboard[0] = '\0';

        if (FUNC_2(VAR_5->pcidev, "label", &VAR_5->pci_onboard_label) < 0)
                VAR_5->pci_onboard_label = ((void*)0);

        return 0;
}
