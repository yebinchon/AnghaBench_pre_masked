
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_port {int cmd; int ci; int pending; int ccs; int tfd; scalar_t__ waitforclear; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahci_port*,int) ;

__attribute__((used)) static void
FUNC_1(struct ahci_port *VAR_5)
{

 if (!(VAR_5->cmd & VAR_2))
  return;





 for (; (VAR_5->ci & ~VAR_5->pending) != 0; VAR_5->ccs = ((VAR_5->ccs + 1) & 31)) {
  if ((VAR_5->tfd & (VAR_3 | VAR_4)) != 0)
   break;
  if (VAR_5->waitforclear)
   break;
  if ((VAR_5->ci & ~VAR_5->pending & (1 << VAR_5->ccs)) != 0) {
   VAR_5->cmd &= ~((unsigned) VAR_0);
   VAR_5->cmd |= VAR_5->ccs << VAR_1;
   FUNC_0(VAR_5, ((int) VAR_5->ccs));
  }
 }
}
