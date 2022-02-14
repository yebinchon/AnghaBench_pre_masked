
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * zn_handle; } ;
typedef TYPE_1__ zfs_node_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_1, const void *VAR_2, void *VAR_3)
{
 zfs_handle_t *VAR_4 = ((zfs_node_t *)VAR_1)->zn_handle;
 zfs_handle_t *VAR_5 = ((zfs_node_t *)VAR_2)->zn_handle;
 const char *VAR_6 = FUNC_2(VAR_4);
 const char *VAR_7 = FUNC_2(VAR_5);
 char *VAR_8, *VAR_9;
 uint64_t VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = (char *)FUNC_0(VAR_6, '@');
 VAR_9 = (char *)FUNC_0(VAR_7, '@');

 if (VAR_8 != ((void*)0))
  *VAR_8 = '\0';
 if (VAR_9 != ((void*)0))
  *VAR_9 = '\0';

 VAR_12 = FUNC_1(VAR_6, VAR_7);
 if (VAR_12 == 0 && (VAR_8 != ((void*)0) || VAR_9 != ((void*)0))) {




  if (VAR_8 == ((void*)0)) {
   VAR_12 = -1;
  } else if (VAR_9 == ((void*)0)) {
   VAR_12 = 1;
  } else {






   VAR_10 = FUNC_3(VAR_4, VAR_0);
   VAR_11 = FUNC_3(VAR_5, VAR_0);





   if (VAR_10 == 0 && VAR_11 == 0)
    VAR_12 = FUNC_1(VAR_8 + 1, VAR_9 + 1);
   else if (VAR_10 < VAR_11)
    VAR_12 = -1;
   else if (VAR_10 > VAR_11)
    VAR_12 = 1;
  }
 }

 if (VAR_8 != ((void*)0))
  *VAR_8 = '@';
 if (VAR_9 != ((void*)0))
  *VAR_9 = '@';

 return (VAR_12);
}
