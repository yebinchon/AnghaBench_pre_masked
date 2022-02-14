
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_9__ {char* dp_name; } ;
struct TYPE_8__ {char* who_name; int who_type; int * who_deleg_perm_avl; } ;
struct TYPE_10__ {TYPE_2__ dpn_perm; TYPE_1__ who_perm; } ;
typedef TYPE_3__ who_perm_node_t ;
typedef int uu_avl_t ;
typedef TYPE_3__ deleg_perm_node_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 TYPE_3__* FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(uu_avl_t *VAR_2)
{
 const char *VAR_3[] = {
  FUNC_0("Permission sets:\n"),
  FUNC_0("Create time permissions:\n"),
  ((void*)0)
 };
 who_perm_node_t *VAR_4 = ((void*)0);
 int VAR_5 = -1;

 for (VAR_4 = FUNC_3(VAR_2); VAR_4 != ((void*)0);
     VAR_4 = FUNC_4(VAR_2, VAR_4)) {
  uu_avl_t *VAR_6 = VAR_4->who_perm.who_deleg_perm_avl;
  zfs_deleg_who_type_t VAR_7 = VAR_4->who_perm.who_type;
  const char *VAR_8 = VAR_4->who_perm.who_name;
  int VAR_9 = FUNC_5(VAR_7);
  boolean_t VAR_10 = VAR_1;
  deleg_perm_node_t *VAR_11;

  if (VAR_5 != VAR_9) {
   (void) FUNC_1("%s", VAR_3[VAR_9]);
   VAR_5 = VAR_9;
  }

  if (VAR_8 == ((void*)0) || FUNC_2(VAR_8, 1) == 0)
   (void) FUNC_1("\t");
  else
   (void) FUNC_1("\t%s ", VAR_8);

  for (VAR_11 = FUNC_3(VAR_6); VAR_11 != ((void*)0);
      VAR_11 = FUNC_4(VAR_6, VAR_11)) {
   if (VAR_10) {
    (void) FUNC_1("%s",
        VAR_11->dpn_perm.dp_name);
    VAR_10 = VAR_0;
   } else
    (void) FUNC_1(",%s",
        VAR_11->dpn_perm.dp_name);
  }

  (void) FUNC_1("\n");
 }
}
