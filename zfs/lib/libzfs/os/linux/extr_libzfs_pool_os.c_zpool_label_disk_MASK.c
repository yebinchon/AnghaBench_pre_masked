
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zpool_start_block; int zpool_config; } ;
typedef TYPE_2__ zpool_handle_t ;
typedef scalar_t__ uint64_t ;
struct dk_gpt {scalar_t__ efi_last_u_lba; TYPE_1__* efi_parts; } ;
typedef int path ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef scalar_t__ diskaddr_t ;
struct TYPE_4__ {size_t p_size; int p_tag; scalar_t__ p_start; int p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int ,struct dk_gpt**) ;
 int FUNC_4 (struct dk_gpt*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct dk_gpt*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int **) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int,char*,char*,...) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int *,int ,char*) ;
 int FUNC_17 (int *,char*,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (int ,int ) ;

int
FUNC_21(libzfs_handle_t *VAR_22, zpool_handle_t *VAR_23, char *VAR_24)
{
 char VAR_25[VAR_11];
 struct dk_gpt *VAR_26;
 int VAR_27, VAR_28;
 size_t VAR_29 = VAR_3;
 uint64_t VAR_30;
 diskaddr_t VAR_31;
 char VAR_32[1024];


 (void) FUNC_13(VAR_32, sizeof (VAR_32),
     FUNC_2(VAR_17, "cannot label '%s'"), VAR_24);

 if (VAR_23) {
  nvlist_t *VAR_33;

  FUNC_14(FUNC_11(VAR_23->zpool_config,
      VAR_20, &VAR_33) == 0);

  if (VAR_23->zpool_start_block == 0)
   VAR_31 = FUNC_7(VAR_33);
  else
   VAR_31 = VAR_23->zpool_start_block;
  VAR_23->zpool_start_block = VAR_31;
 } else {

  VAR_31 = VAR_12;
 }

 (void) FUNC_13(VAR_25, sizeof (VAR_25), "%s/%s", VAR_2, VAR_24);

 if ((VAR_28 = FUNC_12(VAR_25, VAR_15|VAR_13|VAR_14)) < 0) {




  FUNC_17(VAR_22, FUNC_2(VAR_17, "cannot "
      "label '%s': unable to open device: %d"), VAR_25, VAR_21);
  return (FUNC_16(VAR_22, VAR_9, VAR_32));
 }

 if (FUNC_3(VAR_28, VAR_4, &VAR_26) != 0) {




  if (VAR_21 == VAR_6)
   (void) FUNC_10(VAR_22);

  (void) FUNC_1(VAR_28);
  FUNC_17(VAR_22, FUNC_2(VAR_17, "cannot "
      "label '%s': unable to read disk capacity"), VAR_25);

  return (FUNC_16(VAR_22, VAR_8, VAR_32));
 }

 VAR_30 = VAR_26->efi_last_u_lba + 1;
 VAR_30 -= VAR_3;
 if (VAR_31 == VAR_10)
  VAR_31 = VAR_12;
 VAR_30 -= VAR_31;
 VAR_30 = FUNC_0(VAR_30, VAR_16);

 VAR_26->efi_parts[0].p_start = VAR_31;
 VAR_26->efi_parts[0].p_size = VAR_30;
 VAR_26->efi_parts[0].p_tag = VAR_19;
 FUNC_20(VAR_26->efi_parts[0].p_name, VAR_5);

 VAR_26->efi_parts[8].p_start = VAR_30 + VAR_31;
 VAR_26->efi_parts[8].p_size = VAR_29;
 VAR_26->efi_parts[8].p_tag = VAR_18;

 VAR_27 = FUNC_6(VAR_28, VAR_26);


 (void) FUNC_8(VAR_28);
 (void) FUNC_9(VAR_28, VAR_0);

 if (VAR_27 == 0)
  VAR_27 = FUNC_5(VAR_28);






 if (VAR_27 != 0) {
  (void) FUNC_1(VAR_28);
  FUNC_4(VAR_26);

  FUNC_17(VAR_22, FUNC_2(VAR_17, "try using "
      "parted(8) and then provide a specific slice: %d"), VAR_27);
  return (FUNC_16(VAR_22, VAR_7, VAR_32));
 }

 (void) FUNC_1(VAR_28);
 FUNC_4(VAR_26);

 (void) FUNC_13(VAR_25, sizeof (VAR_25), "%s/%s", VAR_2, VAR_24);
 (void) FUNC_15(VAR_25, VAR_11);


 VAR_27 = FUNC_19(VAR_25, VAR_1);
 if (VAR_27) {
  FUNC_17(VAR_22, FUNC_2(VAR_17, "failed to "
      "detect device partitions on '%s': %d"), VAR_25, VAR_27);
  return (FUNC_16(VAR_22, VAR_7, VAR_32));
 }


 (void) FUNC_13(VAR_25, sizeof (VAR_25), "%s/%s", VAR_2, VAR_24);
 VAR_27 = FUNC_18(VAR_25);
 if (VAR_27) {
  FUNC_17(VAR_22, FUNC_2(VAR_17, "freshly written "
      "EFI label on '%s' is damaged.  Ensure\nthis device "
      "is not in use, and is functioning properly: %d"),
      VAR_25, VAR_27);
  return (FUNC_16(VAR_22, VAR_7, VAR_32));
 }
 return (0);
}
