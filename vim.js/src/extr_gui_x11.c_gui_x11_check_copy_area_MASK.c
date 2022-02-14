
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int height; int width; int y; int x; } ;
typedef TYPE_1__ XGraphicsExposeEvent ;
typedef int XEvent ;
struct TYPE_4__ {scalar_t__ visibility; int dpy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4()
{
    XEvent VAR_5;
    XGraphicsExposeEvent *VAR_6;

    if (VAR_4.visibility != VAR_3)
 return;

    FUNC_1(VAR_4.dpy);


    for (;;)
    {
 if (FUNC_0(VAR_4.dpy, VAR_2, &VAR_5))
     return;

 if (FUNC_0(VAR_4.dpy, VAR_1, &VAR_5))
 {
     VAR_6 = (XGraphicsExposeEvent *)&VAR_5;
     FUNC_3(VAR_6->x, VAR_6->y, VAR_6->width, VAR_6->height);
     if (VAR_6->count == 0)
  return;
 }
 FUNC_2(VAR_4.dpy, VAR_0);
    }
}
