
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Table ;
typedef int TValue ;
typedef int Node ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int const* VAR_0 ;
 scalar_t__ FUNC_3 (int ,int const*) ;
 int * FUNC_4 (int *,int const*) ;

__attribute__((used)) static const TValue *FUNC_5 (Table *VAR_1, const TValue *VAR_2) {
  Node *VAR_3 = FUNC_4(VAR_1, VAR_2);
  for (;;) {
    if (FUNC_3(FUNC_0(VAR_3), VAR_2))
      return FUNC_2(VAR_3);
    else {
      int VAR_4 = FUNC_1(VAR_3);
      if (VAR_4 == 0)
        return VAR_0;
      VAR_3 += VAR_4;
    }
  }
}
