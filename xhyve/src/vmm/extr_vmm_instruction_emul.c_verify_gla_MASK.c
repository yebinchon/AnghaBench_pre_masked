
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int dummy; } ;
struct vie {int base_register; int index_register; int scale; size_t addrsize; scalar_t__ displacement; scalar_t__ num_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,...) ;
 int* VAR_3 ;
 int FUNC_1 (struct vm*,int,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct vm *VAR_4, int VAR_5, uint64_t VAR_6, struct vie *VAR_7)
{
 int VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11;


 if (VAR_6 == VAR_0)
  return (0);

 VAR_9 = 0;
 if (VAR_7->base_register != VAR_2) {
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7->base_register, &VAR_9);
  if (VAR_8) {
   FUNC_0("verify_gla: error %d getting base reg %d\n",
    VAR_8, VAR_7->base_register);
   return (-1);
  }





  if (VAR_7->base_register == VAR_1)
   VAR_9 += VAR_7->num_valid;
 }

 VAR_10 = 0;
 if (VAR_7->index_register != VAR_2) {
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7->index_register, &VAR_10);
  if (VAR_8) {
   FUNC_0("verify_gla: error %d getting index reg %d\n",
    VAR_8, VAR_7->index_register);
   return (-1);
  }
 }


 VAR_11 = VAR_9 + VAR_7->scale * VAR_10 + ((uint64_t) VAR_7->displacement);
 VAR_11 &= VAR_3[VAR_7->addrsize];
 if (VAR_6 != VAR_11) {
  FUNC_0("verify_gla mismatch: "
         "base(0x%0llx), scale(%d), index(0x%0llx), "
         "disp(0x%0llx), gla(0x%0llx), gla2(0x%0llx)\n",
         VAR_9, VAR_7->scale, VAR_10, VAR_7->displacement, VAR_6, VAR_11);
  return (-1);
 }

 return (0);
}
