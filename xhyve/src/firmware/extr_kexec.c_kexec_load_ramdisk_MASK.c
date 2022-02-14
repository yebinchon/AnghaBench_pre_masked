
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {int version; size_t initrd_addr_max; size_t ramdisk_image; size_t ramdisk_size; } ;
struct zero_page {size_t ext_ramdisk_image; size_t ext_ramdisk_size; TYPE_1__ setup_header; } ;
struct TYPE_6__ {size_t size; scalar_t__ base; } ;
struct TYPE_5__ {size_t base; size_t size; } ;
typedef int FILE ;


 size_t FUNC_0 (size_t,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (void*,int,size_t,int *) ;
 int FUNC_4 (int *,long,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int
FUNC_6(char *VAR_5) {
 uint64_t VAR_6;
 uint32_t VAR_7;
 volatile struct zero_page *VAR_8;
 size_t VAR_9;
 FILE *VAR_10;

 VAR_8 = ((struct zero_page *) (VAR_3.base + VAR_0));

 if (!(VAR_10 = FUNC_2(VAR_5, "r"))) {;
  return -1;
 }

 FUNC_4(VAR_10, 0L, VAR_1);
 VAR_9 = (size_t) FUNC_5(VAR_10);
 FUNC_4(VAR_10, 0, VAR_2);


 if (VAR_8->setup_header.version >= 0x203) {
  VAR_7 = VAR_8->setup_header.initrd_addr_max;
 } else {
  VAR_7 = 0x37ffffff;
 }

 if (VAR_7 >= VAR_3.size) {
  VAR_7 = ((uint32_t) VAR_3.size - 1);
 }

 VAR_6 = FUNC_0(VAR_7 - VAR_9, 0x1000ull);

 if ((VAR_6 + VAR_9) > VAR_3.size) {

  FUNC_1(VAR_10);
  return -1;
 }


 if (!FUNC_3(((void *) (VAR_3.base + VAR_6)), 1, VAR_9, VAR_10)) {
  FUNC_1(VAR_10);
  return -1;
 }

 FUNC_1(VAR_10);

 VAR_8->setup_header.ramdisk_image = ((uint32_t) VAR_6);
 VAR_8->ext_ramdisk_image = ((uint32_t) (VAR_6 >> 32));
 VAR_8->setup_header.ramdisk_size = ((uint32_t) VAR_9);
 VAR_8->ext_ramdisk_size = ((uint32_t) (VAR_9 >> 32));

 VAR_4.base = VAR_6;
 VAR_4.size = VAR_9;

 return 0;
}
