
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int errbuf; TYPE_1__* zhp; } ;
typedef TYPE_2__ differ_info_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int zfs_hdl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*,char**) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(differ_info_t *VAR_3, char *VAR_4, char **VAR_5)
{
 boolean_t VAR_6;

 VAR_6 = FUNC_1(VAR_3->zhp->zfs_hdl, VAR_4, VAR_5);
 if (VAR_6 == VAR_0) {
  (void) FUNC_2(VAR_3->errbuf, sizeof (VAR_3->errbuf),
      FUNC_0(VAR_2,
      "Cannot diff an unmounted snapshot"));
  return (FUNC_3(VAR_3->zhp->zfs_hdl, VAR_1, VAR_3->errbuf));
 }


 if (**VAR_5 == '/' && *(*VAR_5 + 1) == '\0')
  **VAR_5 = '\0';
 return (0);
}
