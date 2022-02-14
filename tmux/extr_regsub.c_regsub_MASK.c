
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char**,scalar_t__*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char**,scalar_t__*,char const*,char const*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char*) ;

char *
FUNC_8(const char *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 regex_t VAR_5;
 regmatch_t VAR_6[10];
 ssize_t VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11 = 0;
 char *VAR_12 = ((void*)0);

 if (*VAR_3 == '\0')
  return (FUNC_7(""));
 if (FUNC_1(&VAR_5, VAR_1, VAR_4) != 0)
  return (((void*)0));

 VAR_7 = 0;
 VAR_9 = 0;
 VAR_8 = FUNC_6(VAR_3);

 while (VAR_7 <= VAR_8) {
  VAR_6[0].rm_so = VAR_7;
  VAR_6[0].rm_eo = VAR_8;

  if (FUNC_2(&VAR_5, VAR_3, FUNC_0(VAR_6), VAR_6, VAR_0) != 0) {
   FUNC_4(&VAR_12, &VAR_10, VAR_3, VAR_7, VAR_8);
   break;
  }





  FUNC_4(&VAR_12, &VAR_10, VAR_3, VAR_9, VAR_6[0].rm_so);






  if (VAR_11 || VAR_6[0].rm_so != VAR_9 || VAR_6[0].rm_so != VAR_6[0].rm_eo) {
   FUNC_5(&VAR_12, &VAR_10, VAR_2, VAR_3, VAR_6, FUNC_0(VAR_6));

   VAR_9 = VAR_6[0].rm_eo;
   VAR_7 = VAR_6[0].rm_eo;
   VAR_11 = 0;
  } else {
   VAR_9 = VAR_6[0].rm_eo;
   VAR_7 = VAR_6[0].rm_eo + 1;
   VAR_11 = 1;
  }
 }
 VAR_12[VAR_10] = '\0';

 FUNC_3(&VAR_5);
 return (VAR_12);
}
