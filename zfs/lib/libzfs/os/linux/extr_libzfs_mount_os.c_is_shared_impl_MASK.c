
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_share_type_t ;
typedef size_t zfs_share_proto_t ;
struct TYPE_4__ {int * libzfs_sharetab; } ;
typedef TYPE_1__ libzfs_handle_t ;
typedef int buf ;
struct TYPE_5__ {char const* p_name; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (char*,int,int *) ;
 int * FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_2__* VAR_6 ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

zfs_share_type_t
FUNC_5(libzfs_handle_t *VAR_7, const char *VAR_8,
    zfs_share_proto_t VAR_9)
{
 char VAR_10[VAR_0], *VAR_11;
 char *VAR_12;

 if (VAR_7->libzfs_sharetab == ((void*)0))
  return (VAR_3);


 if (FUNC_1(VAR_5, "r", VAR_7->libzfs_sharetab) == ((void*)0))
  return (VAR_3);

 (void) FUNC_2(VAR_7->libzfs_sharetab, 0, VAR_1);

 while (FUNC_0(VAR_10, sizeof (VAR_10), VAR_7->libzfs_sharetab) != ((void*)0)) {


  if ((VAR_11 = FUNC_3(VAR_10, '\t')) == ((void*)0))
   continue;

  *VAR_11 = '\0';
  if (FUNC_4(VAR_10, VAR_8) == 0) {




   VAR_12 = ++VAR_11;
   if ((VAR_11 = FUNC_3(VAR_12, '\t')) == ((void*)0))
    continue;
   VAR_12 = ++VAR_11;
   if ((VAR_11 = FUNC_3(VAR_12, '\t')) == ((void*)0))
    continue;
   *VAR_11 = '\0';
   if (FUNC_4(VAR_12,
       VAR_6[VAR_9].p_name) == 0) {
    switch (VAR_9) {
    case 129:
     return (VAR_2);
    case 128:
     return (VAR_4);
    default:
     return (0);
    }
   }
  }
 }

 return (VAR_3);
}
