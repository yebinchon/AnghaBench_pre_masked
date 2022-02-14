
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pci_devinst {TYPE_1__* pi_bar; struct pci_devemu* pi_d; } ;
struct pci_devemu {scalar_t__ (* pe_barread ) (int,struct pci_devinst*,int,scalar_t__,int) ;int (* pe_barwrite ) (int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;} ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ addr; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int,struct pci_devinst*,int,scalar_t__,int) ;
 int FUNC_5 (int,struct pci_devinst*,int,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int,struct pci_devinst*,int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_4, int VAR_5, uint64_t VAR_6,
       int VAR_7, uint64_t *VAR_8, void *VAR_9, long VAR_10)
{
 struct pci_devinst *VAR_11 = VAR_9;
 struct pci_devemu *VAR_12 = VAR_11->pi_d;
 uint64_t VAR_13;
 int VAR_14 = (int) VAR_10;

 FUNC_0(VAR_14 <= VAR_3);
 FUNC_0((VAR_11->pi_bar[VAR_14].type == VAR_1) ||
  (VAR_11->pi_bar[VAR_14].type == VAR_2));
 FUNC_0((VAR_6 >= VAR_11->pi_bar[VAR_14].addr) &&
  ((VAR_6 + ((uint64_t) VAR_7)) <=
   (VAR_11->pi_bar[VAR_14].addr + VAR_11->pi_bar[VAR_14].size)));

 VAR_13 = VAR_6 - VAR_11->pi_bar[VAR_14].addr;

 if (VAR_5 == VAR_0) {
  if (VAR_7 == 8) {
   (*VAR_12->pe_barwrite)(VAR_4, VAR_11, VAR_14, VAR_13, 4, *VAR_8 & 0xffffffff);
   (*VAR_12->pe_barwrite)(VAR_4, VAR_11, VAR_14, VAR_13 + 4, 4, *VAR_8 >> 32);
  } else {
   (*VAR_12->pe_barwrite)(VAR_4, VAR_11, VAR_14, VAR_13, VAR_7, *VAR_8);
  }
 } else {
  if (VAR_7 == 8) {
   *VAR_8 = (*VAR_12->pe_barread)(VAR_4, VAR_11, VAR_14, VAR_13, 4);
   *VAR_8 |= (*VAR_12->pe_barread)(VAR_4, VAR_11, VAR_14, VAR_13 + 4, 4) << 32;
  } else {
   *VAR_8 = (*VAR_12->pe_barread)(VAR_4, VAR_11, VAR_14, VAR_13, VAR_7);
  }
 }

 return (0);
}
