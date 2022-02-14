
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {scalar_t__* search; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct view*,int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct view*,int) ;
 int FUNC_6 (scalar_t__*,char*,int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8(struct view *VAR_2, enum request VAR_3)
{
 const char *VAR_4 = VAR_3 == VAR_0 ? "/" : "?";
 char *VAR_5 = FUNC_2(VAR_4);

 if (VAR_5 && *VAR_5) {
  enum status_code VAR_6;

  FUNC_6(VAR_1.search, VAR_5, FUNC_7(VAR_5));
  VAR_6 = FUNC_5(VAR_2, VAR_3);
  FUNC_3("%s", FUNC_1(VAR_6));
 } else if (VAR_5 && *VAR_1.search) {
  FUNC_0(VAR_2, VAR_3);
 } else {
  FUNC_4();
 }
}
