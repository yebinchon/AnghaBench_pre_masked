
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint8_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,char const*,int *,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(const char *VAR_3, boolean_t VAR_4, uint8_t *VAR_5,
    uint_t VAR_6)
{
 int VAR_7;
 nvlist_t *VAR_8;
 nvlist_t *VAR_9;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_3();
 VAR_9 = FUNC_3();
 FUNC_2(VAR_9, "wkeydata", VAR_5, VAR_6);
 FUNC_1(VAR_8, VAR_2, VAR_9);
 if (VAR_4)
  FUNC_0(VAR_8, "noop");
 VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_8, ((void*)0));
 FUNC_5(VAR_9);
 FUNC_5(VAR_8);

 return (VAR_7);
}
