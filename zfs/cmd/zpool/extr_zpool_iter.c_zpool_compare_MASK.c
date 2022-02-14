
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * zn_handle; } ;
typedef TYPE_1__ zpool_node_t ;
typedef int zpool_handle_t ;


 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 zpool_handle_t *VAR_3 = ((zpool_node_t *)VAR_0)->zn_handle;
 zpool_handle_t *VAR_4 = ((zpool_node_t *)VAR_1)->zn_handle;
 const char *VAR_5 = FUNC_1(VAR_3);
 const char *VAR_6 = FUNC_1(VAR_4);

 return (FUNC_0(VAR_5, VAR_6));
}
