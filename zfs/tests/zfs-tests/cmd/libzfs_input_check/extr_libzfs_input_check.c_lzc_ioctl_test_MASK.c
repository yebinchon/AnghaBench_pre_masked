
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_ioc_t ;
typedef int pname ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int data_type_t ;
typedef int boolean_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,char const*,int *,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_13(zfs_ioc_t VAR_4, const char *VAR_5, nvlist_t *VAR_6,
    nvlist_t *VAR_7, int VAR_8, boolean_t VAR_9)
{
 nvlist_t *VAR_10 = FUNC_4();
 nvlist_t *VAR_11 = FUNC_4();
 int VAR_12 = 0;

 if (VAR_6 != ((void*)0)) {
  for (nvpair_t *VAR_13 = FUNC_9(VAR_6, ((void*)0));
      VAR_13 != ((void*)0); VAR_13 = FUNC_9(VAR_6, VAR_13)) {
   FUNC_1(VAR_10, VAR_13);
  }
 }
 if (VAR_7 != ((void*)0)) {
  for (nvpair_t *VAR_14 = FUNC_9(VAR_7, ((void*)0));
      VAR_14 != ((void*)0); VAR_14 = FUNC_9(VAR_7, VAR_14)) {
   FUNC_1(VAR_10, VAR_14);
  }
 }




 if (!VAR_9)
  FUNC_0(VAR_10, "optional", VAR_11);
 FUNC_7(VAR_4, VAR_5, VAR_10, VAR_8);
 if (!VAR_9)
  FUNC_5(VAR_10, "optional");




 if (!VAR_9) {
  FUNC_2(VAR_10, "bogus_input", "bogus");
  FUNC_7(VAR_4, VAR_5, VAR_10, VAR_3);
  FUNC_5(VAR_10, "bogus_input");
 }




 if (VAR_6 != ((void*)0)) {
  nvlist_t *VAR_15 = FUNC_4();
  FUNC_7(VAR_4, VAR_5, VAR_15, VAR_2);
  FUNC_8(VAR_15);
 }




 if (VAR_6 != ((void*)0) || VAR_7 != ((void*)0)) {



  for (nvpair_t *VAR_16 = FUNC_9(VAR_10, ((void*)0));
      VAR_16 != ((void*)0); VAR_16 = FUNC_9(VAR_10, VAR_16)) {
   char VAR_17[VAR_0];
   data_type_t VAR_18;

   FUNC_12(VAR_17, FUNC_10(VAR_16), sizeof (VAR_17));
   VAR_17[sizeof (VAR_17) - 1] = '\0';
   VAR_18 = FUNC_11(VAR_16);
   FUNC_6(VAR_10, VAR_16);

   switch (VAR_18) {
   case 128:
    FUNC_3(VAR_10, VAR_17, 42);
    break;
   default:
    FUNC_2(VAR_10, VAR_17, "bogus");
    break;
   }
  }
  FUNC_7(VAR_4, VAR_5, VAR_10, VAR_1);
 }

 FUNC_8(VAR_11);
 FUNC_8(VAR_10);

 return (VAR_12);
}
