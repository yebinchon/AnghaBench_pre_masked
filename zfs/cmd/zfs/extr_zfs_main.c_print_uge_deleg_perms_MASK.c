
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_9__ {char* who_name; char* who_ug_name; int who_type; int * who_deleg_perm_avl; } ;
struct TYPE_11__ {TYPE_1__ who_perm; } ;
typedef TYPE_3__ who_perm_node_t ;
typedef int uu_avl_walk_t ;
typedef int uu_avl_t ;
struct TYPE_10__ {scalar_t__ dp_local; scalar_t__ dp_descend; int dp_name; } ;
struct TYPE_12__ {TYPE_2__ dpn_perm; } ;
typedef TYPE_4__ deleg_perm_node_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 TYPE_4__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(uu_avl_t *VAR_3, boolean_t VAR_4, boolean_t VAR_5,
    const char *VAR_6)
{
 who_perm_node_t *VAR_7 = ((void*)0);
 boolean_t VAR_8 = VAR_1;
 uu_avl_walk_t *VAR_9;

 if ((VAR_9 = FUNC_8(VAR_3, VAR_2)) == ((void*)0))
  FUNC_2();

 while ((VAR_7 = FUNC_7(VAR_9)) != ((void*)0)) {
  const char *VAR_10 = VAR_7->who_perm.who_name;
  const char *VAR_11 = VAR_7->who_perm.who_ug_name;
  uu_avl_t *VAR_12 = VAR_7->who_perm.who_deleg_perm_avl;
  zfs_deleg_who_type_t VAR_13 = VAR_7->who_perm.who_type;
  char VAR_14 = ' ';
  deleg_perm_node_t *VAR_15;
  boolean_t VAR_16 = VAR_1;

  for (VAR_15 = FUNC_4(VAR_12);
      VAR_15 != ((void*)0);
      VAR_15 = FUNC_5(VAR_12, VAR_15)) {
   if (VAR_4 != VAR_15->dpn_perm.dp_local ||
       VAR_5 != VAR_15->dpn_perm.dp_descend)
    continue;

   if (VAR_16) {
    const char *VAR_17 = ((void*)0);
    if (VAR_8) {
     VAR_8 = VAR_0;
     (void) FUNC_3("%s", VAR_6);
    }

    switch (VAR_13) {
    case 128:
    case 129:
     VAR_17 = FUNC_1("user");
     if (VAR_11)
      VAR_10 = VAR_11;
     break;
    case 130:
    case 131:
     VAR_17 = FUNC_1("group");
     if (VAR_11)
      VAR_10 = VAR_11;
     break;
    case 132:
    case 133:
     VAR_17 = FUNC_1("everyone");
     VAR_10 = ((void*)0);
     break;

    default:
     FUNC_0(VAR_17 != ((void*)0));
    }

    VAR_16 = VAR_0;
    if (VAR_10 == ((void*)0))
     (void) FUNC_3("\t%s", VAR_17);
    else
     (void) FUNC_3("\t%s %s", VAR_17, VAR_10);
   }

   (void) FUNC_3("%c%s", VAR_14,
       VAR_15->dpn_perm.dp_name);
   VAR_14 = ',';
  }

  if (!VAR_16)
   (void) FUNC_3("\n");
 }

 FUNC_6(VAR_9);
}
