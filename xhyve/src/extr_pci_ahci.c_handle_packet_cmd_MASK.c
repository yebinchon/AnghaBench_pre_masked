
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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ahci_port*,int,int*,int) ;
 int FUNC_2 (struct ahci_port*,int,int*) ;
 int FUNC_3 (struct ahci_port*,int,int*) ;
 int FUNC_4 (struct ahci_port*,int,int*) ;
 int FUNC_5 (struct ahci_port*,int,int*,int ) ;
 int FUNC_6 (struct ahci_port*,int,int*) ;
 int FUNC_7 (struct ahci_port*,int,int*) ;
 int FUNC_8 (struct ahci_port*,int,int*) ;
 int FUNC_9 (struct ahci_port*,int,int*) ;
 int FUNC_10 (struct ahci_port*,int,int*) ;

__attribute__((used)) static void
FUNC_11(struct ahci_port *VAR_6, int VAR_7, uint8_t *VAR_8)
{
 uint8_t *VAR_9;

 VAR_9 = VAR_8 + 0x40;
 switch (VAR_9[0]) {
 case 128:
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_3);
  break;
 case 138:
  FUNC_3(VAR_6, VAR_7, VAR_8);
  break;
 case 133:
  FUNC_6(VAR_6, VAR_7, VAR_8);
  break;
 case 136:

  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_3);
  break;
 case 132:
  FUNC_7(VAR_6, VAR_7, VAR_8);
  break;
 case 131:
  FUNC_8(VAR_6, VAR_7, VAR_8);
  break;
 case 135:
 case 134:
  FUNC_5(VAR_6, VAR_7, VAR_8, 0);
  break;
 case 130:
  FUNC_9(VAR_6, VAR_7, VAR_8);
  break;
 case 129:
  FUNC_10(VAR_6, VAR_7, VAR_8);
  break;
 case 137:
  FUNC_4(VAR_6, VAR_7, VAR_8);
  break;
 case 139:
  FUNC_2(VAR_6, VAR_7, VAR_8);
  break;
 default:
  VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
  VAR_6->sense_key = VAR_2;
  VAR_6->asc = 0x20;
  FUNC_1(VAR_6, VAR_7, VAR_8, ((uint32_t) (VAR_6->sense_key << 12)) |
   ((uint32_t) (VAR_5 | VAR_4)));
  break;
 }
}
