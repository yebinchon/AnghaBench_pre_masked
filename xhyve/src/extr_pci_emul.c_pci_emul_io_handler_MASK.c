
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct pci_devinst {TYPE_1__* pi_bar; struct pci_devemu* pi_d; } ;
struct pci_devemu {int (* pe_barwrite ) (int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;scalar_t__ (* pe_barread ) (int,struct pci_devinst*,int,scalar_t__,int) ;} ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ addr; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct pci_devinst*,int,scalar_t__,int) ;
 int FUNC_1 (int,struct pci_devinst*,int,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, int VAR_3, int VAR_4, int VAR_5, uint32_t *VAR_6,
 void *VAR_7)
{
 struct pci_devinst *VAR_8 = VAR_7;
 struct pci_devemu *VAR_9 = VAR_8->pi_d;
 uint64_t VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 <= VAR_1; VAR_11++) {
  if ((VAR_8->pi_bar[VAR_11].type == VAR_0) &&
      (((uint64_t) VAR_4) >= VAR_8->pi_bar[VAR_11].addr) &&
      (((uint64_t) (VAR_4 + VAR_5)) <=
       (VAR_8->pi_bar[VAR_11].addr + VAR_8->pi_bar[VAR_11].size)))
  {
   VAR_10 = ((uint64_t) VAR_4) - VAR_8->pi_bar[VAR_11].addr;
   if (VAR_3)
    *VAR_6 = (uint32_t) (*VAR_9->pe_barread)(VAR_2, VAR_8, VAR_11, VAR_10,
     VAR_5);
   else
    (*VAR_9->pe_barwrite)(VAR_2, VAR_8, VAR_11, VAR_10, VAR_5, *VAR_6);
   return (0);
  }
 }
 return (-1);
}
