
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int nvlist_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,char const*) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

nvlist_t *
FUNC_6(fmd_hdl_t *VAR_8, const char *VAR_9, uint8_t VAR_10,
    nvlist_t *VAR_11, nvlist_t *VAR_12, nvlist_t *VAR_13)
{
 nvlist_t *VAR_14;
 int VAR_15 = 0;

 if (FUNC_3(&VAR_14, VAR_7, 0) != 0)
  FUNC_5("failed to xalloc fault nvlist");

 VAR_15 |= FUNC_2(VAR_14, VAR_6, VAR_5);
 VAR_15 |= FUNC_1(VAR_14, VAR_0, VAR_9);
 VAR_15 |= FUNC_2(VAR_14, VAR_2, VAR_10);

 if (VAR_11 != ((void*)0))
  VAR_15 |= FUNC_0(VAR_14, VAR_1, VAR_11);
 if (VAR_12 != ((void*)0))
  VAR_15 |= FUNC_0(VAR_14, VAR_3, VAR_12);
 if (VAR_13 != ((void*)0))
  VAR_15 |= FUNC_0(VAR_14, VAR_4, VAR_13);

 if (VAR_15)
  FUNC_5("failed to populate nvlist: %s\n", FUNC_4(VAR_15));

 return (VAR_14);
}
