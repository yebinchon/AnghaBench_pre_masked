
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 char* FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,char const*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int,char const*) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;

int FUNC_25(lua_State *VAR_19)
{

  const char* VAR_20 = FUNC_1(VAR_19, 1);
  char VAR_21[256];
  int VAR_22 = 0;


  FUNC_24(VAR_19, 6);
  FUNC_0(VAR_19, FUNC_10(VAR_19, 2) || FUNC_11(VAR_19, 2), 2, "parent class name or nil expected");
  FUNC_0(VAR_19, FUNC_10(VAR_19, 3) || FUNC_8(VAR_19, 3), 3, "constructor function or nil expected");
  FUNC_0(VAR_19, FUNC_10(VAR_19, 4) || FUNC_8(VAR_19, 4), 4, "destructor function or nil expected");
  FUNC_0(VAR_19, FUNC_10(VAR_19, 5) || FUNC_8(VAR_19, 5), 5, "factory function or nil expected");
  FUNC_0(VAR_19, FUNC_10(VAR_19, 6) || FUNC_12(VAR_19, 6), 6, "module table or nil expected");


  if(FUNC_10(VAR_19, 6)) {
    FUNC_14(VAR_19, 1);
    VAR_22 = FUNC_4(VAR_20, VAR_21);
    if (VAR_22)
      FUNC_5(VAR_19, VAR_20);
    else
      FUNC_16(VAR_19);
  }

  if(!FUNC_12(VAR_19, -1))
    FUNC_2(VAR_19, "while creating metatable %s: bad argument #1 (%s is an invalid module name)", VAR_20, VAR_21);


  if(!FUNC_6(VAR_19, VAR_20))
  {

    FUNC_13(VAR_19);


    FUNC_19(VAR_19, -1);
    FUNC_22(VAR_19, VAR_0, VAR_20);


    FUNC_19(VAR_19, -1);
    FUNC_18(VAR_19, VAR_20);
    FUNC_21(VAR_19, VAR_0);


    FUNC_15(VAR_19, VAR_8);
    FUNC_22(VAR_19, -2, "__index");


    FUNC_15(VAR_19, VAR_14);
    FUNC_22(VAR_19, -2, "__newindex");


    FUNC_18(VAR_19, VAR_20);
    FUNC_22(VAR_19, -2, "__typename");


    FUNC_19(VAR_19, -1);
    FUNC_22(VAR_19, -2, "__metatable");


    FUNC_17(VAR_19, 1);
    FUNC_22(VAR_19, -2, "__version");


    FUNC_15(VAR_19, VAR_17);
    FUNC_22(VAR_19, -2, "__tostring");

    FUNC_15(VAR_19, VAR_3);
    FUNC_22(VAR_19, -2, "__add");

    FUNC_15(VAR_19, VAR_16);
    FUNC_22(VAR_19, -2, "__sub");

    FUNC_15(VAR_19, VAR_13);
    FUNC_22(VAR_19, -2, "__mul");

    FUNC_15(VAR_19, VAR_6);
    FUNC_22(VAR_19, -2, "__div");

    FUNC_15(VAR_19, VAR_12);
    FUNC_22(VAR_19, -2, "__mod");

    FUNC_15(VAR_19, VAR_15);
    FUNC_22(VAR_19, -2, "__pow");

    FUNC_15(VAR_19, VAR_18);
    FUNC_22(VAR_19, -2, "__unm");

    FUNC_15(VAR_19, VAR_5);
    FUNC_22(VAR_19, -2, "__concat");

    FUNC_15(VAR_19, VAR_10);
    FUNC_22(VAR_19, -2, "__len");

    FUNC_15(VAR_19, VAR_7);
    FUNC_22(VAR_19, -2, "__eq");

    FUNC_15(VAR_19, VAR_11);
    FUNC_22(VAR_19, -2, "__lt");

    FUNC_15(VAR_19, VAR_9);
    FUNC_22(VAR_19, -2, "__le");

    FUNC_15(VAR_19, VAR_4);
    FUNC_22(VAR_19, -2, "__call");
  }


  if(!FUNC_10(VAR_19, 2))
  {
    if(FUNC_7(VAR_19, -1))
      FUNC_2(VAR_19, "class %s has been already assigned a parent class\n", VAR_20);
    else
    {
      const char* VAR_23 = FUNC_1(VAR_19, 2);
      if(!FUNC_6(VAR_19, VAR_23))
        FUNC_2(VAR_19, "bad argument #2 (invalid parent class name %s)", VAR_23);
      FUNC_23(VAR_19, -2);
    }
  }


  if(!FUNC_10(VAR_19, 4))
  {

    FUNC_18(VAR_19, "__gc");
    FUNC_20(VAR_19, -2);

    if(FUNC_9(VAR_19, -1))
    {
      FUNC_14(VAR_19, 1);
      FUNC_18(VAR_19, "__gc");
      FUNC_19(VAR_19, 4);
      FUNC_21(VAR_19, -3);
    }
    else
      FUNC_2(VAR_19, "%s has been already assigned a destructor", VAR_20);
  }


  if(!FUNC_10(VAR_19, 5))
  {

    FUNC_18(VAR_19, "__factory");
    FUNC_20(VAR_19, -2);

    if(FUNC_9(VAR_19, -1))
    {
      FUNC_14(VAR_19, 1);
      FUNC_18(VAR_19, "__factory");
      FUNC_19(VAR_19, 5);
      FUNC_21(VAR_19, -3);
    }
    else
      FUNC_2(VAR_19, "%s has been already assigned a factory", VAR_20);
  }


  FUNC_18(VAR_19, "__constructor");
  FUNC_20(VAR_19, -2);
  if(FUNC_9(VAR_19, -1))
  {
    FUNC_14(VAR_19, 1);
    FUNC_13(VAR_19);
    FUNC_13(VAR_19);

    FUNC_19(VAR_19, -3);
    FUNC_22(VAR_19, -2, "__index");

    FUNC_15(VAR_19, VAR_2);
    FUNC_22(VAR_19, -2, "__newindex");

    FUNC_15(VAR_19, VAR_1);
    FUNC_22(VAR_19, -2, "__call");

    FUNC_19(VAR_19, -3);
    FUNC_22(VAR_19, -2, "__metatable");

    FUNC_23(VAR_19, -2);


    FUNC_18(VAR_19, "__constructor");
    FUNC_19(VAR_19, -2);
    FUNC_21(VAR_19, -4);
  }


  if(!FUNC_10(VAR_19, 3))
  {

    FUNC_7(VAR_19, -1);


    FUNC_18(VAR_19, "__new");
    FUNC_20(VAR_19, -2);

    if(FUNC_9(VAR_19, -1))
    {
      FUNC_14(VAR_19, 1);
      FUNC_18(VAR_19, "__new");
      FUNC_19(VAR_19, 3);
      FUNC_21(VAR_19, -3);


      FUNC_18(VAR_19, "new");
      FUNC_19(VAR_19, 3);
      FUNC_21(VAR_19, -5);
    }
    else
      FUNC_2(VAR_19, "%s has been already assigned a constructor", VAR_20);


    FUNC_14(VAR_19, 1);
  }


  FUNC_22(VAR_19, 6, FUNC_3(VAR_20));

  return 1;
}
