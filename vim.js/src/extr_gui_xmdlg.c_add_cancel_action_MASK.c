
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XtCallbackProc ;
typedef int Widget ;
typedef int Display ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int VAR_2 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(Widget VAR_3, XtCallbackProc VAR_4, void *VAR_5)
{
    static Atom VAR_6 = 0;
    static Atom VAR_7 = 0;
    Display *VAR_8 = FUNC_2(VAR_3);


    FUNC_3(VAR_3, VAR_2, VAR_1, ((void*)0));


    if (!VAR_7)
    {
 VAR_6 = FUNC_1(VAR_8, "WM_PROTOCOLS", VAR_0);
 VAR_7 = FUNC_1(VAR_8, "WM_DELETE_WINDOW", VAR_0);
    }
    FUNC_0(VAR_3, VAR_6, VAR_7, VAR_4, VAR_5);
}
