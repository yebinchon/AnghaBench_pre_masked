
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoding {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct encoding* FUNC_1 (char*) ;
 int FUNC_2 (char const**,char*,int,int *,int) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,int ) ;

struct encoding *
FUNC_5(const char *VAR_4, struct encoding *VAR_5)
{
 const char *VAR_6[] = {
  "git", "check-attr", "encoding", "--", VAR_4, ((void*)0)
 };
 char VAR_7[VAR_3];
 char *VAR_8;



 if (!*VAR_4 || !FUNC_2(VAR_6, VAR_7, sizeof(VAR_7), ((void*)0), 0)
     || !(VAR_8 = FUNC_4(VAR_7, VAR_1)))
  return VAR_5;

 VAR_8 += FUNC_0(VAR_1);
 if (!FUNC_3(VAR_8, VAR_2)
     || !FUNC_3(VAR_8, "unspecified")
     || !FUNC_3(VAR_8, "set")) {
  const char *VAR_9[] = {
   "file", "--mime", "--", VAR_4, ((void*)0)
  };

  if (!*VAR_4 || !FUNC_2(VAR_9, VAR_7, sizeof(VAR_7), ((void*)0), 0)
      || !(VAR_8 = FUNC_4(VAR_7, VAR_0)))
   return VAR_5;

  VAR_8 += FUNC_0(VAR_0);
 }

 return FUNC_1(VAR_8);
}
