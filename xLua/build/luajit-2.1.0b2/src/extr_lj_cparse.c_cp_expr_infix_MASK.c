
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int u32; void* id; int i32; } ;
typedef TYPE_1__ CPValue ;
typedef int CPState ;


 void* VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,char) ;

__attribute__((used)) static void FUNC_6(CPState *VAR_10, CPValue *VAR_11, int VAR_12)
{
  CPValue VAR_13;
  VAR_13 = 0; VAR_13 = 0;
  for (;;) {
    switch (VAR_12) {
    case 0:
      if (FUNC_5(VAR_10, '?')) {
 CPValue VAR_14;
 FUNC_2(VAR_10, &VAR_13);
 FUNC_0(VAR_10, ':');
 FUNC_3(VAR_10, &VAR_14, 0);
 VAR_11->u32 = VAR_11->u32 ? VAR_13 : VAR_14;
 VAR_11->id = VAR_13 > VAR_14 ? VAR_13 : VAR_14;
 continue;
      }
    case 1:
      if (FUNC_5(VAR_10, VAR_6)) {
 FUNC_3(VAR_10, &VAR_13, 2); VAR_11->i32 = VAR_11->u32 || VAR_13; VAR_11->id = VAR_0;
 continue;
      }
    case 2:
      if (FUNC_5(VAR_10, VAR_1)) {
 FUNC_3(VAR_10, &VAR_13, 3); VAR_11->i32 = VAR_11->u32 && VAR_13; VAR_11->id = VAR_0;
 continue;
      }
    case 3:
      if (FUNC_5(VAR_10, '|')) {
 FUNC_3(VAR_10, &VAR_13, 4); VAR_11->u32 = VAR_11->u32 | VAR_13; goto arith_result;
      }
    case 4:
      if (FUNC_5(VAR_10, '^')) {
 FUNC_3(VAR_10, &VAR_13, 5); VAR_11->u32 = VAR_11->u32 ^ VAR_13; goto arith_result;
      }
    case 5:
      if (FUNC_5(VAR_10, '&')) {
 FUNC_3(VAR_10, &VAR_13, 6); VAR_11->u32 = VAR_11->u32 & VAR_13; goto arith_result;
      }
    case 6:
      if (FUNC_5(VAR_10, VAR_2)) {
 FUNC_3(VAR_10, &VAR_13, 7); VAR_11->i32 = VAR_11->u32 == VAR_13; VAR_11->id = VAR_0;
 continue;
      } else if (FUNC_5(VAR_10, VAR_5)) {
 FUNC_3(VAR_10, &VAR_13, 7); VAR_11->i32 = VAR_11->u32 != VAR_13; VAR_11->id = VAR_0;
 continue;
      }
    case 7:
      if (FUNC_5(VAR_10, '<')) {
 FUNC_3(VAR_10, &VAR_13, 8);
 if (VAR_11->id == VAR_0 && VAR_13 == VAR_0)
   VAR_11->i32 = VAR_11->i32 < VAR_13;
 else
   VAR_11->i32 = VAR_11->u32 < VAR_13;
 VAR_11->id = VAR_0;
 continue;
      } else if (FUNC_5(VAR_10, '>')) {
 FUNC_3(VAR_10, &VAR_13, 8);
 if (VAR_11->id == VAR_0 && VAR_13 == VAR_0)
   VAR_11->i32 = VAR_11->i32 > VAR_13;
 else
   VAR_11->i32 = VAR_11->u32 > VAR_13;
 VAR_11->id = VAR_0;
 continue;
      } else if (FUNC_5(VAR_10, VAR_4)) {
 FUNC_3(VAR_10, &VAR_13, 8);
 if (VAR_11->id == VAR_0 && VAR_13 == VAR_0)
   VAR_11->i32 = VAR_11->i32 <= VAR_13;
 else
   VAR_11->i32 = VAR_11->u32 <= VAR_13;
 VAR_11->id = VAR_0;
 continue;
      } else if (FUNC_5(VAR_10, VAR_3)) {
 FUNC_3(VAR_10, &VAR_13, 8);
 if (VAR_11->id == VAR_0 && VAR_13 == VAR_0)
   VAR_11->i32 = VAR_11->i32 >= VAR_13;
 else
   VAR_11->i32 = VAR_11->u32 >= VAR_13;
 VAR_11->id = VAR_0;
 continue;
      }
    case 8:
      if (FUNC_5(VAR_10, VAR_7)) {
 FUNC_3(VAR_10, &VAR_13, 9); VAR_11->u32 = VAR_11->u32 << VAR_13;
 continue;
      } else if (FUNC_5(VAR_10, VAR_8)) {
 FUNC_3(VAR_10, &VAR_13, 9);
 if (VAR_11->id == VAR_0)
   VAR_11->i32 = VAR_11->i32 >> VAR_13;
 else
   VAR_11->u32 = VAR_11->u32 >> VAR_13;
 continue;
      }
    case 9:
      if (FUNC_5(VAR_10, '+')) {
 FUNC_3(VAR_10, &VAR_13, 10); VAR_11->u32 = VAR_11->u32 + VAR_13;
      arith_result:
 if (VAR_13 > VAR_11->id) VAR_11->id = VAR_13;
 continue;
      } else if (FUNC_5(VAR_10, '-')) {
 FUNC_3(VAR_10, &VAR_13, 10); VAR_11->u32 = VAR_11->u32 - VAR_13; goto arith_result;
      }
    case 10:
      if (FUNC_5(VAR_10, '*')) {
 FUNC_4(VAR_10, &VAR_13); VAR_11->u32 = VAR_11->u32 * VAR_13; goto arith_result;
      } else if (FUNC_5(VAR_10, '/')) {
 FUNC_4(VAR_10, &VAR_13);
 if (VAR_13 > VAR_11->id) VAR_11->id = VAR_13;
 if (VAR_13 == 0 ||
     (VAR_11->id == VAR_0 && VAR_11->u32 == 0x80000000u && VAR_13 == -1))
   FUNC_1(VAR_10, VAR_9);
 if (VAR_11->id == VAR_0)
   VAR_11->i32 = VAR_11->i32 / VAR_13;
 else
   VAR_11->u32 = VAR_11->u32 / VAR_13;
 continue;
      } else if (FUNC_5(VAR_10, '%')) {
 FUNC_4(VAR_10, &VAR_13);
 if (VAR_13 > VAR_11->id) VAR_11->id = VAR_13;
 if (VAR_13 == 0 ||
     (VAR_11->id == VAR_0 && VAR_11->u32 == 0x80000000u && VAR_13 == -1))
   FUNC_1(VAR_10, VAR_9);
 if (VAR_11->id == VAR_0)
   VAR_11->i32 = VAR_11->i32 % VAR_13;
 else
   VAR_11->u32 = VAR_11->u32 % VAR_13;
 continue;
      }
    default:
      return;
    }
  }
}
