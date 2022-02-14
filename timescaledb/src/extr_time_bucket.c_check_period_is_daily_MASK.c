
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void
FUNC_3(int64 VAR_4)
{



 int64 VAR_5 = VAR_2;

 if (VAR_4 < VAR_5)
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("interval must not have sub-day precision")));
 }
 if (VAR_4 % VAR_5 != 0)
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("interval must be a multiple of a day")));
 }
}
