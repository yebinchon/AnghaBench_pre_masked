
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_type_t ;


 int VAR_0 ;





 int FUNC_0 (int) ;
 char const* FUNC_1 (int ,char*) ;

const char *
FUNC_2(zfs_type_t VAR_1)
{
 switch (VAR_1) {
 case 131:
  return (FUNC_1(VAR_0, "filesystem"));
 case 129:
  return (FUNC_1(VAR_0, "snapshot"));
 case 128:
  return (FUNC_1(VAR_0, "volume"));
 case 130:
  return (FUNC_1(VAR_0, "pool"));
 case 132:
  return (FUNC_1(VAR_0, "bookmark"));
 default:
  FUNC_0(!"unhandled zfs_type_t");
 }

 return (((void*)0));
}
