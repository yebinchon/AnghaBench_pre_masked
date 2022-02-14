
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct vie {int reg; } ;
typedef int mem_region_write_t ;
typedef int mem_region_read_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, int VAR_2, uint64_t VAR_3, struct vie *VAR_4,
    struct vm_guest_paging *VAR_5, mem_region_read_t VAR_6,
    mem_region_write_t VAR_7, void *VAR_8)
{
 int VAR_9;







 if ((VAR_4->reg & 7) != 0)
  return (VAR_0);

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8);
 return (VAR_9);
}
