
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_6__ {int * rm_golden; int * zio_golden; } ;
typedef TYPE_1__ raidz_test_opts_t ;
typedef int raidz_map_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int **,int **) ;
 unsigned int FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (TYPE_1__*,int **,int ) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(raidz_test_opts_t *VAR_7)
{
 char **VAR_8;
 unsigned VAR_9, VAR_10 = 0;
 zio_t *VAR_11;
 raidz_map_t *VAR_12;

 VAR_10 = FUNC_2(VAR_7, VAR_2);
 if (0 != VAR_10)
  return (VAR_10);

 FUNC_0(VAR_1, VAR_0);
 FUNC_0(VAR_1, "Testing data reconstruction...\n");

 for (VAR_8 = (char **)VAR_5+1; *VAR_8 != ((void*)0);
     VAR_8++) {

  FUNC_0(VAR_1, VAR_4);
  FUNC_0(VAR_1, "\tTesting [%s] implementation...", *VAR_8);

  if (FUNC_6(*VAR_8) != 0) {
   FUNC_0(VAR_1, "[SKIP]\n");
   continue;
  } else
   FUNC_0(VAR_1, "[SUPPORTED]\n");



  VAR_12 = FUNC_3(VAR_7, &VAR_11, VAR_2);

  FUNC_5(VAR_12);

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

   FUNC_0(VAR_1, "\t\tTesting method [%s] ...",
       VAR_6[VAR_9]);

   if (FUNC_4(VAR_7, VAR_12, VAR_9) != 0) {
    FUNC_0(VAR_1, "[FAIL]\n");
    VAR_10++;

   } else
    FUNC_0(VAR_1, "[PASS]\n");

  }

  FUNC_1(&VAR_11, &VAR_12);
 }

 FUNC_1(&VAR_7->zio_golden, &VAR_7->rm_golden);

 return (VAR_10);
}
