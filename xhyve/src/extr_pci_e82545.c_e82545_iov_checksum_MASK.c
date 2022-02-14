
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iovec {size_t iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint16_t
FUNC_3(struct iovec *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 uint32_t VAR_6 = 0, VAR_7;


 while (VAR_1 > 0 && VAR_0->iov_len <= (size_t)VAR_2 && VAR_2 > 0) {
  VAR_2 -= VAR_0->iov_len;
  VAR_0++;
  VAR_1--;
 }


 VAR_5 = 0;
 while (VAR_3 > 0 && VAR_1 > 0) {
  VAR_4 = FUNC_0(VAR_3, (int)(VAR_0->iov_len - (size_t)VAR_2));
  VAR_7 = FUNC_1((uint8_t *)VAR_0->iov_base + VAR_2, VAR_4);
  VAR_6 += VAR_5 ? (VAR_7 << 8) : VAR_7;
  VAR_5 ^= (VAR_4 & 1);
  VAR_3 -= VAR_4;
  VAR_2 = 0;
  VAR_0++;
  VAR_1--;
 }

 return (FUNC_2(VAR_6));
}
