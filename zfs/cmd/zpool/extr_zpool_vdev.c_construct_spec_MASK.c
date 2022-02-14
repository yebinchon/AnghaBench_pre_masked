
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,int*,int*) ;
 int * FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *,int ,int **,int) ;
 scalar_t__ FUNC_6 (int *,int ,char const*) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int ** FUNC_10 (int **,int) ;
 int VAR_19 ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;

nvlist_t *
FUNC_14(nvlist_t *VAR_20, int VAR_21, char **VAR_22)
{
 nvlist_t *VAR_23, *VAR_24, **VAR_25, **VAR_26, **VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 const char *VAR_35;
 uint64_t VAR_36, VAR_37, VAR_38;
 boolean_t VAR_39;

 VAR_25 = ((void*)0);
 VAR_29 = 0;
 VAR_26 = ((void*)0);
 VAR_27 = ((void*)0);
 VAR_32 = 0;
 VAR_33 = 0;
 VAR_34 = 0;
 VAR_36 = VAR_37 = VAR_38 = VAR_0;
 VAR_39 = VAR_0;
 VAR_23 = ((void*)0);

 while (VAR_21 > 0) {
  VAR_24 = ((void*)0);





  if ((VAR_35 = FUNC_3(VAR_22[0], &VAR_30, &VAR_31)) != ((void*)0)) {
   nvlist_t **VAR_40 = ((void*)0);
   int VAR_41, VAR_42 = 0;

   if (FUNC_11(VAR_35, VAR_11) == 0) {
    if (VAR_26 != ((void*)0)) {
     (void) FUNC_0(VAR_19,
         "%s", FUNC_2("invalid vdev "
         "specification: 'spare' can be "
         "specified only once\n"));
     goto spec_out;
    }
    VAR_36 = VAR_37 = VAR_38 = VAR_0;
   }

   if (FUNC_11(VAR_35, VAR_7) == 0) {
    if (VAR_39) {
     (void) FUNC_0(VAR_19,
         "%s", FUNC_2("invalid vdev "
         "specification: 'log' can be "
         "specified only once\n"));
     goto spec_out;
    }
    VAR_39 = VAR_1;
    VAR_36 = VAR_1;
    VAR_37 = VAR_0;
    VAR_38 = VAR_0;
    VAR_21--;
    VAR_22++;




    continue;
   }

   if (FUNC_11(VAR_35, VAR_5) == 0) {
    VAR_37 = VAR_1;
    VAR_36 = VAR_0;
    VAR_38 = VAR_0;
    VAR_21--;
    VAR_22++;
    continue;
   }

   if (FUNC_11(VAR_35, VAR_3) == 0) {
    VAR_38 = VAR_1;
    VAR_36 = VAR_0;
    VAR_37 = VAR_0;
    VAR_21--;
    VAR_22++;
    continue;
   }

   if (FUNC_11(VAR_35, VAR_6) == 0) {
    if (VAR_27 != ((void*)0)) {
     (void) FUNC_0(VAR_19,
         "%s", FUNC_2("invalid vdev "
         "specification: 'cache' can be "
         "specified only once\n"));
     goto spec_out;
    }
    VAR_36 = VAR_37 = VAR_38 = VAR_0;
   }

   if (VAR_36 || VAR_37 || VAR_38) {
    if (FUNC_11(VAR_35, VAR_8) != 0) {
     (void) FUNC_0(VAR_19,
         FUNC_2("invalid vdev "
         "specification: unsupported '%s' "
         "device: %s\n"), VAR_36 ? "log" :
         "special", VAR_35);
     goto spec_out;
    }
    VAR_33++;
   }

   for (VAR_41 = 1; VAR_41 < VAR_21; VAR_41++) {
    if (FUNC_3(VAR_22[VAR_41], ((void*)0), ((void*)0)) != ((void*)0))
     break;
    VAR_42++;
    VAR_40 = FUNC_10(VAR_40,
        VAR_42 * sizeof (nvlist_t *));
    if (VAR_40 == ((void*)0))
     FUNC_13();
    if ((VAR_24 = FUNC_4(VAR_20, VAR_22[VAR_41],
        VAR_0)) == ((void*)0)) {
     for (VAR_41 = 0; VAR_41 < VAR_42 - 1; VAR_41++)
      FUNC_9(VAR_40[VAR_41]);
     FUNC_1(VAR_40);
     goto spec_out;
    }

    VAR_40[VAR_42 - 1] = VAR_24;
   }

   if (VAR_42 < VAR_30) {
    (void) FUNC_0(VAR_19, FUNC_2("invalid vdev "
        "specification: %s requires at least %d "
        "devices\n"), VAR_22[0], VAR_30);
    for (VAR_41 = 0; VAR_41 < VAR_42; VAR_41++)
     FUNC_9(VAR_40[VAR_41]);
    FUNC_1(VAR_40);
    goto spec_out;
   }

   if (VAR_42 > VAR_31) {
    (void) FUNC_0(VAR_19, FUNC_2("invalid vdev "
        "specification: %s supports no more than "
        "%d devices\n"), VAR_22[0], VAR_31);
    for (VAR_41 = 0; VAR_41 < VAR_42; VAR_41++)
     FUNC_9(VAR_40[VAR_41]);
    FUNC_1(VAR_40);
    goto spec_out;
   }

   VAR_21 -= VAR_41;
   VAR_22 += VAR_41;

   if (FUNC_11(VAR_35, VAR_11) == 0) {
    VAR_26 = VAR_40;
    VAR_32 = VAR_42;
    continue;
   } else if (FUNC_11(VAR_35, VAR_6) == 0) {
    VAR_27 = VAR_40;
    VAR_34 = VAR_42;
    continue;
   } else {

    FUNC_12(FUNC_8(&VAR_24, VAR_2,
        0) == 0);
    FUNC_12(FUNC_6(VAR_24, VAR_18,
        VAR_35) == 0);
    FUNC_12(FUNC_7(VAR_24,
        VAR_14, VAR_36) == 0);
    if (VAR_36)
     FUNC_12(FUNC_6(VAR_24,
         VAR_12,
         VAR_4) == 0);
    if (VAR_37) {
     FUNC_12(FUNC_6(VAR_24,
         VAR_12,
         VAR_5) == 0);
    }
    if (VAR_38) {
     FUNC_12(FUNC_6(VAR_24,
         VAR_12,
         VAR_3) == 0);
    }
    if (FUNC_11(VAR_35, VAR_9) == 0) {
     FUNC_12(FUNC_7(VAR_24,
         VAR_16,
         VAR_30 - 1) == 0);
    }
    FUNC_12(FUNC_5(VAR_24,
        VAR_13, VAR_40,
        VAR_42) == 0);

    for (VAR_41 = 0; VAR_41 < VAR_42; VAR_41++)
     FUNC_9(VAR_40[VAR_41]);
    FUNC_1(VAR_40);
   }
  } else {




   if ((VAR_24 = FUNC_4(VAR_20, VAR_22[0],
       VAR_36)) == ((void*)0))
    goto spec_out;

   if (VAR_36)
    VAR_33++;
   if (VAR_37) {
    FUNC_12(FUNC_6(VAR_24,
        VAR_12,
        VAR_5) == 0);
   }
   if (VAR_38) {
    FUNC_12(FUNC_6(VAR_24,
        VAR_12,
        VAR_3) == 0);
   }
   VAR_21--;
   VAR_22++;
  }

  VAR_29++;
  VAR_25 = FUNC_10(VAR_25, VAR_29 * sizeof (nvlist_t *));
  if (VAR_25 == ((void*)0))
   FUNC_13();
  VAR_25[VAR_29 - 1] = VAR_24;
 }

 if (VAR_29 == 0 && VAR_32 == 0 && VAR_34 == 0) {
  (void) FUNC_0(VAR_19, "%s", FUNC_2("invalid vdev "
      "specification: at least one toplevel vdev must be "
      "specified\n"));
  goto spec_out;
 }

 if (VAR_39 && VAR_33 == 0) {
  (void) FUNC_0(VAR_19, "%s", FUNC_2("invalid vdev specification: "
      "log requires at least 1 device\n"));
  goto spec_out;
 }




 FUNC_12(FUNC_8(&VAR_23, VAR_2, 0) == 0);
 FUNC_12(FUNC_6(VAR_23, VAR_18,
     VAR_10) == 0);
 FUNC_12(FUNC_5(VAR_23, VAR_13,
     VAR_25, VAR_29) == 0);
 if (VAR_32 != 0)
  FUNC_12(FUNC_5(VAR_23, VAR_17,
      VAR_26, VAR_32) == 0);
 if (VAR_34 != 0)
  FUNC_12(FUNC_5(VAR_23, VAR_15,
      VAR_27, VAR_34) == 0);

spec_out:
 for (VAR_28 = 0; VAR_28 < VAR_29; VAR_28++)
  FUNC_9(VAR_25[VAR_28]);
 for (VAR_28 = 0; VAR_28 < VAR_32; VAR_28++)
  FUNC_9(VAR_26[VAR_28]);
 for (VAR_28 = 0; VAR_28 < VAR_34; VAR_28++)
  FUNC_9(VAR_27[VAR_28]);

 FUNC_1(VAR_26);
 FUNC_1(VAR_27);
 FUNC_1(VAR_25);

 return (VAR_23);
}
