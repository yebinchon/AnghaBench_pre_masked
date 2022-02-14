
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef int xcb_connection_t ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,long) ;
 char* FUNC_2 (long) ;
 int FUNC_3 (int *,int ,int ,char*) ;
 long FUNC_4 (int ) ;

__attribute__((used)) static inline
void FUNC_5 (xcb_connection_t *VAR_3, xcb_window_t VAR_4)
{
    char* VAR_5;
    long VAR_6 = FUNC_4 (VAR_2);
    if (VAR_6 <= 0) VAR_6 = VAR_1;
    VAR_5 = FUNC_2 (VAR_6);
    if(!VAR_5) return;

    if (FUNC_1 (VAR_5, VAR_6) == 0)
    {
        VAR_5[VAR_6 - 1] = '\0';
        FUNC_3 (VAR_3, VAR_4, VAR_0, VAR_5);
    }
    FUNC_0(VAR_5);
}
