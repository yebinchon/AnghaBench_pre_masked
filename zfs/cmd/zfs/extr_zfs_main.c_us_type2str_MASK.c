
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline const char *
FUNC_0(unsigned VAR_0)
{
 switch (VAR_0) {
 case 130:
  return ("POSIX User");
 case 131:
  return ("POSIX Group");
 case 128:
  return ("SMB User");
 case 129:
  return ("SMB Group");
 case 132:
  return ("Project");
 default:
  return ("Undefined");
 }
}
