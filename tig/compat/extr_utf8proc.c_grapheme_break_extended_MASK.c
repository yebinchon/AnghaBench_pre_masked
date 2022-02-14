
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8proc_int32_t ;
typedef int utf8proc_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static utf8proc_bool FUNC_1(int VAR_7, int VAR_8, utf8proc_int32_t *VAR_9)
{
  int VAR_10 = ((VAR_9 && *VAR_9 != VAR_5)
                      ? *VAR_9 : VAR_7);
  utf8proc_bool VAR_11 = FUNC_0(VAR_10, VAR_8);
  if (VAR_9) {





    if (*VAR_9 == VAR_8 && VAR_8 == VAR_4)
      *VAR_9 = VAR_3;

    else if (*VAR_9 == VAR_1) {
      if (VAR_8 == VAR_0)
        *VAR_9 = VAR_1;
      else if (VAR_8 == VAR_6)
        *VAR_9 = VAR_2;
      else
        *VAR_9 = VAR_8;
    }
    else
      *VAR_9 = VAR_8;
  }
  return VAR_11;
}
