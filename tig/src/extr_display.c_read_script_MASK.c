
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct buffer {char* data; } ;
typedef int input_buffer ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const**,struct key*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct buffer*,char,int) ;
 int FUNC_5 (struct buffer*,int ,int) ;
 int VAR_1 ;
 size_t FUNC_6 (char*,char*) ;

__attribute__((used)) static bool
FUNC_7(struct key *VAR_2)
{
 static struct buffer VAR_3;
 static const char *VAR_4 = "";
 enum status_code VAR_5;

 while (!VAR_4 || !*VAR_4) {
  if (VAR_3.data && *VAR_3.data == ':') {
   VAR_4 = "<Enter>";
   FUNC_5(&VAR_3, 0, sizeof(VAR_3));

  } else if (!FUNC_4(&VAR_1, &VAR_3, '\n', 1)) {
   FUNC_3(&VAR_1);
   return 0;
  } else if (VAR_3.data[FUNC_6(VAR_3.data, " \t")] == '#') {
   continue;
  } else {
   VAR_4 = VAR_3.data;
  }
 }

 VAR_5 = FUNC_1(&VAR_4, VAR_2);
 if (VAR_5 != VAR_0)
  FUNC_0("Error reading script: %s", FUNC_2(VAR_5));
 return 1;
}
