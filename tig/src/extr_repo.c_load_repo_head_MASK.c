
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_2__ {int head_id; int head; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char const**) ;
 TYPE_1__ VAR_2 ;

enum status_code
FUNC_2(void)
{
 const char *VAR_3[] = {
  "git", "rev-parse", VAR_0,
   VAR_1, "HEAD", ((void*)0)
 };

 FUNC_0(VAR_2.head, 0, sizeof(VAR_2.head));
 FUNC_0(VAR_2.head_id, 0, sizeof(VAR_2.head_id));
 return FUNC_1(VAR_3);
}
