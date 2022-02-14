
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int cb_namewidth; int cb_verbose; int cb_name_flags; } ;
typedef TYPE_1__ iostat_cbdata_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,int ,int ) ;

__attribute__((used)) static int
FUNC_2(zpool_handle_t *VAR_0, void *VAR_1)
{
 iostat_cbdata_t *VAR_2 = VAR_1;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_2->cb_namewidth, VAR_2->cb_name_flags,
     VAR_2->cb_verbose);
 VAR_4 = FUNC_0();

 if (VAR_3 < 10)
  VAR_3 = 10;
 if (VAR_3 > VAR_4 - 42)
  VAR_3 = VAR_4 - 42;

 VAR_2->cb_namewidth = VAR_3;

 return (0);
}
