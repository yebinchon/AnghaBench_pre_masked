
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint32_t ;
typedef int uchar_t ;
struct uuid {int dummy; } ;
struct dk_part {int dummy; } ;
struct dk_gpt {int efi_lbasize; int efi_nparts; int efi_first_u_lba; int efi_disk_uguid; void* efi_last_lba; void* efi_last_u_lba; void* efi_altern_lba; int efi_version; } ;
struct dk_cinfo {scalar_t__ dki_partition; scalar_t__ dki_ctype; } ;
typedef void* diskaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct uuid) ;
 struct dk_gpt* FUNC_2 (int,size_t) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int,struct dk_cinfo*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int,void**,int*) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;

int
FUNC_7(int VAR_8, uint32_t VAR_9, struct dk_gpt **VAR_10)
{
 diskaddr_t VAR_11 = 0;
 uint_t VAR_12 = 0;
 uint_t VAR_13;
 size_t VAR_14;
 struct dk_gpt *VAR_15;
 struct uuid VAR_16;
 struct dk_cinfo VAR_17;

 if (FUNC_5(VAR_8, &VAR_11, &VAR_12) != 0)
  return (-1);

 if (FUNC_3(VAR_8, &VAR_17) != 0)
  return (-1);

 if (VAR_17.dki_partition != 0)
  return (-1);

 if ((VAR_17.dki_ctype == VAR_0) ||
     (VAR_17.dki_ctype == VAR_2) ||
     (VAR_17.dki_ctype == VAR_1))
  return (-1);

 VAR_13 = FUNC_0(VAR_9, VAR_12);
 if ((VAR_13 * VAR_12) < VAR_3 + VAR_12) {

  VAR_13 = VAR_3 / VAR_12 + 1;
 }

 if (VAR_9 > VAR_5) {
  if (VAR_6) {
   (void) FUNC_4(VAR_7,
   "the maximum number of partitions supported is %d\n",
       VAR_5);
  }
  return (-1);
 }

 VAR_14 = sizeof (struct dk_gpt) +
     sizeof (struct dk_part) * (VAR_9 - 1);

 if ((*VAR_10 = FUNC_2(1, VAR_14)) == ((void*)0))
  return (-1);

 VAR_15 = *VAR_10;

 VAR_15->efi_version = VAR_4;
 VAR_15->efi_lbasize = VAR_12;
 VAR_15->efi_nparts = VAR_9;





 VAR_15->efi_first_u_lba = VAR_13 + 1;
 VAR_15->efi_last_lba = VAR_11 - 1;
 VAR_15->efi_altern_lba = VAR_11 -1;
 VAR_15->efi_last_u_lba = VAR_15->efi_last_lba - VAR_13;

 (void) FUNC_6((uchar_t *)&VAR_16);
 FUNC_1(VAR_15->efi_disk_uguid, VAR_16);
 return (0);
}
