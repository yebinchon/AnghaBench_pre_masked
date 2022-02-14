
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int len_t ;
struct TYPE_5__ {scalar_t__ efi_gpt_Signature; int efi_gpt_HeaderCRC32; int efi_gpt_HeaderSize; } ;
typedef TYPE_1__ efi_gpt_t ;
struct TYPE_6__ {int dki_length; TYPE_1__* dki_data; } ;
typedef TYPE_2__ dk_efi_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,int ,TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_5(int VAR_10, dk_efi_t *VAR_11)
{
 efi_gpt_t *VAR_12;
 uint_t VAR_13;

 if (FUNC_3(VAR_10, VAR_0, VAR_11) == -1) {
  switch (VAR_8) {
  case 128:
   return (VAR_5);
  default:
   return (VAR_6);
  }
 }
 VAR_12 = VAR_11->dki_data;
 if (VAR_12->efi_gpt_Signature != FUNC_1(VAR_3)) {
  if (VAR_7)
   (void) FUNC_4(VAR_9,
       "Bad EFI signature: 0x%x != 0x%x\n",
       (long long)VAR_12->efi_gpt_Signature,
       (long long)FUNC_1(VAR_3));
  return (VAR_4);
 }





 VAR_13 = VAR_12->efi_gpt_HeaderCRC32;
 VAR_12->efi_gpt_HeaderCRC32 = 0;
 len_t VAR_14 = (len_t)FUNC_0(VAR_12->efi_gpt_HeaderSize);

 if (VAR_14 < VAR_2 || VAR_14 > VAR_1) {
  if (VAR_7)
   (void) FUNC_4(VAR_9,
       "Invalid EFI HeaderSize %d.  Assuming %d.\n",
       VAR_14, VAR_2);
 }

 if ((VAR_14 > VAR_11->dki_length) ||
     VAR_13 != FUNC_0(FUNC_2((unsigned char *)VAR_12, VAR_14))) {
  if (VAR_7)
   (void) FUNC_4(VAR_9,
       "Bad EFI CRC: 0x%x != 0x%x\n",
       VAR_13, FUNC_0(FUNC_2((unsigned char *)VAR_12,
       VAR_14)));
  return (VAR_4);
 }

 return (0);
}
