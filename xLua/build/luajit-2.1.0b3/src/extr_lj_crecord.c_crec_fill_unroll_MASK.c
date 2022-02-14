
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp; scalar_t__ ofs; } ;
typedef size_t MSize ;
typedef int IRType ;
typedef scalar_t__ CTSize ;
typedef TYPE_1__ CRecMemList ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static MSize FUNC_1(CRecMemList *VAR_2, CTSize VAR_3, CTSize VAR_4)
{
  CTSize VAR_5 = 0;
  MSize VAR_6 = 0;
  IRType VAR_7 = VAR_1 + 2*FUNC_0(VAR_4);
  do {
    while (VAR_5 + VAR_4 <= VAR_3) {
      if (VAR_6 >= VAR_0) return 0;
      VAR_2[VAR_6].ofs = VAR_5;
      VAR_2[VAR_6].tp = VAR_7;
      VAR_6++;
      VAR_5 += VAR_4;
    }
    VAR_4 >>= 1;
    VAR_7 -= 2;
  } while (VAR_5 < VAR_3);
  return VAR_6;
}
