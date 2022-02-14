
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int cred_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_3 (char const*,int ,int *,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char**) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (char const*,int ,int *) ;
 int FUNC_9 (char const*,char*,int ) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_3, zfs_prop_t VAR_4, nvpair_t *VAR_5,
    cred_t *VAR_6)
{
 char *VAR_7;




 switch (VAR_4) {
 default:
  break;
 case 128:



  if (!FUNC_1(VAR_2))
   return (FUNC_2(VAR_0));
  break;

 case 130:
 case 132:
 case 129:
  if (!FUNC_1(VAR_2)) {
   uint64_t VAR_8;
   char VAR_9[VAR_1];





   if (FUNC_3(VAR_3,
       FUNC_7(128), &VAR_8, VAR_9))
    return (FUNC_2(VAR_0));
   if (!VAR_8 || FUNC_6(VAR_3) <= FUNC_6(VAR_9))
    return (FUNC_2(VAR_0));
  }
  break;

 case 131:
  if (!FUNC_4())
   return (FUNC_2(VAR_0));

  if (FUNC_5(VAR_5, &VAR_7) == 0) {
   int VAR_10;

   VAR_10 = FUNC_9(VAR_3, VAR_7, FUNC_0());
   if (VAR_10 != 0)
    return (VAR_10);
  }
  break;
 }

 return (FUNC_8(VAR_3, FUNC_7(VAR_4), VAR_6));
}
