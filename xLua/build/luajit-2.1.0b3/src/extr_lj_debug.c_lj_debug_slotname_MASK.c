
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int GCproto ;
typedef scalar_t__ BCReg ;
typedef scalar_t__ BCOp ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 char* FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int *,scalar_t__) ;
 int const* FUNC_9 (int *) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (int *,int ) ;
 char* FUNC_12 (int ) ;

const char *FUNC_13(GCproto *VAR_4, const BCIns *VAR_5, BCReg VAR_6,
         const char **VAR_7)
{
  const char *VAR_8;
restart:
  VAR_8 = FUNC_6(VAR_4, FUNC_10(VAR_4, VAR_5), VAR_6);
  if (VAR_8 != ((void*)0)) { *VAR_7 = VAR_8; return "local"; }
  while (--VAR_5 > FUNC_9(VAR_4)) {
    BCIns VAR_9 = *VAR_5;
    BCOp VAR_10 = FUNC_4(VAR_9);
    BCReg VAR_11 = FUNC_0(VAR_9);
    if (FUNC_5(VAR_10) == VAR_0) {
      if (VAR_6 >= VAR_11 && (VAR_10 != VAR_2 || VAR_6 <= FUNC_3(VAR_9)))
 return ((void*)0);
    } else if (FUNC_5(VAR_10) == VAR_1 && VAR_11 == VAR_6) {
      switch (FUNC_4(VAR_9)) {
      case 130:
 if (VAR_11 == VAR_6) { VAR_6 = FUNC_3(VAR_9); goto restart; }
 break;
      case 131:
 *VAR_7 = FUNC_12(FUNC_7(FUNC_11(VAR_4, ~(ptrdiff_t)FUNC_3(VAR_9))));
 return "global";
      case 129:
 *VAR_7 = FUNC_12(FUNC_7(FUNC_11(VAR_4, ~(ptrdiff_t)FUNC_2(VAR_9))));
 if (VAR_5 > FUNC_9(VAR_4)) {
   BCIns VAR_12 = VAR_5[-1];
   if (FUNC_4(VAR_12) == 130 && FUNC_0(VAR_12) == VAR_11+1+VAR_3 &&
       FUNC_3(VAR_12) == FUNC_1(VAR_9))
     return "method";
 }
 return "field";
      case 128:
 *VAR_7 = FUNC_8(VAR_4, FUNC_3(VAR_9));
 return "upvalue";
      default:
 return ((void*)0);
      }
    }
  }
  return ((void*)0);
}
