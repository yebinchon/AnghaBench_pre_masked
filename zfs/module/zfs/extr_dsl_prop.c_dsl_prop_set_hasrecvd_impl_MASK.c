
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_source_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,int **,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_3, zprop_source_t VAR_4)
{
 uint64_t VAR_5;
 spa_t *VAR_6;
 int VAR_7 = 0;

 FUNC_0(FUNC_3(VAR_3, &VAR_6, VAR_0));
 VAR_5 = FUNC_4(VAR_6);
 FUNC_2(VAR_6, VAR_0);

 if (VAR_5 >= VAR_1)
  VAR_7 = FUNC_1(VAR_3, VAR_2, VAR_4, 0);
 return (VAR_7);
}
