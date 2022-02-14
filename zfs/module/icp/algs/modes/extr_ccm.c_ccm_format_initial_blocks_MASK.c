
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uchar_t ;
struct TYPE_3__ {int ccm_mac_len; int ccm_data_len; int ccm_counter_mask; scalar_t__ ccm_cb; } ;
typedef TYPE_1__ ccm_ctx_t ;


 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(uchar_t *VAR_0, ulong_t VAR_1,
    ulong_t VAR_2, uint8_t *VAR_3, ccm_ctx_t *VAR_4)
{
 uint64_t VAR_5;
 uint8_t VAR_6, VAR_7, VAR_8 = 0;
 size_t VAR_9;
 int VAR_10, VAR_11, VAR_12;
 uint64_t VAR_13 = 0;
 uint8_t *VAR_14;

 VAR_7 = (uint8_t)((15 - VAR_1) & 0xFF);
 VAR_6 = (uint8_t)((VAR_4->ccm_mac_len) & 0xFF);


 if (VAR_2 > 0) {
  VAR_8 = 1;
 }
 VAR_3[0] = (VAR_8 << 6) | (((VAR_6 - 2) / 2) << 3) | (VAR_7 - 1);


 FUNC_0(VAR_0, &(VAR_3[1]), VAR_1);


 FUNC_1(&(VAR_3[1+VAR_1]), VAR_7);

 VAR_5 = VAR_4->ccm_data_len;
 VAR_9 = 8 < VAR_7 ? 8 : VAR_7;

 for (VAR_10 = 0, VAR_11 = 0, VAR_12 = 15; VAR_10 < VAR_9; VAR_10++, VAR_11 += 8, VAR_12--) {
  VAR_3[VAR_12] = (uint8_t)((VAR_5 >> VAR_11) & 0xFF);
 }



 VAR_14 = (uint8_t *)VAR_4->ccm_cb;

 VAR_14[0] = 0x07 & (VAR_7-1);


 FUNC_0(VAR_0, &(VAR_14[1]), VAR_1);

 FUNC_1(&(VAR_14[1+VAR_1]), VAR_7);


 VAR_7 <<= 3;
 while (VAR_7-- > 0) {
  VAR_13 |= (1ULL << VAR_7);
 }




 VAR_4->ccm_counter_mask = VAR_13;
 VAR_14[15] = 0x01;
}
