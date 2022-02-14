
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {char* rn_name; int rn_vdev_guid; } ;
typedef TYPE_1__ rdsk_node_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*) ;

int
FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const char *VAR_2 = ((rdsk_node_t *)VAR_0)->rn_name;
 const char *VAR_3 = ((rdsk_node_t *)VAR_1)->rn_name;
 uint64_t VAR_4 = ((rdsk_node_t *)VAR_0)->rn_vdev_guid;
 uint64_t VAR_5 = ((rdsk_node_t *)VAR_1)->rn_vdev_guid;
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_2(VAR_2, VAR_3));
 if (VAR_6)
  return (VAR_6);

 return (FUNC_0(VAR_4, VAR_5));
}
