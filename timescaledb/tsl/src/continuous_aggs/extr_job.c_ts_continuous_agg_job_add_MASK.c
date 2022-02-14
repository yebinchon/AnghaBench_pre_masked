
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int int32 ;
typedef int NameData ;
typedef int Interval ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *,int *,int ,int ,int *) ;

int32
FUNC_3(int32 VAR_2, int64 VAR_3, Interval *VAR_4)
{
 NameData VAR_5;
 NameData VAR_6;
 int32 VAR_7;

 FUNC_1(&VAR_6, "continuous_aggregate");
 FUNC_1(&VAR_5, "Continuous Aggregate Background Job");

 if (VAR_4 == ((void*)0))
  VAR_4 =
   FUNC_0(VAR_2, VAR_3);

 VAR_7 = FUNC_2(&VAR_5,
          &VAR_6,
          VAR_4,
          VAR_1,
          VAR_0,
          VAR_4);
 return VAR_7;
}
