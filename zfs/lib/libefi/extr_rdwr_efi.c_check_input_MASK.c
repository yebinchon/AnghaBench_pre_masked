
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar_t ;
struct dk_gpt {int efi_nparts; int efi_first_u_lba; int efi_last_u_lba; TYPE_1__* efi_parts; } ;
typedef int diskaddr_t ;
struct TYPE_2__ {int p_tag; int p_size; int p_start; int p_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct dk_gpt *VAR_5)
{
 int VAR_6 = -1;
 int VAR_7, VAR_8;
 diskaddr_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;




 for (VAR_7 = 0; VAR_7 < VAR_5->efi_nparts; VAR_7++) {

  if ((VAR_5->efi_parts[VAR_7].p_tag == VAR_2) &&
      (VAR_5->efi_parts[VAR_7].p_size != 0)) {
   if (VAR_3) {
    (void) FUNC_0(VAR_4, "partition %d is "
        "\"unassigned\" but has a size of %d",
        VAR_7, VAR_5->efi_parts[VAR_7].p_size);
   }
   return (VAR_0);
  }
  if (VAR_5->efi_parts[VAR_7].p_tag == VAR_2) {
   if (FUNC_1((uchar_t *)&VAR_5->efi_parts[VAR_7].p_guid))
    continue;

   VAR_5->efi_parts[VAR_7].p_tag = 0xff;
  }
  if (VAR_5->efi_parts[VAR_7].p_tag == VAR_1) {
   if (VAR_6 != -1) {
    if (VAR_3) {
     (void) FUNC_0(VAR_4, "found "
         "duplicate reserved partition "
         "at %d\n", VAR_7);
    }
    return (VAR_0);
   }
   VAR_6 = VAR_7;
  }
  if ((VAR_5->efi_parts[VAR_7].p_start < VAR_5->efi_first_u_lba) ||
      (VAR_5->efi_parts[VAR_7].p_start > VAR_5->efi_last_u_lba)) {
   if (VAR_3) {
    (void) FUNC_0(VAR_4,
        "Partition %d starts at %d.  ",
        VAR_7,
        VAR_5->efi_parts[VAR_7].p_start);
    (void) FUNC_0(VAR_4,
        "It must be between %d and %d.\n",
        VAR_5->efi_first_u_lba,
        VAR_5->efi_last_u_lba);
   }
   return (VAR_0);
  }
  if ((VAR_5->efi_parts[VAR_7].p_start +
      VAR_5->efi_parts[VAR_7].p_size <
      VAR_5->efi_first_u_lba) ||
      (VAR_5->efi_parts[VAR_7].p_start +
      VAR_5->efi_parts[VAR_7].p_size >
      VAR_5->efi_last_u_lba + 1)) {
   if (VAR_3) {
    (void) FUNC_0(VAR_4,
        "Partition %d ends at %d.  ",
        VAR_7,
        VAR_5->efi_parts[VAR_7].p_start +
        VAR_5->efi_parts[VAR_7].p_size);
    (void) FUNC_0(VAR_4,
        "It must be between %d and %d.\n",
        VAR_5->efi_first_u_lba,
        VAR_5->efi_last_u_lba);
   }
   return (VAR_0);
  }

  for (VAR_8 = 0; VAR_8 < VAR_5->efi_nparts; VAR_8++) {
   VAR_11 = VAR_5->efi_parts[VAR_7].p_size;
   VAR_12 = VAR_5->efi_parts[VAR_8].p_size;
   VAR_9 = VAR_5->efi_parts[VAR_7].p_start;
   VAR_10 = VAR_5->efi_parts[VAR_8].p_start;
   if ((VAR_7 != VAR_8) && (VAR_11 != 0) && (VAR_12 != 0)) {
    VAR_13 = VAR_10 + VAR_12 -1;
    if ((VAR_10 <= VAR_9) &&
        (VAR_9 <= VAR_13)) {
     if (VAR_3) {
      (void) FUNC_0(VAR_4,
          "Partition %d overlaps "
          "partition %d.", VAR_7, VAR_8);
     }
     return (VAR_0);
    }
   }
  }
 }

 if ((VAR_6 == -1) && VAR_3) {
  (void) FUNC_0(VAR_4,
      "no reserved partition found\n");
 }
 return (0);
}
