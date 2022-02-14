
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dk_gpt {int efi_nparts; int efi_first_u_lba; int efi_last_u_lba; TYPE_1__* efi_parts; } ;
typedef int diskaddr_t ;
struct TYPE_2__ {scalar_t__ p_tag; int p_size; int p_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;

void
FUNC_1(struct dk_gpt *VAR_4)
{
 int VAR_5 = -1;
 int VAR_6, VAR_7;
 diskaddr_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;




 for (VAR_6 = 0; VAR_6 < VAR_4->efi_nparts; VAR_6++) {

  if ((VAR_4->efi_parts[VAR_6].p_tag == VAR_2) &&
      (VAR_4->efi_parts[VAR_6].p_size != 0)) {
   (void) FUNC_0(VAR_3,
       "partition %d is \"unassigned\" but has a size "
       "of %d\n", VAR_6, VAR_4->efi_parts[VAR_6].p_size);
  }
  if (VAR_4->efi_parts[VAR_6].p_tag == VAR_2) {
   continue;
  }
  if (VAR_4->efi_parts[VAR_6].p_tag == VAR_1) {
   if (VAR_5 != -1) {
    (void) FUNC_0(VAR_3,
        "found duplicate reserved partition at "
        "%d\n", VAR_6);
   }
   VAR_5 = VAR_6;
   if (VAR_4->efi_parts[VAR_6].p_size != VAR_0)
    (void) FUNC_0(VAR_3,
        "Warning: reserved partition size must "
        "be %d sectors\n", VAR_0);
  }
  if ((VAR_4->efi_parts[VAR_6].p_start < VAR_4->efi_first_u_lba) ||
      (VAR_4->efi_parts[VAR_6].p_start > VAR_4->efi_last_u_lba)) {
   (void) FUNC_0(VAR_3,
       "Partition %d starts at %d\n",
       VAR_6,
       VAR_4->efi_parts[VAR_6].p_start);
   (void) FUNC_0(VAR_3,
       "It must be between %d and %d.\n",
       VAR_4->efi_first_u_lba,
       VAR_4->efi_last_u_lba);
  }
  if ((VAR_4->efi_parts[VAR_6].p_start +
      VAR_4->efi_parts[VAR_6].p_size <
      VAR_4->efi_first_u_lba) ||
      (VAR_4->efi_parts[VAR_6].p_start +
      VAR_4->efi_parts[VAR_6].p_size >
      VAR_4->efi_last_u_lba + 1)) {
   (void) FUNC_0(VAR_3,
       "Partition %d ends at %d\n",
       VAR_6,
       VAR_4->efi_parts[VAR_6].p_start +
       VAR_4->efi_parts[VAR_6].p_size);
   (void) FUNC_0(VAR_3,
       "It must be between %d and %d.\n",
       VAR_4->efi_first_u_lba,
       VAR_4->efi_last_u_lba);
  }

  for (VAR_7 = 0; VAR_7 < VAR_4->efi_nparts; VAR_7++) {
   VAR_10 = VAR_4->efi_parts[VAR_6].p_size;
   VAR_11 = VAR_4->efi_parts[VAR_7].p_size;
   VAR_8 = VAR_4->efi_parts[VAR_6].p_start;
   VAR_9 = VAR_4->efi_parts[VAR_7].p_start;
   if ((VAR_6 != VAR_7) && (VAR_10 != 0) && (VAR_11 != 0)) {
    VAR_12 = VAR_9 + VAR_11 -1;
    if ((VAR_9 <= VAR_8) &&
        (VAR_8 <= VAR_12)) {
     if (!VAR_13) {
     (void) FUNC_0(VAR_3,
         "label error: EFI Labels do not "
         "support overlapping partitions\n");
     }
     (void) FUNC_0(VAR_3,
         "Partition %d overlaps partition "
         "%d.\n", VAR_6, VAR_7);
     VAR_13 = 1;
    }
   }
  }
 }

 if (VAR_5 == -1) {
  (void) FUNC_0(VAR_3,
      "no reserved partition found\n");
 }
}
