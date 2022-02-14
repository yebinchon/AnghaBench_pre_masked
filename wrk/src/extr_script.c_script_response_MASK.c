
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {char* buffer; char* cursor; } ;
typedef TYPE_1__ buffer ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(lua_State *VAR_0, int VAR_1, buffer *VAR_2, buffer *VAR_3) {
    FUNC_3(VAR_0, "response");
    FUNC_5(VAR_0, VAR_1);
    FUNC_4(VAR_0);

    for (char *VAR_4 = VAR_2->buffer; VAR_4 < VAR_2->cursor; ) {
        VAR_4 = FUNC_0(VAR_0, VAR_4);
        VAR_4 = FUNC_0(VAR_0, VAR_4);
        FUNC_7(VAR_0, -3);
    }

    FUNC_6(VAR_0, VAR_3->buffer, VAR_3->cursor - VAR_3->buffer);
    FUNC_2(VAR_0, 3, 0);

    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
}
