
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dk_gpt {int efi_last_u_lba; TYPE_1__* efi_parts; int efi_nparts; } ;
struct TYPE_4__ {int p_flag; int p_tag; } ;
struct TYPE_3__ {int p_start; int p_size; int p_tag; int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,struct dk_gpt**) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;

int
FUNC_3(int VAR_7, struct dk_gpt **VAR_8)
{

 int VAR_9;




 if (FUNC_1(VAR_7, VAR_0, VAR_8) != 0) {
  if (VAR_5) {
   (void) FUNC_2(VAR_6, "efi_alloc_and_init failed.\n");
  }
  return (-1);
 }

 for (VAR_9 = 0; VAR_9 < FUNC_0((*VAR_8)->efi_nparts, VAR_1); VAR_9++) {
  (*VAR_8)->efi_parts[VAR_9].p_tag = VAR_4[VAR_9].p_tag;
  (*VAR_8)->efi_parts[VAR_9].p_flag = VAR_4[VAR_9].p_flag;
  (*VAR_8)->efi_parts[VAR_9].p_start = 0;
  (*VAR_8)->efi_parts[VAR_9].p_size = 0;
 }






 (*VAR_8)->efi_parts[0].p_start = 34;
 (*VAR_8)->efi_parts[0].p_size = 262144;


 (*VAR_8)->efi_parts[1].p_start = 262178;
 (*VAR_8)->efi_parts[1].p_size = 262144;


 (*VAR_8)->efi_parts[2].p_tag = VAR_3;


 (*VAR_8)->efi_parts[6].p_start = 524322;
 (*VAR_8)->efi_parts[6].p_size = (*VAR_8)->efi_last_u_lba - 524322
     - (1024 * 16);


 (*VAR_8)->efi_parts[8].p_start = (*VAR_8)->efi_last_u_lba - (1024 * 16);
 (*VAR_8)->efi_parts[8].p_size = (1024 * 16);
 (*VAR_8)->efi_parts[8].p_tag = VAR_2;
 return (0);
}
