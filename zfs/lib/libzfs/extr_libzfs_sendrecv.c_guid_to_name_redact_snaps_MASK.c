
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef void* uint64_t ;
typedef int pname ;
typedef int libzfs_handle_t ;
struct TYPE_7__ {char* name; void** redact_snap_guids; int * skip; void* num_redact_snaps; scalar_t__ bookmark_ok; void* guid; } ;
typedef TYPE_1__ guid_to_name_data_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int * FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 void* FUNC_4 (char*,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int (*) (int ,TYPE_1__*),TYPE_1__*) ;
 int FUNC_8 (int *,int (*) (int ,TYPE_1__*),TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(libzfs_handle_t *VAR_3, const char *VAR_4,
    uint64_t VAR_5, boolean_t VAR_6, uint64_t *VAR_7,
    uint64_t VAR_8, char *VAR_9)
{
 char VAR_10[VAR_2];
 guid_to_name_data_t VAR_11;

 VAR_11.guid = VAR_5;
 VAR_11.bookmark_ok = VAR_6;
 VAR_11.name = VAR_9;
 VAR_11.skip = ((void*)0);
 VAR_11.redact_snap_guids = VAR_7;
 VAR_11.num_redact_snaps = VAR_8;







 (void) FUNC_3(VAR_10, VAR_4, sizeof (VAR_10));
 char *VAR_12 = FUNC_4(VAR_10, '@');
 if (VAR_12 == ((void*)0))
  VAR_12 = FUNC_2(VAR_10, '\0');
 for (; VAR_12 != ((void*)0); VAR_12 = FUNC_4(VAR_10, '/')) {

  *VAR_12 = '\0';
  zfs_handle_t *VAR_13 = FUNC_1(VAR_3, VAR_10);

  if (VAR_13 == ((void*)0))
   continue;
  int VAR_14 = FUNC_0(FUNC_6(VAR_13), &VAR_11);
  if (VAR_14 != VAR_0)
   VAR_14 = FUNC_8(VAR_13, FUNC_0, &VAR_11);
  if (VAR_14 != VAR_0 && VAR_6)
   VAR_14 = FUNC_7(VAR_13, FUNC_0, &VAR_11);
  FUNC_5(VAR_13);
  if (VAR_14 == VAR_0)
   return (0);






  VAR_11.skip = FUNC_4(VAR_10, '/') + 1;
 }

 return (VAR_1);
}
