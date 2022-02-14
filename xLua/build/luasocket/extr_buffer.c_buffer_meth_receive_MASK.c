
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int p_timeout ;
typedef TYPE_2__* p_buffer ;
typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_8__ {TYPE_1__* io; int tm; } ;
struct TYPE_7__ {int ctx; int (* error ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,int,char*,size_t*) ;
 char* FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 double FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (TYPE_2__*,size_t,int *) ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (int ) ;

int FUNC_21(lua_State *VAR_1, p_buffer VAR_2) {
    int VAR_3 = VAR_0, VAR_4 = FUNC_6(VAR_1);
    luaL_Buffer VAR_5;
    size_t VAR_6;
    const char *VAR_7 = FUNC_3(VAR_1, 3, "", &VAR_6);





    FUNC_2(VAR_1, &VAR_5);
    FUNC_0(&VAR_5, VAR_7, VAR_6);

    if (!FUNC_7(VAR_1, 2)) {
        const char *VAR_8= FUNC_4(VAR_1, 2, "*l");
        if (VAR_8[0] == '*' && VAR_8[1] == 'l') VAR_3 = FUNC_15(VAR_2, &VAR_5);
        else if (VAR_8[0] == '*' && VAR_8[1] == 'a') VAR_3 = FUNC_14(VAR_2, &VAR_5);
        else FUNC_1(VAR_1, 0, 2, "invalid receive pattern");


    } else {
        double VAR_9 = FUNC_13(VAR_1, 2);
        size_t VAR_10 = (size_t) VAR_9;
        FUNC_1(VAR_1, VAR_9 >= 0, 2, "invalid receive pattern");
        if (VAR_6 == 0 || VAR_10 > VAR_6)
            VAR_3 = FUNC_16(VAR_2, VAR_10-VAR_6, &VAR_5);
    }

    if (VAR_3 != VAR_0) {


        FUNC_5(&VAR_5);
        FUNC_10(VAR_1, VAR_2->io->error(VAR_2->io->ctx, VAR_3));
        FUNC_11(VAR_1, -2);
        FUNC_8(VAR_1);
        FUNC_12(VAR_1, -4);
    } else {
        FUNC_5(&VAR_5);
        FUNC_8(VAR_1);
        FUNC_8(VAR_1);
    }




    return FUNC_6(VAR_1) - VAR_4;
}
