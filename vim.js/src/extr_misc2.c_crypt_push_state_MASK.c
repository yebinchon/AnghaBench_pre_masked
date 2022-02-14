
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_3()
{
    if (VAR_0 == 1)
    {

 if (VAR_5 == 0)
 {
     VAR_4[0] = VAR_2[0];
     VAR_4[1] = VAR_2[1];
     VAR_4[2] = VAR_2[2];
 }
 else
     FUNC_2();
 VAR_3 = VAR_5;
    }
    else if (VAR_0 > 1)
 FUNC_0(FUNC_1(VAR_1), "crypt_push_state()");
    ++VAR_0;
}
