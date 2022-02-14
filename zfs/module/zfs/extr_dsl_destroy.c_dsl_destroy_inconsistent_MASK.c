
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objset_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

int
FUNC_6(const char *VAR_2, void *VAR_3)
{
 objset_t *VAR_4;

 if (FUNC_2(VAR_2, VAR_1, &VAR_4) == 0) {
  boolean_t VAR_5 = FUNC_0(FUNC_1(VAR_4));





  if (FUNC_4(FUNC_1(VAR_4)))
   VAR_5 = VAR_0;

  FUNC_3(VAR_4, VAR_1);
  if (VAR_5)
   (void) FUNC_5(VAR_2);
 }
 return (0);
}
