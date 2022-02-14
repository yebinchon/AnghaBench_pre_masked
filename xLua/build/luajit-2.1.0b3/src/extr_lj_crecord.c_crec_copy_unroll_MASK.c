
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tp; scalar_t__ ofs; } ;
typedef size_t MSize ;
typedef scalar_t__ IRType ;
typedef scalar_t__ CTSize ;
typedef TYPE_1__ CRecMemList ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static MSize FUNC_1(CRecMemList *VAR_3, CTSize VAR_4, CTSize VAR_5,
         IRType VAR_6)
{
  CTSize VAR_7 = 0;
  MSize VAR_8 = 0;
  if (VAR_6 == VAR_1) VAR_6 = VAR_2 + 2*FUNC_0(VAR_5);
  do {
    while (VAR_7 + VAR_5 <= VAR_4) {
      if (VAR_8 >= VAR_0) return 0;
      VAR_3[VAR_8].ofs = VAR_7;
      VAR_3[VAR_8].tp = VAR_6;
      VAR_8++;
      VAR_7 += VAR_5;
    }
    VAR_5 >>= 1;
    VAR_6 -= 2;
  } while (VAR_7 < VAR_4);
  return VAR_8;
}
