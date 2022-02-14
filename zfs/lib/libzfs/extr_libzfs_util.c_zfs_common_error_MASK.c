
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int libzfs_handle_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_1(libzfs_handle_t *VAR_5, int VAR_6, const char *VAR_7,
    va_list VAR_8)
{
 switch (VAR_6) {
 case 128:
 case 133:
  FUNC_0(VAR_5, VAR_4, VAR_7, VAR_8);
  return (-1);

 case 132:
  FUNC_0(VAR_5, VAR_3, VAR_7, VAR_8);
  return (-1);

 case 129:
  FUNC_0(VAR_5, VAR_2, VAR_7, VAR_8);
  return (-1);

 case 131:
  FUNC_0(VAR_5, VAR_0, VAR_7, VAR_8);
  return (-1);

 case 130:
  FUNC_0(VAR_5, VAR_1, VAR_7, VAR_8);
  return (-1);
 }

 return (0);
}
