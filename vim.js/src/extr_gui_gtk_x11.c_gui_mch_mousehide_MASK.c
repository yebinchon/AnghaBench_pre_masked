
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pointer_hidden; TYPE_1__* drawarea; int * blank_pointer; } ;
struct TYPE_3__ {scalar_t__ window; } ;


 int FUNC_0 (scalar_t__,int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

void
FUNC_2(int VAR_2)
{
    if (VAR_0.pointer_hidden != VAR_2)
    {
 VAR_0.pointer_hidden = VAR_2;
 if (VAR_0.drawarea->window && VAR_0.blank_pointer != ((void*)0))
 {
     if (VAR_2)
  FUNC_0(VAR_0.drawarea->window, VAR_0.blank_pointer);
     else



  FUNC_0(VAR_0.drawarea->window, ((void*)0));

 }
    }
}
