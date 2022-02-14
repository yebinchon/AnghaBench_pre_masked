
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahci_port {int sense_key; int asc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahci_port*,int,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct ahci_port *VAR_4, int VAR_5, uint8_t *VAR_6)
{
 uint8_t VAR_7[64];
 uint8_t *VAR_8;
 int VAR_9;

 VAR_8 = VAR_6 + 0x40;
 VAR_9 = VAR_8[4];
 if (((size_t) VAR_9) > sizeof(VAR_7))
  VAR_9 = sizeof(VAR_7);
 FUNC_1(VAR_7, 0, VAR_9);
 VAR_7[0] = 0x70 | (1 << 7);
 VAR_7[2] = VAR_4->sense_key;
 VAR_7[7] = 10;
 VAR_7[12] = VAR_4->asc;
 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
 VAR_6[4] = (VAR_6[4] & ~7) | VAR_0 | VAR_1;
 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3 | VAR_2);
}
