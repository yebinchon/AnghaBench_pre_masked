
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef int HttpResponseState ;
typedef int HttpRequest ;
typedef scalar_t__ HttpError ;
typedef int Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char const*,size_t) ;
 char* FUNC_2 (int *,size_t*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__) ;

HttpError
FUNC_6(Connection *VAR_8, HttpRequest *VAR_9, HttpResponseState *VAR_10)
{
 const char *VAR_11;
 size_t VAR_12;
 off_t VAR_13 = 0;
 HttpError VAR_14 = VAR_2;
 int VAR_15;

 VAR_11 = FUNC_2(VAR_9, &VAR_12);

 if (((void*)0) == VAR_11)
  return VAR_4;

 while (VAR_12 > 0)
 {
  VAR_15 = FUNC_1(VAR_8, VAR_11 + VAR_13, VAR_12);

  if (VAR_15 < 0 || VAR_15 > VAR_12)
   return VAR_7;

  if (VAR_15 == 0)
   return VAR_0;

  VAR_13 += VAR_15;
  VAR_12 -= VAR_15;
 }

 while (VAR_14 == VAR_2 && !FUNC_3(VAR_10))
 {
  ssize_t VAR_16 = 0;
  char *VAR_17 = FUNC_4(VAR_10, &VAR_16);

  if (VAR_16 < 0)
   VAR_14 = VAR_1;
  else if (VAR_16 == 0)
   VAR_14 = VAR_5;
  else
  {
   ssize_t VAR_18 = FUNC_0(VAR_8, VAR_17, VAR_16);

   if (VAR_18 < 0)
    VAR_14 = VAR_3;

   else if (VAR_18 == 0)
    VAR_14 = VAR_0;
   else if (!FUNC_5(VAR_10, VAR_18))
    VAR_14 = VAR_6;
  }
 }

 return VAR_14;
}
