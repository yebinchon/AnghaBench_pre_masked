
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ os_zil; int os_sync; } ;
typedef TYPE_1__ objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, uint64_t VAR_4)
{
 objset_t *VAR_5 = VAR_3;




 FUNC_0(VAR_4 == VAR_2 || VAR_4 == VAR_0 ||
     VAR_4 == VAR_1);

 VAR_5->os_sync = VAR_4;
 if (VAR_5->os_zil)
  FUNC_1(VAR_5->os_zil, VAR_4);
}
