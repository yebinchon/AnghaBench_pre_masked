
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_4__ {char* zo_pool; int zo_dir; } ;
struct TYPE_3__ {scalar_t__ zs_vdev_aux; int zs_vdev_next_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ FUNC_3 (int,size_t) ;
 scalar_t__ FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int ,char*,int ,char*,scalar_t__,...) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;
 char* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_11 () ;
 TYPE_2__ VAR_12 ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static nvlist_t *
FUNC_12(char *VAR_14, char *VAR_15, char *VAR_16, size_t VAR_17, uint64_t VAR_18)
{
 char *VAR_19;
 uint64_t VAR_20;
 nvlist_t *VAR_21;

 VAR_19 = FUNC_9(VAR_0, VAR_5);

 if (VAR_18 == 0)
  VAR_18 = FUNC_11();

 if (VAR_14 == ((void*)0)) {
  VAR_14 = VAR_19;

  if (VAR_15 != ((void*)0)) {
   VAR_20 = VAR_13->zs_vdev_aux;
   (void) FUNC_8(VAR_14, VAR_0,
       VAR_10, VAR_12.zo_dir,
       VAR_16 == ((void*)0) ? VAR_12.zo_pool : VAR_16,
       VAR_15, VAR_20);
  } else {
   VAR_20 = VAR_13->zs_vdev_next_leaf++;
   (void) FUNC_8(VAR_14, VAR_0,
       VAR_11, VAR_12.zo_dir,
       VAR_16 == ((void*)0) ? VAR_12.zo_pool : VAR_16, VAR_20);
  }
 }

 if (VAR_17 != 0) {
  int VAR_22 = FUNC_7(VAR_14, VAR_3 | VAR_2 | VAR_4, 0666);
  if (VAR_22 == -1)
   FUNC_2(1, "can't open %s", VAR_14);
  if (FUNC_3(VAR_22, VAR_17) != 0)
   FUNC_2(1, "can't ftruncate %s", VAR_14);
  (void) FUNC_1(VAR_22);
 }

 FUNC_0(FUNC_6(&VAR_21, VAR_1, 0) == 0);
 FUNC_0(FUNC_4(VAR_21, VAR_9, VAR_6) == 0);
 FUNC_0(FUNC_4(VAR_21, VAR_8, VAR_14) == 0);
 FUNC_0(FUNC_5(VAR_21, VAR_7, VAR_18) == 0);
 FUNC_10(VAR_19, VAR_0);

 return (VAR_21);
}
