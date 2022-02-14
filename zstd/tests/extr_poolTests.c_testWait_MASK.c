
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int dummy; } ;
typedef int POOL_ctx ;


 int FUNC_0 (int * const) ;
 int FUNC_1 (int * const,int *,struct data*) ;
 int * FUNC_2 (size_t,size_t) ;
 int FUNC_3 (int * const) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(size_t VAR_1, size_t VAR_2) {
  struct data VAR_3;
  POOL_ctx* const VAR_4 = FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_4);
  { size_t VAR_5;
    for (VAR_5 = 0; VAR_5 < 16; ++VAR_5) {
        FUNC_1(VAR_4, &VAR_0, &VAR_3);
    }
  }
  FUNC_3(VAR_4);
  return 0;
}
