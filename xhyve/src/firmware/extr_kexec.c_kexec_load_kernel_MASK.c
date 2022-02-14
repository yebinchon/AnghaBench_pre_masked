
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int setup_sects; int boot_flag; scalar_t__ header; int version; int loadflags; int syssize; size_t init_size; int kernel_alignment; size_t pref_address; size_t cmdline_size; int cmd_line_ptr; int type_of_loader; scalar_t__ hardware_subarch; scalar_t__ relocatable_kernel; } ;
struct zero_page {int ext_cmd_line_ptr; int alt_mem_k; int e820_entries; TYPE_2__* e820_map; TYPE_1__ setup_header; } ;
struct setup_header {int dummy; } ;
typedef size_t off_t ;
struct TYPE_8__ {size_t base; size_t size; } ;
struct TYPE_7__ {size_t size; size_t base; } ;
struct TYPE_6__ {int addr; int size; int type; } ;
typedef int FILE ;


 size_t FUNC_0 (size_t,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (void*,int,size_t,int *) ;
 int FUNC_4 (int *,long,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_6 (void*,char*,size_t) ;
 int FUNC_7 (void*,char,int) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(char *VAR_8, char *VAR_9) {
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 size_t VAR_15, VAR_16;
 volatile struct zero_page *VAR_17;
 FILE *VAR_18;

 if ((VAR_7.size < (VAR_2 + sizeof(struct zero_page))) ||
  ((VAR_2 + sizeof(struct zero_page)) > VAR_0))
 {
  return -1;
 }

 VAR_17 = ((struct zero_page *) (VAR_7.base + ((off_t) VAR_2)));

 FUNC_7(((void *) ((uintptr_t) VAR_17)), 0, sizeof(struct zero_page));

 if (!(VAR_18 = FUNC_2(VAR_8, "r"))) {
  return -1;
 }

 FUNC_4(VAR_18, 0L, VAR_4);
 VAR_15 = (size_t) FUNC_5(VAR_18);

 if (VAR_15 < (0x01f1 + sizeof(struct setup_header))) {
  FUNC_1(VAR_18);
  return -1;
 }

 FUNC_4(VAR_18, 0x01f1, VAR_5);

 if (!FUNC_3(((void *) ((uintptr_t) &VAR_17->setup_header)), 1,
  sizeof(VAR_17->setup_header), VAR_18))
 {
  FUNC_1(VAR_18);
  return -1;
 }

 if ((VAR_17->setup_header.setup_sects == 0) ||
  (VAR_17->setup_header.boot_flag != 0xaa55) ||
  (VAR_17->setup_header.header != VAR_3) ||
  (VAR_17->setup_header.version < 0x020a) ||
  (!(VAR_17->setup_header.loadflags & 1)) ||
  (VAR_15 < (((VAR_17->setup_header.setup_sects + 1) * 512) +
  (VAR_17->setup_header.syssize * 16))))
 {

  FUNC_1(VAR_18);
  return -1;
 }

 VAR_10 = ((VAR_17->setup_header.setup_sects + 1) * 512);
 VAR_11 = (VAR_15 - VAR_10);
 VAR_12 = FUNC_0(VAR_17->setup_header.init_size, 0x1000ull);
 VAR_13 = (VAR_17->setup_header.relocatable_kernel) ?
  FUNC_0(VAR_1, VAR_17->setup_header.kernel_alignment) :
  VAR_17->setup_header.pref_address;

 if ((VAR_13 < VAR_1) ||
   (VAR_11 > VAR_12) ||
   ((VAR_13 + VAR_12) > VAR_7.size))
 {
  FUNC_1(VAR_18);
  return -1;
 }


 FUNC_4(VAR_18, ((long) VAR_10), VAR_5);
 if (!FUNC_3(((void *) (VAR_7.base + VAR_13)), 1, VAR_11, VAR_18)) {
  FUNC_1(VAR_18);
  return -1;
 }

 FUNC_1(VAR_18);


 VAR_16 = FUNC_8(VAR_9);
 if (((VAR_16 + 1)> VAR_17->setup_header.cmdline_size) ||
  ((VAR_0 + (VAR_16 + 1)) > VAR_13))
 {
  return -1;
 }

 FUNC_6(((void *) (VAR_7.base + VAR_0)), VAR_9, VAR_16);
 FUNC_7(((void *) (VAR_7.base + VAR_0 + VAR_16)), '\0', 1);
 VAR_17->setup_header.cmd_line_ptr = ((uint32_t) VAR_0);
 VAR_17->ext_cmd_line_ptr = ((uint32_t) (VAR_0 >> 32));

 VAR_17->setup_header.hardware_subarch = 0;
 VAR_17->setup_header.type_of_loader = 0xd;

 VAR_14 = (VAR_7.size - 0x100000) >> 10;
 VAR_17->alt_mem_k = (VAR_14 > 0xffffffff) ? 0xffffffff : ((uint32_t) VAR_14);

 VAR_17->e820_map[0].addr = 0x0000000000000000;
 VAR_17->e820_map[0].size = 0x000000000009fc00;
 VAR_17->e820_map[0].type = 1;
 VAR_17->e820_map[1].addr = 0x0000000000100000;
 VAR_17->e820_map[1].size = (VAR_7.size - 0x0000000000100000);
 VAR_17->e820_map[1].type = 1;
 if (FUNC_9() == 0) {
  VAR_17->e820_entries = 2;
 } else {
  VAR_17->e820_map[2].addr = 0x0000000100000000;
  VAR_17->e820_map[2].size = FUNC_9();
  VAR_17->e820_map[2].type = 1;
  VAR_17->e820_entries = 3;
 }

 VAR_6.base = VAR_13;
 VAR_6.size = VAR_12;

 return 0;
}
