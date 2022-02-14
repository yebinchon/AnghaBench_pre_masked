
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zb_blkid; scalar_t__ zb_level; scalar_t__ zb_object; scalar_t__ zb_objset; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int u_longlong_t ;


 int FUNC_0 (char*,size_t,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(zbookmark_phys_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 (void) FUNC_0(VAR_1, VAR_2, "%llx:%llx:%llx:%llx",
     (u_longlong_t)VAR_0->zb_objset, (u_longlong_t)VAR_0->zb_object,
     (u_longlong_t)VAR_0->zb_level, (u_longlong_t)VAR_0->zb_blkid);
}
