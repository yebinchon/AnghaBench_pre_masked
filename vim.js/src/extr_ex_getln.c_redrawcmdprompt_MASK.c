
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdfirstc; int cmdindent; int cmdattr; int * cmdprompt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2()
{
    int VAR_7;

    if (VAR_3)
 return;
    if (VAR_2.cmdfirstc != VAR_1)
 FUNC_0(VAR_2.cmdfirstc);
    if (VAR_2.cmdprompt != ((void*)0))
    {
 FUNC_1(VAR_2.cmdprompt, VAR_2.cmdattr);
 VAR_2.cmdindent = VAR_5 + (VAR_6 - VAR_4) * VAR_0;

 if (VAR_2.cmdfirstc != VAR_1)
     --VAR_2.cmdindent;
    }
    else
 for (VAR_7 = VAR_2.cmdindent; VAR_7 > 0; --VAR_7)
     FUNC_0(' ');
}
