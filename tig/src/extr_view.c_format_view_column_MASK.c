
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column {int type; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static enum status_code
FUNC_2(struct view_column *VAR_1, char VAR_2[], size_t VAR_3)
{
 FUNC_0(VAR_0);

 return FUNC_1("Unknown view column type: %d", VAR_1->type);
}
