
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int active; int (* changefunc ) (int) ;int text; } ;
struct TYPE_3__ {scalar_t__* batpath; int batname; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_3(int VAR_6)
{
    int VAR_7;


    FUNC_0(VAR_6);

    if (VAR_5[0].batpath[0] != VAR_0)
 VAR_4[VAR_6].text = VAR_3;
    else
 VAR_4[VAR_6].text = VAR_2;


    for (VAR_7 = 1; VAR_7 < VAR_1; ++VAR_7)
    {


 if (VAR_5[0].batpath[0] != VAR_0
  && VAR_4[VAR_6 + VAR_7].changefunc != ((void*)0))
 {
     VAR_4[VAR_6 + VAR_7].active = 1;
     if (VAR_4[VAR_6 + VAR_7].changefunc == FUNC_0
      && VAR_5[VAR_7].batpath[0] != VAR_0)
     {
  FUNC_2(VAR_5[VAR_7].batpath, VAR_5[0].batpath);
  FUNC_1(VAR_6 + VAR_7, VAR_5[VAR_7].batpath, VAR_5[VAR_7].batname);
     }
 }
 else
     VAR_4[VAR_6 + VAR_7].active = 0;
    }
}
