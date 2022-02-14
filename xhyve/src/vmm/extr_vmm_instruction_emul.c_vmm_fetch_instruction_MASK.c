
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct vm_copyinfo {int dummy; } ;
struct vm {int dummy; } ;
struct vie {scalar_t__ num_valid; int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_copyinfo*) ;
 int FUNC_1 (struct vm*,int,struct vm_guest_paging*,int ,size_t,int,struct vm_copyinfo*,int ,int*) ;
 int FUNC_2 (struct vm*,int,struct vm_copyinfo*,int ) ;
 int FUNC_3 (struct vm*,int,struct vm_copyinfo*,int ,size_t) ;
 int FUNC_4 (char*,int) ;

int
FUNC_5(struct vm *VAR_3, int VAR_4, struct vm_guest_paging *VAR_5,
    uint64_t VAR_6, int VAR_7, struct vie *VAR_8, int *VAR_9)
{
 struct vm_copyinfo VAR_10[2];
 int VAR_11, VAR_12;

 if (VAR_7 > VAR_0)
  FUNC_4("vmm_fetch_instruction: invalid length %d\n", VAR_7);

 VAR_12 = VAR_2 | VAR_1;
 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, ((size_t) VAR_7), VAR_12,
     VAR_10, FUNC_0(VAR_10), VAR_9);
 if (VAR_11 || *VAR_9)
  return (VAR_11);

 FUNC_3(VAR_3, VAR_4, VAR_10, VAR_8->inst, ((size_t) VAR_7));
 FUNC_2(VAR_3, VAR_4, VAR_10, FUNC_0(VAR_10));
 VAR_8->num_valid = (uint8_t) VAR_7;
 return (0);
}
