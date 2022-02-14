
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dk_part {int dummy; } ;
struct dk_gpt {int efi_nparts; } ;
typedef int efi_gpe_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dk_gpt* FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,struct dk_gpt*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct dk_gpt*) ;
 void* FUNC_4 (struct dk_gpt*,int) ;
 int VAR_4 ;

int
FUNC_5(int VAR_5, struct dk_gpt **VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;
 int VAR_9;


 VAR_8 = VAR_0 / sizeof (efi_gpe_t);
 VAR_9 = (int) sizeof (struct dk_gpt) +
     (int) sizeof (struct dk_part) * (VAR_8 - 1);
 if ((*VAR_6 = FUNC_0(1, VAR_9)) == ((void*)0))
  return (VAR_2);

 (*VAR_6)->efi_nparts = VAR_8;
 VAR_7 = FUNC_1(VAR_5, *VAR_6);

 if ((VAR_7 == VAR_1) && (*VAR_6)->efi_nparts > VAR_8) {
  void *VAR_10;
  VAR_9 = (int) sizeof (struct dk_gpt) +
      (int) sizeof (struct dk_part) *
      ((*VAR_6)->efi_nparts - 1);
  VAR_8 = (*VAR_6)->efi_nparts;
  if ((VAR_10 = FUNC_4(*VAR_6, VAR_9)) == ((void*)0)) {
   FUNC_3 (*VAR_6);
   *VAR_6 = ((void*)0);
   return (VAR_2);
  } else {
   *VAR_6 = VAR_10;
   VAR_7 = FUNC_1(VAR_5, *VAR_6);
  }
 }

 if (VAR_7 < 0) {
  if (VAR_3) {
   (void) FUNC_2(VAR_4,
       "read of EFI table failed, rval=%d\n", VAR_7);
  }
  FUNC_3 (*VAR_6);
  *VAR_6 = ((void*)0);
 }

 return (VAR_7);
}
