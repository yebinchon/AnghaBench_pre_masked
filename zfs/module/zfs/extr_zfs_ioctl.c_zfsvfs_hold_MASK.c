
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_teardown_lock; scalar_t__ z_unmounted; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,TYPE_1__**) ;
 int FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (char const*,int ,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, void *VAR_5, zfsvfs_t **VAR_6, boolean_t VAR_7)
{
 int VAR_8 = 0;

 if (FUNC_1(VAR_4, VAR_6) != 0)
  VAR_8 = FUNC_4(VAR_4, VAR_0, VAR_6);
 if (VAR_8 == 0) {
  FUNC_2(&(*VAR_6)->z_teardown_lock, (VAR_7) ? VAR_3 :
      VAR_2, VAR_5);
  if ((*VAR_6)->z_unmounted) {





   FUNC_3(&(*VAR_6)->z_teardown_lock, VAR_5);
   return (FUNC_0(VAR_1));
  }
 }
 return (VAR_8);
}
