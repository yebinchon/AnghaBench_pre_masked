
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * mac; } ;
struct pci_vtnet_softc {TYPE_1__ vsc_config; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int *,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, int VAR_1, int VAR_2, uint32_t VAR_3)
{
 struct pci_vtnet_softc *VAR_4 = VAR_0;
 void *VAR_5;

 if (VAR_1 < 6) {
  FUNC_1(VAR_1 + VAR_2 <= 6);



  VAR_5 = &VAR_4->vsc_config.mac[VAR_1];
  FUNC_2(VAR_5, &VAR_3, VAR_2);
 } else {

  FUNC_0(("vtnet: write to readonly reg %d\n\r", VAR_1));
 }

 return (0);
}
