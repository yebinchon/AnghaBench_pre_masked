
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoding {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 struct encoding* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static enum status_code
FUNC_2(struct encoding **VAR_2, const char *VAR_3, bool VAR_4)
{
 char VAR_5[VAR_0];
 enum status_code VAR_6 = FUNC_1(VAR_5, VAR_3, sizeof(VAR_5));

 if (VAR_6 == VAR_1) {
  struct encoding *VAR_7 = *VAR_2;

  if (VAR_7 && !VAR_4)
   return VAR_6;
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7)
   *VAR_2 = VAR_7;
 }

 return VAR_6;
}
