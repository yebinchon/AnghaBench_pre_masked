
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct vie {int dummy; } ;
typedef int mem_region_write_t ;
typedef int mem_region_read_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;

int
FUNC_2(int VAR_1, uint64_t VAR_2, struct vie *VAR_3,
 struct vm_guest_paging *VAR_4, mem_region_read_t VAR_5,
 mem_region_write_t VAR_6, void *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_1, 1);
 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
  VAR_6, VAR_7);
 FUNC_0(VAR_1, 0);

 return (VAR_8);
}
