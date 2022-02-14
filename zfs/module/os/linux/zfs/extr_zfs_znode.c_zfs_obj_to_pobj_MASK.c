
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sa_handle_t ;
typedef int sa_bulk_attr_t ;
typedef int sa_attr_type_t ;
typedef int pflags ;
typedef int parent_mode ;
typedef int parent ;
typedef int objset_t ;
typedef int mode ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int *,int*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,size_t,int*,int) ;
 int FUNC_5 (int *,int,int **,int **,int ) ;
 int FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_7(objset_t *VAR_6, sa_handle_t *VAR_7, sa_attr_type_t *VAR_8,
    uint64_t *VAR_9, int *VAR_10)
{
 uint64_t VAR_11;
 uint64_t VAR_12;
 uint64_t VAR_13;
 uint64_t VAR_14;
 sa_bulk_attr_t VAR_15[3];
 sa_handle_t *VAR_16;
 dmu_buf_t *VAR_17;
 int VAR_18 = 0;
 int VAR_19;

 FUNC_0(VAR_15, VAR_18, VAR_8[VAR_5], ((void*)0),
     &VAR_11, sizeof (VAR_11));
 FUNC_0(VAR_15, VAR_18, VAR_8[VAR_3], ((void*)0),
     &VAR_12, sizeof (VAR_12));
 FUNC_0(VAR_15, VAR_18, VAR_8[VAR_4], ((void*)0),
     &VAR_13, sizeof (VAR_13));

 if ((VAR_19 = FUNC_3(VAR_7, VAR_15, VAR_18)) != 0)
  return (VAR_19);







 VAR_19 = FUNC_5(VAR_6, VAR_11, &VAR_16, &VAR_17, VAR_1);
 if (VAR_19 != 0)
  return (VAR_19);

 VAR_19 = FUNC_4(VAR_16, VAR_4, &VAR_14, sizeof (VAR_14));
 FUNC_6(VAR_16, VAR_17, VAR_1);
 if (VAR_19 != 0)
  return (VAR_19);

 *VAR_10 = ((VAR_12 & VAR_2) != 0) && FUNC_2(VAR_13);





 if (!*VAR_10 && !FUNC_2(VAR_14))
  return (FUNC_1(VAR_0));

 *VAR_9 = VAR_11;

 return (0);
}
