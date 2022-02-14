
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ CoercionPathType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int*) ;

__attribute__((used)) static Oid
FUNC_2(Oid VAR_3)
{
 Oid VAR_4;
 bool VAR_5;
 CoercionPathType VAR_6;





 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_4);

 if (VAR_6 != VAR_1)
  FUNC_1(VAR_3, &VAR_4, &VAR_5);

 return VAR_4;
}
