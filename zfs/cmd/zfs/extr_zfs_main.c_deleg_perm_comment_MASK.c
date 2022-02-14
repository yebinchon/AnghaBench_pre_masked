
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_deleg_note_t ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static inline const char *
FUNC_1(zfs_deleg_note_t VAR_0)
{
 const char *VAR_1 = "";


 switch (VAR_0) {

 case 157:
  VAR_1 = FUNC_0("Must also have the permission that is being"
      "\n\t\t\t\tallowed");
  break;
 case 155:
  VAR_1 = FUNC_0("Must also have the 'create' ability and 'mount'"
      "\n\t\t\t\tability in the origin file system");
  break;
 case 154:
  VAR_1 = FUNC_0("Must also have the 'mount' ability");
  break;
 case 153:
  VAR_1 = FUNC_0("Must also have the 'mount' ability");
  break;
 case 152:
  VAR_1 = FUNC_0("Allows lookup of paths within a dataset;"
      "\n\t\t\t\tgiven an object number. Ordinary users need this"
      "\n\t\t\t\tin order to use zfs diff");
  break;
 case 147:
  VAR_1 = FUNC_0("Allows adding a user hold to a snapshot");
  break;
 case 145:
  VAR_1 = FUNC_0("Allows mount/umount of ZFS datasets");
  break;
 case 140:
  VAR_1 = FUNC_0("Must also have the 'mount'\n\t\t\t\tand"
      " 'promote' ability in the origin file system");
  break;
 case 139:
  VAR_1 = FUNC_0("Must also have the 'mount' and 'create'"
      " ability");
  break;
 case 138:
  VAR_1 = FUNC_0("Allows releasing a user hold which\n\t\t\t\t"
      "might destroy the snapshot");
  break;
 case 137:
  VAR_1 = FUNC_0("Must also have the 'mount' and 'create'"
      "\n\t\t\t\tability in the new parent");
  break;
 case 136:
  VAR_1 = FUNC_0("");
  break;
 case 135:
  VAR_1 = FUNC_0("");
  break;
 case 134:
  VAR_1 = FUNC_0("Allows sharing file systems over NFS or SMB"
      "\n\t\t\t\tprotocols");
  break;
 case 133:
  VAR_1 = FUNC_0("");
  break;
 case 146:
  VAR_1 = FUNC_0("Allows loading or unloading an encryption key");
  break;
 case 156:
  VAR_1 = FUNC_0("Allows changing or adding an encryption key");
  break;






 case 149:
  VAR_1 = FUNC_0("Allows accessing any groupquota@... property");
  break;
 case 148:
  VAR_1 = FUNC_0("Allows reading any groupused@... property");
  break;
 case 130:
  VAR_1 = FUNC_0("Allows changing any user property");
  break;
 case 129:
  VAR_1 = FUNC_0("Allows accessing any userquota@... property");
  break;
 case 128:
  VAR_1 = FUNC_0("Allows reading any userused@... property");
  break;
 case 132:
  VAR_1 = FUNC_0("Allows accessing any userobjquota@... property");
  break;
 case 151:
  VAR_1 = FUNC_0("Allows accessing any \n\t\t\t\t"
      "groupobjquota@... property");
  break;
 case 150:
  VAR_1 = FUNC_0("Allows reading any groupobjused@... property");
  break;
 case 131:
  VAR_1 = FUNC_0("Allows reading any userobjused@... property");
  break;
 case 142:
  VAR_1 = FUNC_0("Allows accessing any projectquota@... property");
  break;
 case 144:
  VAR_1 = FUNC_0("Allows accessing any \n\t\t\t\t"
      "projectobjquota@... property");
  break;
 case 141:
  VAR_1 = FUNC_0("Allows reading any projectused@... property");
  break;
 case 143:
  VAR_1 = FUNC_0("Allows accessing any \n\t\t\t\t"
      "projectobjused@... property");
  break;

 default:
  VAR_1 = "";
 }

 return (VAR_1);
}
