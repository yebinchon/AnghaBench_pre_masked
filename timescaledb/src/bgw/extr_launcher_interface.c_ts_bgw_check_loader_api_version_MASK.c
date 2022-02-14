
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

extern void
FUNC_5()
{
 int VAR_3 = FUNC_4();

 if (VAR_3 < VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("loader version out-of-date"),
     FUNC_2("Please restart the database to upgrade the loader version.")));
}
