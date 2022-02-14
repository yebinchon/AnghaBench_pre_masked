
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_t ;
struct dk_gpt {int efi_nparts; int efi_first_u_lba; int efi_last_lba; int efi_altern_lba; int efi_last_u_lba; TYPE_1__* efi_parts; } ;
typedef scalar_t__ diskaddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ p_start; scalar_t__ p_size; scalar_t__ p_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,struct dk_gpt**) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct dk_gpt*) ;
 int FUNC_3 (int,struct dk_gpt*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_8 ;

int
FUNC_5(int VAR_9)
{
 struct dk_gpt *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12;
 uint_t VAR_13 = 0, VAR_14 = 0;
 diskaddr_t VAR_15 = 0, VAR_16 = 0;
 diskaddr_t VAR_17, VAR_18, VAR_19;
 boolean_t VAR_20 = VAR_0;
 uint_t VAR_21;

 VAR_11 = FUNC_1(VAR_9, &VAR_10);
 if (VAR_11 < 0) {
  if (VAR_10 != ((void*)0))
   FUNC_2(VAR_10);
  return (VAR_11);
 }





 for (VAR_12 = 0; VAR_12 < VAR_10->efi_nparts; VAR_12 ++) {
  if (VAR_15 < VAR_10->efi_parts[VAR_12].p_start) {
   VAR_15 = VAR_10->efi_parts[VAR_12].p_start;
   VAR_13 = VAR_12;
  }
 }





 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12 ++) {
  if (VAR_16 < VAR_10->efi_parts[VAR_12].p_start) {
   VAR_16 = VAR_10->efi_parts[VAR_12].p_start;
   VAR_14 = VAR_12;
  }
 }
 VAR_17 = VAR_10->efi_parts[VAR_14].p_size;





 VAR_21 = VAR_10->efi_first_u_lba - 1;
 VAR_18 = FUNC_0(VAR_10->efi_last_lba - VAR_21 - VAR_2,
     VAR_3);
 if (VAR_16 + VAR_17 != VAR_18 || VAR_15 != VAR_18)
  VAR_20 = VAR_1;

 if (VAR_7 && VAR_20)
  (void) FUNC_4(VAR_8, "efi_use_whole_disk: sync needed\n");






 if ((VAR_10->efi_altern_lba == 1) || (VAR_10->efi_altern_lba
     >= VAR_10->efi_last_lba && !VAR_20)) {
  if (VAR_7) {
   (void) FUNC_4(VAR_8,
       "efi_use_whole_disk: requested space not found\n");
  }
  FUNC_2(VAR_10);
  return (VAR_5);
 }







 if ((VAR_10->efi_parts[VAR_13].p_size != VAR_2) ||
     (VAR_10->efi_parts[VAR_13].p_tag != VAR_6) ||
     (VAR_13 != 8)) {
  if (VAR_7) {
   (void) FUNC_4(VAR_8,
       "efi_use_whole_disk: wholedisk not available\n");
  }
  FUNC_2(VAR_10);
  return (VAR_5);
 }

 if (VAR_16 + VAR_17 != VAR_15) {
  if (VAR_7) {
   (void) FUNC_4(VAR_8,
       "efi_use_whole_disk: "
       "data_start (%li) + "
       "data_size (%li) != "
       "resv_start (%li)\n",
       VAR_16, VAR_17, VAR_15);
  }

  return (VAR_4);
 }

 if (VAR_18 < VAR_15) {
  if (VAR_7) {
   (void) FUNC_4(VAR_8,
       "efi_use_whole_disk: "
       "limit (%li) < resv_start (%li)\n",
       VAR_18, VAR_15);
  }

  return (VAR_4);
 }

 VAR_19 = VAR_18 - VAR_15;

 if (VAR_7)
  (void) FUNC_4(VAR_8,
      "efi_use_whole_disk: difference is %li\n", VAR_19);






 VAR_10->efi_parts[VAR_14].p_size += VAR_19;
 VAR_10->efi_parts[VAR_13].p_start += VAR_19;
 VAR_10->efi_last_u_lba = VAR_10->efi_last_lba - VAR_21;

 VAR_11 = FUNC_3(VAR_9, VAR_10);
 if (VAR_11 < 0) {
  if (VAR_7) {
   (void) FUNC_4(VAR_8,
       "efi_use_whole_disk:fail to write label, rval=%d\n",
       VAR_11);
  }
  FUNC_2(VAR_10);
  return (VAR_11);
 }

 FUNC_2(VAR_10);
 return (0);
}
