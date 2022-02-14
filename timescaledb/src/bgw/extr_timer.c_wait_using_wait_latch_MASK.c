
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef int TimestampTz ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static bool
FUNC_5(TimestampTz VAR_6)
{
 int VAR_7;

 int64 VAR_8 = FUNC_3(VAR_6);

 FUNC_0(VAR_8 >= 0 && "get_timeout_millisec underflow");

 if (VAR_8 > VAR_1)
  VAR_8 = VAR_1;


 if ((int64) VAR_8 > (int64) VAR_0)
  VAR_8 = VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_3 | VAR_5 | VAR_4, VAR_8);
 FUNC_1(VAR_2);
 if (VAR_7 & VAR_4)
  FUNC_4();

 return 1;
}
