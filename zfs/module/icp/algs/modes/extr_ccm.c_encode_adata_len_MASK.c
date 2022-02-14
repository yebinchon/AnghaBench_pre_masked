
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long ulong_t ;
typedef int uint8_t ;
typedef void* uint64_t ;
typedef void* uint32_t ;


 void* FUNC_0 (unsigned long long) ;

__attribute__((used)) static void
FUNC_1(ulong_t VAR_0, uint8_t *VAR_1, size_t *VAR_2)
{







 if (VAR_0 < ((1ULL<<16) - (1ULL<<8))) {

  *VAR_2 = 2;
  VAR_1[0] = (VAR_0 & 0xff00) >> 8;
  VAR_1[1] = VAR_0 & 0xff;

 } else if ((VAR_0 >= ((1ULL<<16) - (1ULL<<8))) &&
     (VAR_0 < (1ULL << 31))) {

  *VAR_2 = 6;
  VAR_1[0] = 0xff;
  VAR_1[1] = 0xfe;




  VAR_1[2] = (VAR_0 & 0xff000000) >> 24;
  VAR_1[3] = (VAR_0 & 0xff0000) >> 16;
  VAR_1[4] = (VAR_0 & 0xff00) >> 8;
  VAR_1[5] = VAR_0 & 0xff;



 } else {

  *VAR_2 = 10;
  VAR_1[0] = 0xff;
  VAR_1[1] = 0xff;




  VAR_1[2] = (VAR_0 & 0xff00000000000000) >> 56;
  VAR_1[3] = (VAR_0 & 0xff000000000000) >> 48;
  VAR_1[4] = (VAR_0 & 0xff0000000000) >> 40;
  VAR_1[5] = (VAR_0 & 0xff00000000) >> 32;
  VAR_1[6] = (VAR_0 & 0xff000000) >> 24;
  VAR_1[7] = (VAR_0 & 0xff0000) >> 16;
  VAR_1[8] = (VAR_0 & 0xff00) >> 8;
  VAR_1[9] = VAR_0 & 0xff;


 }
}
