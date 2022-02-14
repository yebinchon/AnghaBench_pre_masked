
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errstr ;
 int VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

char *
FUNC_2(int VAR_1)
{
 static char VAR_2[32];
 char *VAR_3 = ((void*)0);

 switch (VAR_1) {
 case 137:
  VAR_3 = FUNC_0(VAR_0, "ok");
  break;
 case 142:
  VAR_3 = FUNC_0(VAR_0, "path doesn't exist");
  break;
 case 147:
  VAR_3 = FUNC_0(VAR_0, "no memory");
  break;
 case 157:
  VAR_3 = FUNC_0(VAR_0, "name in use");
  break;
 case 161:
  VAR_3 = FUNC_0(VAR_0, "bad path");
  break;
 case 143:
  VAR_3 = FUNC_0(VAR_0, "no such group");
  break;
 case 158:
  VAR_3 = FUNC_0(VAR_0, "configuration error");
  break;
 case 129:
  VAR_3 = FUNC_0(VAR_0, "system error");
  break;
 case 130:
  VAR_3 = FUNC_0(VAR_0, "syntax error");
  break;
 case 146:
  VAR_3 = FUNC_0(VAR_0, "no permission");
  break;
 case 159:
  VAR_3 = FUNC_0(VAR_0, "busy");
  break;
 case 141:
  VAR_3 = FUNC_0(VAR_0, "no such property");
  break;
 case 156:
  VAR_3 = FUNC_0(VAR_0, "invalid name");
  break;
 case 154:
  VAR_3 = FUNC_0(VAR_0, "invalid protocol");
  break;
 case 151:
  VAR_3 = FUNC_0(VAR_0, "operation not allowed");
  break;
 case 160:
  VAR_3 = FUNC_0(VAR_0, "bad property value");
  break;
 case 153:
  VAR_3 = FUNC_0(VAR_0, "invalid security type");
  break;
 case 138:
  VAR_3 = FUNC_0(VAR_0, "security type not found");
  break;
 case 128:
  VAR_3 = FUNC_0(VAR_0, "property value conflict");
  break;
 case 150:
  VAR_3 = FUNC_0(VAR_0, "not implemented");
  break;
 case 155:
  VAR_3 = FUNC_0(VAR_0, "invalid path");
  break;
 case 148:
  VAR_3 = FUNC_0(VAR_0, "operation not supported");
  break;
 case 133:
  VAR_3 = FUNC_0(VAR_0, "property not valid for group");
  break;
 case 149:
  VAR_3 = FUNC_0(VAR_0, "not shared");
  break;
 case 140:
  VAR_3 = FUNC_0(VAR_0, "no such resource");
  break;
 case 132:
  VAR_3 = FUNC_0(VAR_0, "resource name required");
  break;
 case 152:
  VAR_3 = FUNC_0(VAR_0, "errors from multiple protocols");
  break;
 case 134:
  VAR_3 = FUNC_0(VAR_0, "path is a subpath of share");
  break;
 case 135:
  VAR_3 = FUNC_0(VAR_0, "path is parent of a share");
  break;
 case 144:
  VAR_3 = FUNC_0(VAR_0, "protocol requires a section");
  break;
 case 145:
  VAR_3 = FUNC_0(VAR_0, "properties not found");
  break;
 case 139:
  VAR_3 = FUNC_0(VAR_0, "section not found");
  break;
 case 136:
  VAR_3 = FUNC_0(VAR_0, "passwords must be encrypted");
  break;
 case 131:
  VAR_3 = FUNC_0(VAR_0, "path or file is already shared");
  break;
 default:
  (void) FUNC_1(VAR_2, sizeof (VAR_2),
      FUNC_0(VAR_0, "unknown %d"), VAR_1);
  VAR_3 = VAR_2;
 }
 return (VAR_3);
}
