
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raidz_test_opts_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(raidz_test_opts_t *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0))
  VAR_2 = &VAR_1;

 FUNC_0(VAR_2, VAR_0);

 VAR_3 |= FUNC_1(VAR_2);
 VAR_3 |= FUNC_2(VAR_2);

 return (VAR_3);
}
