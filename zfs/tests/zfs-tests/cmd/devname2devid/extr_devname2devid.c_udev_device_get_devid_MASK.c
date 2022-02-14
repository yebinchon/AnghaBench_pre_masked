
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_list_entry {int dummy; } ;
struct udev_device {int dummy; } ;
typedef int devbyid ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char const*,...) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int ) ;
 struct udev_list_entry* FUNC_4 (struct udev_device*) ;
 char* FUNC_5 (struct udev_device*,char*) ;
 char* FUNC_6 (struct udev_list_entry*) ;
 struct udev_list_entry* FUNC_7 (struct udev_list_entry*) ;

__attribute__((used)) static int
FUNC_8(struct udev_device *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct udev_list_entry *VAR_6;
 const char *VAR_7;
 char VAR_8[VAR_2];


 VAR_7 = FUNC_5(VAR_3, "ID_BUS");

 if (VAR_7 == ((void*)0)) {
  const char *VAR_9;






  VAR_9 = FUNC_5(VAR_3, "DM_UUID");
  if (VAR_9 != ((void*)0)) {
   (void) FUNC_0(VAR_4, VAR_5, "dm-uuid-%s", VAR_9);
   return (0);
  }
  return (VAR_1);
 }






 (void) FUNC_0(VAR_8, sizeof (VAR_8), "%s%s-", VAR_0, VAR_7);
 VAR_6 = FUNC_4(VAR_3);
 while (VAR_6 != ((void*)0)) {
  const char *VAR_10;

  VAR_10 = FUNC_6(VAR_6);
  if (FUNC_3(VAR_10, VAR_8, FUNC_2(VAR_8)) == 0) {
   VAR_10 += FUNC_2(VAR_0);
   (void) FUNC_1(VAR_4, VAR_10, VAR_5 - 1);
   VAR_4[VAR_5 - 1] = '\0';
   return (0);
  }
  VAR_6 = FUNC_7(VAR_6);
 }

 return (VAR_1);
}
