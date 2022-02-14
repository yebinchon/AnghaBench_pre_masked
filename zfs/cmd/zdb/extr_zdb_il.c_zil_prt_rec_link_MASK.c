
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zilog_t ;
typedef int u_longlong_t ;
struct TYPE_2__ {scalar_t__ lr_link_obj; scalar_t__ lr_doid; } ;
typedef TYPE_1__ lr_link_t ;


 int FUNC_0 (char*,char*,int ,int ,char*) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(zilog_t *VAR_1, int VAR_2, void *VAR_3)
{
 lr_link_t *VAR_4 = VAR_3;

 (void) FUNC_0("%sdoid %llu, link_obj %llu, name %s\n", VAR_0,
     (u_longlong_t)VAR_4->lr_doid, (u_longlong_t)VAR_4->lr_link_obj,
     (char *)(VAR_4 + 1));
}
