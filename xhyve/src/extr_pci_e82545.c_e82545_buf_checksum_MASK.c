
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static uint16_t
FUNC_3(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4 = 0;


    VAR_3 = VAR_1 - (VAR_1 & 1);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2 += 2)
  VAR_4 += FUNC_2(VAR_0 + VAR_2);






 if (VAR_2 < VAR_1)
  VAR_4 += FUNC_1(VAR_0[VAR_2] << 8);

 return (FUNC_0(VAR_4));
}
