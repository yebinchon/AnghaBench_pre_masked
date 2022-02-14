
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static Datum
FUNC_5(const char *VAR_2)
{
 bool VAR_3;
 Datum VAR_4;

 VAR_4 = FUNC_2(FUNC_0(VAR_2), VAR_0, VAR_1, &VAR_3);

 if (VAR_3)
  VAR_4 = FUNC_3(FUNC_0(VAR_2),
          VAR_0,
          FUNC_1(FUNC_4()),
          VAR_1,
          1);
 return VAR_4;
}
