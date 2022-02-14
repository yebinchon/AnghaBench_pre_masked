
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* table; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;
struct TYPE_4__ {int vector_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int,size_t) ;

__attribute__((used)) static void
FUNC_2(struct pci_devinst *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(VAR_4 > 0);
 FUNC_0(VAR_4 <= VAR_0);

 VAR_6 = VAR_4 * VAR_1;
 VAR_3->pi_msix.table = FUNC_1(1, ((size_t) VAR_6));


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_3->pi_msix.table[VAR_5].vector_control |= VAR_2;
}
