
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_7__ {int * rm_golden; int * zio_golden; int rto_sanity; } ;
typedef TYPE_1__ raidz_test_opts_t ;
typedef int raidz_map_t ;
struct TYPE_8__ {scalar_t__ rto_should_stop; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int **,int **) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (TYPE_1__*,int **,int) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(raidz_test_opts_t *VAR_8)
{
 char **VAR_9;
 int VAR_10, VAR_11 = 0;
 zio_t *VAR_12;
 raidz_map_t *VAR_13;

 VAR_11 = FUNC_4(VAR_8, VAR_2);
 if (0 != VAR_11)
  return (VAR_11);

 FUNC_0(VAR_1, VAR_0);
 FUNC_0(VAR_1, "Testing parity generation...\n");

 for (VAR_9 = (char **)VAR_6+1; *VAR_9 != ((void*)0);
     VAR_9++) {

  FUNC_0(VAR_1, VAR_4);
  FUNC_0(VAR_1, "\tTesting [%s] implementation...", *VAR_9);

  if (0 != FUNC_7(*VAR_9)) {
   FUNC_0(VAR_1, "[SKIP]\n");
   continue;
  } else {
   FUNC_0(VAR_1, "[SUPPORTED]\n");
  }

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {


   if (VAR_7.rto_should_stop)
    return (VAR_11);


   VAR_13 = FUNC_5(VAR_8, &VAR_12, VAR_10+1);
   FUNC_1(VAR_13);

   FUNC_0(VAR_1, "\t\tTesting method [%s] ...",
       VAR_5[VAR_10]);

   if (!VAR_8->rto_sanity)
    FUNC_6(VAR_13);

   if (FUNC_2(VAR_8, VAR_13, VAR_10+1) != 0) {
    FUNC_0(VAR_1, "[FAIL]\n");
    VAR_11++;
   } else
    FUNC_0(VAR_1, "[PASS]\n");

   FUNC_3(&VAR_12, &VAR_13);
  }
 }

 FUNC_3(&VAR_8->zio_golden, &VAR_8->rm_golden);

 return (VAR_11);
}
