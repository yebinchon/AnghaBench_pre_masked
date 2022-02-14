
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zil_header_t ;
struct TYPE_2__ {int os_projectused_dnode; int os_groupused_dnode; int os_userused_dnode; void* os_flags; void* os_type; int os_zil_header; int os_meta_dnode; } ;
typedef TYPE_1__ objset_phys_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void *VAR_2, size_t VAR_3)
{
 objset_phys_t *VAR_4 = VAR_2;

 FUNC_0(VAR_3 == VAR_0 || VAR_3 == VAR_1 ||
     VAR_3 == sizeof (objset_phys_t));
 FUNC_3(&VAR_4->os_meta_dnode);
 FUNC_2(&VAR_4->os_zil_header, sizeof (zil_header_t));
 VAR_4->os_type = FUNC_1(VAR_4->os_type);
 VAR_4->os_flags = FUNC_1(VAR_4->os_flags);
 if (VAR_3 >= VAR_1) {
  FUNC_3(&VAR_4->os_userused_dnode);
  FUNC_3(&VAR_4->os_groupused_dnode);
  if (VAR_3 >= sizeof (objset_phys_t))
   FUNC_3(&VAR_4->os_projectused_dnode);
 }
}
