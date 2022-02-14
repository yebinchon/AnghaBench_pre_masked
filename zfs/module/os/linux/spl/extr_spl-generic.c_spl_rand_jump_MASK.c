
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int JUMP ;


 int FUNC_0 (int*) ;

__attribute__((used)) static inline void
FUNC_1(uint64_t *VAR_0)
{
 static const uint64_t VAR_1[] =
     { 0x8a5cd789635d2dff, 0x121fd2155c472f96 };

 uint64_t VAR_2 = 0;
 uint64_t VAR_3 = 0;
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < sizeof (VAR_1) / sizeof (*VAR_1); VAR_4++)
  for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
   if (VAR_1[VAR_4] & 1ULL << VAR_5) {
    VAR_2 ^= VAR_0[0];
    VAR_3 ^= VAR_0[1];
   }
   (void) FUNC_0(VAR_0);
  }

 VAR_0[0] = VAR_2;
 VAR_0[1] = VAR_3;
}
