
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;
typedef int Jsonb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int*) ;

__attribute__((used)) static TimestampTz
FUNC_3(Jsonb *VAR_3)
{
 bool VAR_4 = 0;
 TimestampTz VAR_5 =
  FUNC_2(VAR_3, FUNC_0(VAR_2), &VAR_4);

 if (!VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_5;
}
