
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int op_byte; } ;
struct vie {int opsize; size_t reg; int immediate; TYPE_1__ op; } ;
typedef int (* mem_region_write_t ) (void*,int,int,int,int,void*) ;
typedef int (* mem_region_read_t ) (void*,int,int,int*,int,void*) ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (void*,int,struct vie*,int*) ;
 int FUNC_1 (void*,int,int,int*) ;
 int FUNC_2 (void*,int,int,int,int) ;
 int FUNC_3 (void*,int,struct vie*,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4, int VAR_5, uint64_t VAR_6, struct vie *VAR_7,
     mem_region_read_t VAR_8, mem_region_write_t VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12;
 enum vm_reg_name VAR_13;
 uint8_t VAR_14;
 uint64_t VAR_15;

 VAR_12 = VAR_7->opsize;
 VAR_11 = VAR_0;

 switch (VAR_7->op.op_byte) {
 case 0x88:





  VAR_12 = 1;
  VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_7, &VAR_14);
  if (VAR_11 == 0)
   VAR_11 = VAR_9(VAR_4, VAR_5, VAR_6, VAR_14, VAR_12, VAR_10);
  break;
 case 0x89:






  VAR_13 = VAR_2[VAR_7->reg];
  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_13, &VAR_15);
  if (VAR_11 == 0) {
   VAR_15 &= VAR_3[VAR_12];
   VAR_11 = VAR_9(VAR_4, VAR_5, VAR_6, VAR_15, VAR_12, VAR_10);
  }
  break;
 case 0x8A:





  VAR_12 = 1;
  VAR_11 = VAR_8(VAR_4, VAR_5, VAR_6, &VAR_15, VAR_12, VAR_10);
  if (VAR_11 == 0)
   VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_7, ((uint8_t) VAR_15));
  break;
 case 0x8B:






  VAR_11 = VAR_8(VAR_4, VAR_5, VAR_6, &VAR_15, VAR_12, VAR_10);
  if (VAR_11 == 0) {
   VAR_13 = VAR_2[VAR_7->reg];
   VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_13, VAR_15, VAR_12);
  }
  break;
 case 0xA1:






  VAR_11 = VAR_8(VAR_4, VAR_5, VAR_6, &VAR_15, VAR_12, VAR_10);
  if (VAR_11 == 0) {
   VAR_13 = VAR_1;
   VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_13, VAR_15, VAR_12);
  }
  break;
 case 0xA3:






  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_1, &VAR_15);
  if (VAR_11 == 0) {
   VAR_15 &= VAR_3[VAR_12];
   VAR_11 = VAR_9(VAR_4, VAR_5, VAR_6, VAR_15, VAR_12, VAR_10);
  }
  break;
 case 0xC6:





  VAR_12 = 1;
  VAR_11 = VAR_9(VAR_4, VAR_5, VAR_6, ((uint64_t) VAR_7->immediate), VAR_12,
   VAR_10);
  break;
 case 0xC7:






  VAR_15 = ((uint64_t) VAR_7->immediate) & VAR_3[VAR_12];
  VAR_11 = VAR_9(VAR_4, VAR_5, VAR_6, VAR_15, VAR_12, VAR_10);
  break;
 default:
  break;
 }

 return (VAR_11);
}
