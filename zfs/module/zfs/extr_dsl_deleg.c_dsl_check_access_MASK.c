
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char const*,int,int,int *) ;
 int FUNC_2 (char*,char,char,void*) ;

__attribute__((used)) static int
FUNC_3(objset_t *VAR_3, uint64_t VAR_4,
    char VAR_5, char VAR_6, void *VAR_7, const char *VAR_8)
{
 int VAR_9;
 uint64_t VAR_10, VAR_11;
 char VAR_12[VAR_2];

 FUNC_2(VAR_12, VAR_5, VAR_6, VAR_7);
 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_12, 8, 1, &VAR_10);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_1(VAR_3, VAR_10, VAR_8, 8, 1, &VAR_11);
  if (VAR_9 == VAR_0)
   VAR_9 = FUNC_0(VAR_1);
 }
 return (VAR_9);
}
