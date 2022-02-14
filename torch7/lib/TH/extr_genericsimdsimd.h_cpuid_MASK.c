
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;

__attribute__((used)) static inline void FUNC_2(uint32_t *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
  uint32_t VAR_4 = *VAR_0, VAR_5, VAR_6 = *VAR_2, VAR_7;
  asm volatile ( "cpuid\n\t"
   : "+a"(VAR_4), "=b"(VAR_5), "+c"(VAR_6), "=d"(VAR_7) );
  *VAR_0 = VAR_4;
  *VAR_1 = VAR_5;
  *VAR_2 = VAR_6;
  *VAR_3 = VAR_7;

}
