
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_opt {char const* member_0; char const* member_1; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (char const*,int ,char*,int ,struct ref_opt*) ;
 int FUNC_1 (char const*) ;

enum status_code
FUNC_2(const char *VAR_0, char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct ref_opt VAR_4 = { VAR_2, VAR_3 };

 return FUNC_0(VAR_0, FUNC_1(VAR_0), VAR_1, FUNC_1(VAR_1), &VAR_4);
}
