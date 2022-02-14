
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t spa_feature_t ;
typedef int objset_t ;
struct TYPE_11__ {scalar_t__ zbm_redaction_obj; int zbm_flags; } ;
struct TYPE_13__ {TYPE_1__ dbn_phys; } ;
typedef TYPE_3__ dsl_bookmark_node_t ;
struct TYPE_15__ {TYPE_2__* ds_dir; int ds_bookmarks; } ;
struct TYPE_14__ {int fi_flags; } ;
struct TYPE_12__ {int dd_livelist; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * VAR_7 ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,size_t) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int * VAR_8 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char const*,int ,int **) ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;

__attribute__((used)) static int
FUNC_13(const char *VAR_11, void *VAR_12)
{
 int VAR_13;
 objset_t *VAR_14;
 spa_feature_t VAR_15;

 VAR_13 = FUNC_12(VAR_11, VAR_0, &VAR_14);
 if (VAR_13 != 0)
  return (0);

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  if (!FUNC_6(FUNC_4(VAR_14), VAR_15))
   continue;
  FUNC_0(VAR_10[VAR_15].fi_flags &
      VAR_6);
  VAR_7[VAR_15]++;
 }

 if (FUNC_7(FUNC_4(VAR_14))) {
  VAR_9++;
 }

 for (dsl_bookmark_node_t *VAR_16 =
     FUNC_2(&FUNC_4(VAR_14)->ds_bookmarks); VAR_16 != ((void*)0);
     VAR_16 = FUNC_1(&FUNC_4(VAR_14)->ds_bookmarks, VAR_16)) {
  FUNC_11(VAR_16->dbn_phys.zbm_redaction_obj);
  if (VAR_16->dbn_phys.zbm_redaction_obj != 0)
   VAR_8[VAR_4]++;
  if (VAR_16->dbn_phys.zbm_flags & VAR_5)
   VAR_8[VAR_2]++;
 }

 if (FUNC_8(&FUNC_4(VAR_14)->ds_dir->dd_livelist) &&
     !FUNC_5(VAR_14)) {
  VAR_8[VAR_3]++;
 }

 FUNC_9(VAR_14);
 FUNC_3(VAR_14, VAR_0);
 FUNC_10();
 return (0);
}
