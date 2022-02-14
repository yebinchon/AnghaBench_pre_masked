
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef size_t uint_t ;
typedef void* uint64_t ;
struct TYPE_5__ {int cb_name_flags; scalar_t__ cb_print_status; int cb_verbose; } ;
typedef TYPE_1__ status_cbdata_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,int ,int ***,size_t*) ;
 int FUNC_4 (int *,int ,char**) ;
 int FUNC_5 (int *,int ,void**) ;
 int FUNC_6 (TYPE_1__*,char*,int *,int) ;
 int FUNC_7 (int *,TYPE_1__*,char*,int *,int,void*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 char* FUNC_10 (int ,int *,int *,int) ;

__attribute__((used)) static void
FUNC_11(zpool_handle_t *VAR_10, status_cbdata_t *VAR_11, nvlist_t *VAR_12,
    const char *VAR_13)
{
 uint_t VAR_14, VAR_15;
 nvlist_t **VAR_16;
 boolean_t VAR_17 = VAR_0;

 FUNC_0(VAR_10 != ((void*)0) || !VAR_11->cb_verbose);

 if (FUNC_3(VAR_12, VAR_6, &VAR_16,
     &VAR_15) != 0)
  return;

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  uint64_t VAR_18 = VAR_0;
  char *VAR_19 = ((void*)0);
  char *VAR_20 = ((void*)0);

  (void) FUNC_5(VAR_16[VAR_14], VAR_7,
      &VAR_18);

  if (VAR_18) {
   VAR_19 = VAR_2;
  } else {
   (void) FUNC_4(VAR_16[VAR_14],
       VAR_5, &VAR_19);
   (void) FUNC_4(VAR_16[VAR_14],
       VAR_8, &VAR_20);
  }

  if (VAR_19 == ((void*)0) || FUNC_9(VAR_19, VAR_13) != 0)
   continue;
  if (!VAR_18 && FUNC_9(VAR_20, VAR_4) == 0)
   continue;

  if (!VAR_17) {
   (void) FUNC_8("\t%s\t\n", FUNC_2(VAR_13));
   VAR_17 = VAR_1;
  }

  char *VAR_21 = FUNC_10(VAR_9, VAR_10, VAR_16[VAR_14],
      VAR_11->cb_name_flags | VAR_3);
  if (VAR_11->cb_print_status)
   FUNC_7(VAR_10, VAR_11, VAR_21, VAR_16[VAR_14], 2,
       VAR_0);
  else
   FUNC_6(VAR_11, VAR_21, VAR_16[VAR_14], 2);
  FUNC_1(VAR_21);
 }
}
