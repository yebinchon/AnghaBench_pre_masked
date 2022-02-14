
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int cTValue ;
typedef int MSize ;
typedef int GCtab ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MSize FUNC_2(GCtab *VAR_1, MSize VAR_2)
{
  cTValue *VAR_3;
  MSize VAR_4 = VAR_2;
  VAR_2++;

  while ((VAR_3 = FUNC_0(VAR_1, (int32_t)VAR_2)) && !FUNC_1(VAR_3)) {
    VAR_4 = VAR_2;
    VAR_2 *= 2;
    if (VAR_2 > (MSize)(VAR_0-2)) {

      VAR_4 = 1;
      while ((VAR_3 = FUNC_0(VAR_1, (int32_t)VAR_4)) && !FUNC_1(VAR_3)) VAR_4++;
      return VAR_4 - 1;
    }
  }

  while (VAR_2 - VAR_4 > 1) {
    MSize VAR_5 = (VAR_4+VAR_2)/2;
    cTValue *VAR_6 = FUNC_0(VAR_1, (int32_t)VAR_5);
    if (VAR_6 && !FUNC_1(VAR_6)) VAR_4 = VAR_5; else VAR_2 = VAR_5;
  }
  return VAR_4;
}
