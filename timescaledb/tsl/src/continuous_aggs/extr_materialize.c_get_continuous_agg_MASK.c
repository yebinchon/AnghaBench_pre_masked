
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ScanKeyData ;
typedef int * Form_continuous_agg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int *,int,int ,int ,int ,int **) ;

__attribute__((used)) static Form_continuous_agg
FUNC_3(int32 VAR_8)
{
 Form_continuous_agg VAR_9 = ((void*)0);
 ScanKeyData VAR_10[1];
 bool VAR_11;

 FUNC_1(&VAR_10[0],
    VAR_1,
    VAR_2,
    VAR_6,
    FUNC_0(VAR_8));

 VAR_11 = FUNC_2(VAR_3,
        VAR_4,
        VAR_10,
        1,
        VAR_7,
        VAR_0,
        VAR_5,
        &VAR_9);

 if (!VAR_11)
  return ((void*)0);

 return VAR_9;
}
