
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, int VAR_2, uint8_t *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += 2) {
  if (!FUNC_0(VAR_1[VAR_5]) || !FUNC_0(VAR_1[VAR_5 + 1])) {
   VAR_4 = VAR_0;
   goto error;
  }

  VAR_4 = FUNC_1(&VAR_1[VAR_5], "%02x", &VAR_6);
  if (VAR_4 != 1) {
   VAR_4 = VAR_0;
   goto error;
  }

  VAR_3[VAR_5 / 2] = VAR_6;
 }

 return (0);

error:
 return (VAR_4);
}
