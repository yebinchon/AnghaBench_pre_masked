
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple_found_func ;
typedef int tuple_filter_func ;
typedef int int32 ;
typedef int ScanKeyData ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int,int ,int ,void*,int ) ;

__attribute__((used)) static inline bool
FUNC_3(int32 VAR_4, tuple_found_func VAR_5,
       tuple_filter_func VAR_6, void *VAR_7, LOCKMODE VAR_8)
{
 ScanKeyData VAR_9[1];

 FUNC_1(&VAR_9[0],
    VAR_0,
    VAR_2,
    VAR_3,
    FUNC_0(VAR_4));
 return FUNC_2(VAR_1,
         VAR_9,
         1,
         VAR_5,
         VAR_6,
         VAR_7,
         VAR_8);
}
