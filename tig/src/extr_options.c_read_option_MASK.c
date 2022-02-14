
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_state {int errors; int lineno; int path; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const**,int*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char const**) ;
 size_t FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,int ,int ) ;

__attribute__((used)) static enum status_code
FUNC_6(char *VAR_3, size_t VAR_4, char *VAR_5, size_t VAR_6, void *VAR_7)
{
 struct config_state *VAR_8 = VAR_7;
 enum status_code VAR_9 = VAR_0;



 VAR_4 = FUNC_4(VAR_3, "#");
 if (VAR_4 == 0)
  return VAR_2;

 if (VAR_3[VAR_4] == 0) {

  size_t VAR_10 = FUNC_4(VAR_5, "#");
  const char *VAR_11[VAR_1];
  int VAR_12 = 0;

  if (VAR_10 < VAR_6) {
   VAR_6 = VAR_10;
   VAR_5[VAR_6] = 0;
  }

  if (!FUNC_0(VAR_11, &VAR_12, VAR_5))
   VAR_9 = FUNC_1("Too many option arguments for %s", VAR_3);
  else
   VAR_9 = FUNC_3(VAR_3, VAR_12, VAR_11);
 }

 if (VAR_9 != VAR_2) {
  FUNC_5("%s:%zu: %s", VAR_8->path, VAR_8->lineno,
       FUNC_2(VAR_9));
  VAR_8->errors = 1;
 }


 return VAR_2;
}
