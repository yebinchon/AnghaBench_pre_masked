
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef int uchar_t ;
struct TYPE_3__ {int ctr_flags; int * ctr_cb; int * ctr_lastp; void* ctr_upper_mask; void* ctr_lower_mask; } ;
typedef TYPE_1__ ctr_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 void* FUNC_0 (unsigned long long) ;

int
FUNC_1(ctr_ctx_t *VAR_4, ulong_t VAR_5, uint8_t *VAR_6,
    void (*VAR_7)(uint8_t *, uint8_t *))
{
 uint64_t VAR_8 = 0;
 uint64_t VAR_9 = 0;

 if (VAR_5 == 0 || VAR_5 > 128) {
  return (VAR_0);
 }

 if (VAR_5 >= 64) {
  VAR_5 -= 64;
  VAR_8 = (VAR_5 == 64) ? VAR_3 : (1ULL << VAR_5) - 1;
  VAR_9 = VAR_3;
 } else {

  VAR_9 = (1ULL << VAR_5) - 1;
 }
 VAR_4->ctr_lower_mask = FUNC_0(VAR_9);
 VAR_4->ctr_upper_mask = FUNC_0(VAR_8);

 VAR_7(VAR_6, (uchar_t *)VAR_4->ctr_cb);
 VAR_4->ctr_lastp = (uint8_t *)&VAR_4->ctr_cb[0];
 VAR_4->ctr_flags |= VAR_2;
 return (VAR_1);
}
