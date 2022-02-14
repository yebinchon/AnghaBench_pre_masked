
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int ,int) ;

Datum
FUNC_5(void)
{
 bool VAR_3;
 Datum VAR_4;

 VAR_4 = FUNC_3(FUNC_0(VAR_1),
           VAR_0,
           VAR_2,
           &VAR_3);

 if (VAR_3)
  VAR_4 = FUNC_4(FUNC_0(VAR_1),
            VAR_0,
            FUNC_2(FUNC_1()),
            VAR_2,
            1);

 return VAR_4;
}
