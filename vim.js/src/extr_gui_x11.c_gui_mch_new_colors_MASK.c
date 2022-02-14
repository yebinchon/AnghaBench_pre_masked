
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int long_u ;
struct TYPE_4__ {int foreground; int background; int function; } ;
typedef TYPE_1__ XGCValues ;
struct TYPE_5__ {int norm_pixel; int back_pixel; int * invert_gc; int dpy; int * back_gc; int * text_gc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int,TYPE_1__*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 () ;

void
FUNC_2()
{
    long_u VAR_5;
    XGCValues VAR_6;

    VAR_5 = VAR_1 | VAR_0;
    VAR_6.foreground = VAR_4.norm_pixel;
    VAR_6.background = VAR_4.back_pixel;
    if (VAR_4.text_gc != ((void*)0))
 FUNC_0(VAR_4.dpy, VAR_4.text_gc, VAR_5, &VAR_6);

    VAR_6.foreground = VAR_4.back_pixel;
    VAR_6.background = VAR_4.norm_pixel;
    if (VAR_4.back_gc != ((void*)0))
 FUNC_0(VAR_4.dpy, VAR_4.back_gc, VAR_5, &VAR_6);

    VAR_5 |= VAR_2;
    VAR_6.foreground = VAR_4.norm_pixel ^ VAR_4.back_pixel;
    VAR_6.background = VAR_4.norm_pixel ^ VAR_4.back_pixel;
    VAR_6.function = VAR_3;
    if (VAR_4.invert_gc != ((void*)0))
 FUNC_0(VAR_4.dpy, VAR_4.invert_gc, VAR_5, &VAR_6);

    FUNC_1();
}
