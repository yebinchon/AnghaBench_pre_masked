
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xcb_window_t ;
typedef int vlc_object_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*) ;
 scalar_t__* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9 (vlc_object_t *VAR_1, xcb_window_t VAR_2)
{
    vlc_object_t *VAR_3 = FUNC_0(FUNC_8(VAR_1));
    xcb_window_t *VAR_4;
    size_t VAR_5 = 0;

    FUNC_6 (&VAR_0);
    VAR_4 = FUNC_4(VAR_3, "xid-in-use");
    FUNC_1 (*VAR_4);
    while (VAR_4[VAR_5] != VAR_2)
    {
        FUNC_1 (VAR_4[VAR_5]);
        VAR_5++;
    }
    do
        VAR_4[VAR_5] = VAR_4[VAR_5 + 1];
    while (VAR_4[++VAR_5]);

    if (!VAR_4[0])
        FUNC_5(VAR_3, "xid-in-use", ((void*)0));
    else
        VAR_4 = ((void*)0);

    FUNC_7 (&VAR_0);

    FUNC_2( VAR_4 );


    FUNC_3(VAR_3, "xid-in-use");
}
