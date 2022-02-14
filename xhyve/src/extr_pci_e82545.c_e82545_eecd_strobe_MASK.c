
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct e82545_softc {scalar_t__ nvm_bits; void* nvm_mode; scalar_t__ nvm_opaddr; int nvm_data; int eeprom_control; int* eeprom_data; } ;


 int FUNC_0 (char*,void*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

 scalar_t__ VAR_9 ;



__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_10)
{







 if (VAR_10->nvm_bits == 0) {
  FUNC_0("eeprom state machine not expecting data! "
   "0x%x 0x%x 0x%x 0x%x\r\n",
   VAR_10->nvm_mode, VAR_10->nvm_bits,
   VAR_10->nvm_opaddr, VAR_10->nvm_data);
  return;
 }
 VAR_10->nvm_bits--;
 if (VAR_10->nvm_mode == VAR_6) {

  if (VAR_10->nvm_data & 0x8000) {
   VAR_10->eeprom_control |= VAR_1;
  } else {
   VAR_10->eeprom_control &= (uint32_t)~VAR_1;
  }
  VAR_10->nvm_data <<= 1;
  if (VAR_10->nvm_bits == 0) {

   VAR_10->nvm_opaddr = 0;
   VAR_10->nvm_mode = VAR_7;
   VAR_10->nvm_bits = VAR_8;
  }
 } else if (VAR_10->nvm_mode == VAR_5) {

  VAR_10->nvm_data <<= 1;
  if (VAR_10->eeprom_control & VAR_0) {
   VAR_10->nvm_data |= 1;
  }
  if (VAR_10->nvm_bits == 0) {

   uint16_t VAR_11 = VAR_10->nvm_opaddr & VAR_9;
   uint16_t VAR_12 = VAR_10->nvm_opaddr & VAR_2;
   if (VAR_11 != 128) {
    FUNC_0("Illegal eeprom write op 0x%x\r\n",
     VAR_10->nvm_opaddr);
   } else if (VAR_12 >= VAR_4) {
    FUNC_0("Illegal eeprom write addr 0x%x\r\n",
     VAR_10->nvm_opaddr);
   } else {
    FUNC_0("eeprom write eeprom[0x%x] = 0x%x\r\n",
    VAR_12, VAR_10->nvm_data);
    VAR_10->eeprom_data[VAR_12] = VAR_10->nvm_data;
   }

   VAR_10->nvm_opaddr = 0;
   VAR_10->nvm_mode = VAR_7;
   VAR_10->nvm_bits = VAR_8;
  }
 } else if (VAR_10->nvm_mode == VAR_7) {
  VAR_10->nvm_opaddr <<= 1;
  if (VAR_10->eeprom_control & VAR_0) {
   VAR_10->nvm_opaddr |= 1;
  }
  if (VAR_10->nvm_bits == 0) {
   uint16_t VAR_13 = VAR_10->nvm_opaddr & VAR_9;
   switch (VAR_13) {
   case 130:
    FUNC_0("eeprom write enable: 0x%x\r\n",
     VAR_10->nvm_opaddr);

    VAR_10->nvm_opaddr = 0;
    VAR_10->nvm_mode = VAR_7;
    VAR_10->nvm_bits = VAR_8;
    break;
   case 129:
   {
    uint16_t VAR_14 = VAR_10->nvm_opaddr &
     VAR_2;
    VAR_10->nvm_mode = VAR_6;
    VAR_10->nvm_bits = VAR_3;
    if (VAR_14 < VAR_4) {
     VAR_10->nvm_data = VAR_10->eeprom_data[VAR_14];
     FUNC_0("eeprom read: eeprom[0x%x] = 0x%x\r\n",
      VAR_14, VAR_10->nvm_data);
    } else {
     FUNC_0("eeprom illegal read: 0x%x\r\n",
      VAR_10->nvm_opaddr);
     VAR_10->nvm_data = 0;
    }
    break;
   }
   case 128:
    VAR_10->nvm_mode = VAR_5;
    VAR_10->nvm_bits = VAR_3;
    VAR_10->nvm_data = 0;
    break;
   default:
    FUNC_0("eeprom unknown op: 0x%x\r\r",
     VAR_10->nvm_opaddr);

    VAR_10->nvm_opaddr = 0;
    VAR_10->nvm_mode = VAR_7;
    VAR_10->nvm_bits = VAR_8;
   }
  }
 } else {
  FUNC_0("eeprom state machine wrong state! "
   "0x%x 0x%x 0x%x 0x%x\r\n",
   VAR_10->nvm_mode, VAR_10->nvm_bits,
   VAR_10->nvm_opaddr, VAR_10->nvm_data);
 }
}
