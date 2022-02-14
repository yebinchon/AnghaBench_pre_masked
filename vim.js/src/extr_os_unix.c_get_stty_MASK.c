
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct termio {int sg_kill; int sg_erase; int * c_cc; } ;
struct sgttyb {int sg_kill; int sg_erase; int * c_cc; } ;
typedef int char_u ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,struct termio*) ;
 int VAR_7 ;
 int FUNC_4 (int ,struct termio*) ;

void
FUNC_5()
{
    char_u VAR_8[2];
    char_u *VAR_9;
    struct sgttyb VAR_10;

    if (FUNC_3(VAR_7, VAR_3, &VAR_10) != -1)
    {
 VAR_8[0] = VAR_10.sg_erase;
 VAR_6 = VAR_10.sg_kill;

 VAR_8[1] = VAR_1;
 FUNC_0((char_u *)"kb", VAR_8, VAR_0);




 VAR_9 = FUNC_2((char_u *)"kD");
 if (VAR_9 != ((void*)0) && VAR_9[0] == VAR_8[0] && VAR_9[1] == VAR_8[1])
     FUNC_1(((void*)0));
    }



}
