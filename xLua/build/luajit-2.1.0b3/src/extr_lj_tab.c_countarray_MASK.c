
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {scalar_t__ asize; int array; } ;
typedef int TValue ;
typedef TYPE_1__ GCtab ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static uint32_t FUNC_2(const GCtab *VAR_1, uint32_t *VAR_2)
{
  uint32_t VAR_3, VAR_4, VAR_5;
  if (VAR_1->asize == 0) return 0;
  for (VAR_3 = VAR_5 = VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    uint32_t VAR_6, VAR_7 = 2u << VAR_4;
    TValue *VAR_8;
    if (VAR_7 >= VAR_1->asize) {
      VAR_7 = VAR_1->asize-1;
      if (VAR_5 > VAR_7)
 break;
    }
    VAR_8 = FUNC_1(VAR_1->array);
    for (VAR_6 = 0; VAR_5 <= VAR_7; VAR_5++)
      if (!FUNC_0(&VAR_8[VAR_5]))
 VAR_6++;
    VAR_2[VAR_4] += VAR_6;
    VAR_3 += VAR_6;
  }
  return VAR_3;
}
