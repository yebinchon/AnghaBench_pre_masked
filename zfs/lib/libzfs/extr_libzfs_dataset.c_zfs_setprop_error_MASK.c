
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int libzfs_handle_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const,char*) ;

void
FUNC_4(libzfs_handle_t *VAR_15, zfs_prop_t VAR_16, int VAR_17,
    char *VAR_18)
{
 switch (VAR_17) {

 case 136:





  switch (VAR_16) {
  case 131:
  case 130:
   FUNC_2(VAR_15, FUNC_0(VAR_6,
       "size is less than current used or "
       "reserved space"));
   (void) FUNC_1(VAR_15, VAR_4, VAR_18);
   break;

  case 128:
  case 129:
   FUNC_2(VAR_15, FUNC_0(VAR_6,
       "size is greater than available space"));
   (void) FUNC_1(VAR_15, VAR_4, VAR_18);
   break;

  default:
   (void) FUNC_3(VAR_15, VAR_17, VAR_18);
   break;
  }
  break;

 case 138:
  (void) FUNC_3(VAR_15, 138, VAR_18);
  break;

 case 132:
  (void) FUNC_1(VAR_15, VAR_2, VAR_18);
  break;

 case 140:
  FUNC_2(VAR_15, FUNC_0(VAR_6,
      "property value too long"));
  (void) FUNC_1(VAR_15, VAR_0, VAR_18);
  break;

 case 135:
  FUNC_2(VAR_15, FUNC_0(VAR_6,
      "pool and or dataset must be upgraded to set this "
      "property or value"));
  (void) FUNC_1(VAR_15, VAR_1, VAR_18);
  break;

 case 133:
  if (VAR_16 == VAR_8 ||
      VAR_16 == VAR_10 ||
      VAR_16 == VAR_12) {
   (void) FUNC_2(VAR_15, FUNC_0(VAR_6,
       "property setting is not allowed on "
       "bootable datasets"));
   (void) FUNC_1(VAR_15, VAR_3, VAR_18);
  } else if (VAR_16 == VAR_7 ||
      VAR_16 == VAR_9) {
   (void) FUNC_2(VAR_15, FUNC_0(VAR_6,
       "property setting is not allowed on "
       "root pools"));
   (void) FUNC_1(VAR_15, VAR_3, VAR_18);
  } else {
   (void) FUNC_3(VAR_15, VAR_17, VAR_18);
  }
  break;

 case 137:
  if (VAR_16 == VAR_14) {
   (void) FUNC_1(VAR_15, VAR_0, VAR_18);
  } else {
   (void) FUNC_3(VAR_15, VAR_17, VAR_18);
  }
  break;

 case 139:
  if (VAR_16 == VAR_11) {
   FUNC_2(VAR_15, FUNC_0(VAR_6,
       "keylocation may only be set on encryption roots"));
   (void) FUNC_1(VAR_15, VAR_0, VAR_18);
  } else {
   (void) FUNC_3(VAR_15, VAR_17, VAR_18);
  }
  break;

 case 134:
 default:
  (void) FUNC_3(VAR_15, VAR_17, VAR_18);
 }
}
