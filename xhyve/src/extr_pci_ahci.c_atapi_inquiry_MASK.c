
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_port {int sense_key; int asc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahci_port*,int,int*,int) ;
 int FUNC_1 (int*,char*,int) ;
 int FUNC_2 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct ahci_port *VAR_6, int VAR_7, uint8_t *VAR_8)
{
 uint8_t VAR_9[36];
 uint8_t *VAR_10;
 int VAR_11;
 uint32_t VAR_12;

 VAR_10 = VAR_8 + 0x40;

 if (VAR_10[1] & 1) {
  if (VAR_10[2] == 0) {
   VAR_9[0] = 0x05;
   VAR_9[1] = 0;
   VAR_9[2] = 0;
   VAR_9[3] = 1;
   VAR_9[4] = 0;
   VAR_11 = 4 + VAR_9[3];
  } else {
   VAR_6->sense_key = VAR_2;
   VAR_6->asc = 0x24;
   VAR_12 = (uint32_t) ((VAR_6->sense_key << 12) | VAR_5 | VAR_4);
   VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_12);
   return;
  }
 } else {
  VAR_9[0] = 0x05;
  VAR_9[1] = 0x80;
  VAR_9[2] = 0x00;
  VAR_9[3] = 0x21;
  VAR_9[4] = 31;
  VAR_9[5] = 0;
  VAR_9[6] = 0;
  VAR_9[7] = 0;
  FUNC_1(VAR_9 + 8, "BHYVE", 8);
  FUNC_1(VAR_9 + 16, "BHYVE DVD-ROM", 16);
  FUNC_1(VAR_9 + 32, "001", 4);
  VAR_11 = sizeof(VAR_9);
 }

 if (VAR_11 > VAR_10[4])
  VAR_11 = VAR_10[4];
 VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
 FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5 | VAR_3);
}
