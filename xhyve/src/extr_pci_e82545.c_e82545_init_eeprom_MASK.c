
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct e82545_softc {size_t* eeprom_data; TYPE_1__* vms; } ;
struct TYPE_2__ {int* mac; } ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_10)
{
 uint16_t VAR_11, VAR_12;


 VAR_10->eeprom_data[VAR_5] = (uint16_t)((VAR_10->vms->mac[0]) |
  (VAR_10->vms->mac[1]) << 8);
 VAR_10->eeprom_data[VAR_5+1] = (uint16_t)((VAR_10->vms->mac[2]) |
  (VAR_10->vms->mac[3] << 8));
 VAR_10->eeprom_data[VAR_5+2] = (uint16_t)((VAR_10->vms->mac[4]) |
  (VAR_10->vms->mac[5] << 8));


 VAR_10->eeprom_data[VAR_6] = VAR_1;
 VAR_10->eeprom_data[VAR_7] = VAR_2;
 VAR_10->eeprom_data[VAR_4] = VAR_0;
 VAR_10->eeprom_data[VAR_9] = VAR_2;


        VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11 += VAR_10->eeprom_data[VAR_12];
 }
 VAR_11 = VAR_8 - VAR_11;
 VAR_10->eeprom_data[VAR_3] = VAR_11;
 FUNC_0("eeprom checksum: 0x%x\r\n", VAR_11);
}
