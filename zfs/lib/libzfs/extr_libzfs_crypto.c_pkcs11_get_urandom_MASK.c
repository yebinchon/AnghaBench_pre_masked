
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 size_t FUNC_2 (int,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(uint8_t *VAR_1, size_t VAR_2)
{
 int VAR_3;
 ssize_t VAR_4 = 0;

 VAR_3 = FUNC_1("/dev/urandom", VAR_0);

 if (VAR_3 < 0)
  return (VAR_3);

 while (VAR_4 < VAR_2) {
  ssize_t VAR_5 = FUNC_2(VAR_3, VAR_1 + VAR_4, VAR_2 - VAR_4);
  if (VAR_5 < 0)
   break;
  VAR_4 += VAR_5;
 }

 (void) FUNC_0(VAR_3);

 return (VAR_4);
}
