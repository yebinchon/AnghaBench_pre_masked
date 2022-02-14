
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ahci_port {int tfd; int ci; } ;
typedef int fis ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ahci_port*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ahci_port *VAR_3, int VAR_4)
{
 uint8_t VAR_5[20];

 VAR_3->tfd = VAR_1 | VAR_0;
 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 VAR_5[0] = VAR_2;
 VAR_5[1] = 0;
 VAR_5[2] = (uint8_t) VAR_3->tfd;
 VAR_5[3] = 0;
 VAR_3->ci &= ~(1 << VAR_4);
 FUNC_0(VAR_3, VAR_2, VAR_5);
}
