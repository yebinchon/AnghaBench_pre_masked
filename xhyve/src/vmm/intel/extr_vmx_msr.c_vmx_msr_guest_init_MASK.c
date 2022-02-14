
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int** guest_msrs; } ;
typedef int hv_vcpuid_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct vmx *VAR_10, int VAR_11)
{
 uint64_t *VAR_12;

 VAR_12 = VAR_10->guest_msrs[VAR_11];


 FUNC_1(((hv_vcpuid_t) VAR_11), VAR_3, 1);
 FUNC_1(((hv_vcpuid_t) VAR_11), VAR_1, 1);
 FUNC_1(((hv_vcpuid_t) VAR_11), VAR_5, 1);
 FUNC_1(((hv_vcpuid_t) VAR_11), VAR_4, 1);
 FUNC_1(((hv_vcpuid_t) VAR_11), VAR_2, 1);




 VAR_12[VAR_0] = FUNC_0(0, VAR_8) |
  FUNC_0(1, VAR_9) |
  FUNC_0(2, VAR_7) |
  FUNC_0(3, VAR_6) |
  FUNC_0(4, VAR_8) |
  FUNC_0(5, VAR_9) |
  FUNC_0(6, VAR_7) |
  FUNC_0(7, VAR_6);

 return;
}
