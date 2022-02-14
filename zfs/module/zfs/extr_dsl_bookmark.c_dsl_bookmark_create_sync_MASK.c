
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_3__ {int dbca_bmarks; } ;
typedef TYPE_1__ dsl_bookmark_create_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {int dp_spa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, dmu_tx_t *VAR_2)
{
 dsl_bookmark_create_arg_t *VAR_3 = VAR_1;

 FUNC_0(FUNC_6(FUNC_1(VAR_2)->dp_spa,
     VAR_0));

 for (nvpair_t *VAR_4 = FUNC_4(VAR_3->dbca_bmarks, ((void*)0));
     VAR_4 != ((void*)0); VAR_4 = FUNC_4(VAR_3->dbca_bmarks, VAR_4)) {
  FUNC_2(FUNC_5(VAR_4),
      FUNC_3(VAR_4), VAR_2, 0, ((void*)0), ((void*)0), ((void*)0));
 }
}
