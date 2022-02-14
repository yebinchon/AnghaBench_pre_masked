
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int table_count; scalar_t__ table; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_devinst*,int) ;

uint64_t
FUNC_1(struct pci_devinst *VAR_1, uint64_t VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5;
 int VAR_6;
 uint64_t VAR_7 = ~((uint64_t) 0);






 if (VAR_3 != 1 && VAR_3 != 4 && VAR_3 != 8)
  return (VAR_7);

 VAR_5 = VAR_2 % VAR_0;


 if ((VAR_5 % VAR_3) != 0) {
  return (VAR_7);
 }

 VAR_6 = (int) (VAR_2 / VAR_0);

 if (VAR_6 < VAR_1->pi_msix.table_count) {

  VAR_4 = (char *)(VAR_1->pi_msix.table + VAR_6);
  VAR_4 += VAR_5;

  if (VAR_3 == 1)
   VAR_7 = *((uint8_t *)((void *) VAR_4));
  else if (VAR_3 == 4)
   VAR_7 = *((uint32_t *)((void *) VAR_4));
  else
   VAR_7 = *((uint64_t *)((void *) VAR_4));
 } else if (FUNC_0(VAR_1, VAR_2)) {

  VAR_7 = 0;
 }

 return (VAR_7);
}
