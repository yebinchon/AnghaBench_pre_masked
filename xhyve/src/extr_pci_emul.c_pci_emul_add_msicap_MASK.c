
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pci_devinst {int dummy; } ;
struct msicap {int dummy; } ;
typedef int msicap ;


 int FUNC_0 (struct pci_devinst*,int *,int) ;
 int FUNC_1 (struct msicap*,int,int ) ;

int
FUNC_2(struct pci_devinst *VAR_0, int VAR_1)
{
 struct msicap VAR_2;

 FUNC_1(&VAR_2, VAR_1, 0);

 return (FUNC_0(VAR_0, (u_char *)&VAR_2, sizeof(VAR_2)));
}
