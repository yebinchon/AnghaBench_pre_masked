
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uu_dprintf_severity_t ;


 int VAR_0 ;






 char const* FUNC_0 (int ,char*) ;

__attribute__((used)) static const char *
FUNC_1(uu_dprintf_severity_t VAR_1)
{
 switch (VAR_1) {
 case 129:
  return (FUNC_0(VAR_0, "silent"));
 case 132:
  return (FUNC_0(VAR_0, "FATAL"));
 case 128:
  return (FUNC_0(VAR_0, "WARNING"));
 case 130:
  return (FUNC_0(VAR_0, "note"));
 case 131:
  return (FUNC_0(VAR_0, "info"));
 case 133:
  return (FUNC_0(VAR_0, "debug"));
 default:
  return (FUNC_0(VAR_0, "unspecified"));
 }
}
