
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct vie {int disp_bytes; int displacement; } ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (struct vie*) ;
 scalar_t__ FUNC_1 (struct vie*,scalar_t__*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct vie *VAR_0)
{
 int VAR_1, VAR_2;
 uint8_t VAR_3;

 union {
  char buf[4];
  int8_t signed8;
  int32_t signed32;
 } VAR_4;

 if ((VAR_1 = VAR_0->disp_bytes) == 0)
  return (0);

 if (VAR_1 != 1 && VAR_1 != 4)
  FUNC_2("decode_displacement: invalid disp_bytes %d\n", VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_1(VAR_0, &VAR_3))
   return (-1);

  VAR_4.buf[VAR_2] = (char) VAR_3;
  FUNC_0(VAR_0);
 }

 if (VAR_1 == 1)
  VAR_0->displacement = VAR_4.signed8;
 else
  VAR_0->displacement = VAR_4.signed32;

 return (0);
}
