
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XGCValues ;
typedef int XColor ;
struct TYPE_2__ {int norm_pixel; int dpy; int wid; } ;
typedef int Pixmap ;
typedef int GC ;
typedef int Cursor ;


 int FUNC_0 (int ,int ,unsigned long,int *) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int ,int ,int *,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static Cursor
FUNC_5()
{
    Pixmap VAR_1 = FUNC_1(VAR_0.dpy, VAR_0.wid, 1, 1, 1);
    GC VAR_2 = FUNC_0(VAR_0.dpy, VAR_1, (unsigned long)0, (XGCValues*)0);
    FUNC_3(VAR_0.dpy, VAR_1, VAR_2, 0, 0);
    FUNC_4(VAR_0.dpy, VAR_2);
    return FUNC_2(VAR_0.dpy, VAR_1, VAR_1,
     (XColor*)&VAR_0.norm_pixel, (XColor*)&VAR_0.norm_pixel, 0, 0);
}
