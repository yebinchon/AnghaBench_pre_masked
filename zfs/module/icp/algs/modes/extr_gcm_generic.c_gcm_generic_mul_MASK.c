
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct aes_block {int a; unsigned long long b; int member_1; int member_0; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_0, uint64_t *VAR_1, uint64_t *VAR_2)
{
 static const uint64_t VAR_3 = 0xe100000000000000ULL;
 struct aes_block VAR_4 = {0, 0};
 struct aes_block VAR_5;
 uint64_t VAR_6;
 int VAR_7, VAR_8;

 VAR_5.a = FUNC_1(VAR_1[0]);
 VAR_5.b = FUNC_1(VAR_1[1]);

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_6 = FUNC_1(VAR_0[VAR_8]);
  for (VAR_7 = 0; VAR_7 < 64; VAR_7++, VAR_6 <<= 1) {
   if (VAR_6 & 0x8000000000000000ULL) {
    VAR_4.a ^= VAR_5.a;
    VAR_4.b ^= VAR_5.b;
   }
   if (VAR_5.b & 1ULL) {
    VAR_5.b = (VAR_5.a << 63)|(VAR_5.b >> 1);
    VAR_5.a = (VAR_5.a >> 1) ^ VAR_3;
   } else {
    VAR_5.b = (VAR_5.a << 63)|(VAR_5.b >> 1);
    VAR_5.a = VAR_5.a >> 1;
   }
  }
 }
 VAR_2[0] = FUNC_0(VAR_4.a);
 VAR_2[1] = FUNC_0(VAR_4.b);
}
