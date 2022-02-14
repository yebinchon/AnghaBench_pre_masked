
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_prop_t ;
typedef int propb ;
typedef int propa ;
struct TYPE_2__ {int cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_2, const void *VAR_3, zfs_prop_t VAR_4)
{
 const prop_changenode_t *VAR_5 = VAR_2;
 const prop_changenode_t *VAR_6 = VAR_3;

 char VAR_7[VAR_1];
 char VAR_8[VAR_1];

 boolean_t VAR_9, VAR_10;

 VAR_9 = (FUNC_1(VAR_5->cn_handle, VAR_4, VAR_7, sizeof (VAR_7),
     ((void*)0), ((void*)0), 0, VAR_0) == 0);
 VAR_10 = (FUNC_1(VAR_6->cn_handle, VAR_4, VAR_8, sizeof (VAR_8),
     ((void*)0), ((void*)0), 0, VAR_0) == 0);

 if (!VAR_9 && VAR_10)
  return (-1);
 else if (VAR_9 && !VAR_10)
  return (1);
 else if (!VAR_9 && !VAR_10)
  return (0);
 else
  return (FUNC_0(VAR_8, VAR_7));
}
