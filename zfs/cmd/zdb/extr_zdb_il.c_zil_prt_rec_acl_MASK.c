
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zilog_t ;
typedef int u_longlong_t ;
struct TYPE_2__ {scalar_t__ lr_aclcnt; scalar_t__ lr_foid; } ;
typedef TYPE_1__ lr_acl_t ;


 int FUNC_0 (char*,char*,int ,int ) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(zilog_t *VAR_1, int VAR_2, void *VAR_3)
{
 lr_acl_t *VAR_4 = VAR_3;

 (void) FUNC_0("%sfoid %llu, aclcnt %llu\n", VAR_0,
     (u_longlong_t)VAR_4->lr_foid, (u_longlong_t)VAR_4->lr_aclcnt);
}
