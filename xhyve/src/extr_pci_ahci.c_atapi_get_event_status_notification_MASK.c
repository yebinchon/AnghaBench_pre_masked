
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
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_5(struct ahci_port *VAR_6, int VAR_7,
    uint8_t *VAR_8)
{
 uint8_t *VAR_9;
 uint32_t VAR_10;

 VAR_9 = VAR_8 + 0x40;


 if (!(VAR_9[1] & 1)) {
  VAR_6->sense_key = VAR_2;
  VAR_6->asc = 0x24;
  VAR_10 = (uint32_t) ((VAR_6->sense_key << 12) | VAR_5 | VAR_4);
 } else {
  uint8_t VAR_11[8];
  int VAR_12;

  VAR_12 = FUNC_1(VAR_9 + 7);
  if (((size_t) VAR_12) > sizeof(VAR_11)) {
   VAR_12 = sizeof(VAR_11);
  }

  FUNC_3(VAR_11, 0, sizeof(VAR_11));
  FUNC_2(VAR_11, 8 - 2);
  VAR_11[2] = 0x04;
  VAR_11[3] = 0x10;
  VAR_11[5] = 0x02;
  FUNC_4(VAR_6, VAR_7, VAR_8, VAR_11, VAR_12);
  VAR_10 = VAR_5 | VAR_3;
 }
 VAR_8[4] = (VAR_8[4] & ~7) | VAR_0 | VAR_1;
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_10);
}
