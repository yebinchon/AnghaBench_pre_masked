
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint8_t ;
typedef int nvlist_t ;
typedef enum lzc_dataset_type { ____Placeholder_lzc_dataset_type } lzc_dataset_type ;
typedef int dmu_objset_type_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,char const*,int *,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(const char *VAR_2, enum lzc_dataset_type VAR_3, nvlist_t *VAR_4,
    uint8_t *VAR_5, uint_t VAR_6)
{
 int VAR_7;
 nvlist_t *VAR_8 = ((void*)0);
 nvlist_t *VAR_9 = FUNC_3();

 FUNC_0(VAR_9, "type", (dmu_objset_type_t)VAR_3);
 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_9, "props", VAR_4);

 if (VAR_5 != ((void*)0)) {
  VAR_8 = FUNC_3();
  FUNC_2(VAR_8, "wkeydata", VAR_5,
      VAR_6);
  FUNC_1(VAR_9, VAR_1, VAR_8);
 }

 VAR_7 = FUNC_4(VAR_0, VAR_2, VAR_9, ((void*)0));
 FUNC_5(VAR_8);
 FUNC_5(VAR_9);
 return (VAR_7);
}
