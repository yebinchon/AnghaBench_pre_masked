
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_port {int sense_key; int asc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahci_port*,int,int*,int) ;

__attribute__((used)) static void
FUNC_1(struct ahci_port *VAR_6, int VAR_7, uint8_t *VAR_8)
{
 uint8_t *VAR_9 = VAR_8 + 0x40;
 uint32_t VAR_10;

 VAR_10 = 0;

 switch (VAR_9[4] & 3) {
 case 0:
 case 1:
 case 3:
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  VAR_10 = VAR_5 | VAR_3;
  break;
 case 2:

  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  VAR_6->sense_key = VAR_2;
  VAR_6->asc = 0x53;
  VAR_10 = (uint32_t) ((VAR_6->sense_key << 12) | VAR_5 | VAR_4);
  break;
 }
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_10);
}
