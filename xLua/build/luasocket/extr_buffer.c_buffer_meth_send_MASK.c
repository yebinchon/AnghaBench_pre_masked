
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int p_timeout ;
typedef TYPE_2__* p_buffer ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;
struct TYPE_6__ {TYPE_1__* io; int tm; } ;
struct TYPE_5__ {int ctx; int (* error ) (int ,int) ;} ;


 int VAR_0 ;
 char* FUNC_0 (int *,int,size_t*) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,char const*,long,size_t*) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;

int FUNC_11(lua_State *VAR_1, p_buffer VAR_2) {
    int VAR_3 = FUNC_2(VAR_1);
    int VAR_4 = VAR_0;
    size_t VAR_5 = 0, VAR_6 = 0;
    const char *VAR_7 = FUNC_0(VAR_1, 2, &VAR_5);
    long VAR_8 = (long) FUNC_1(VAR_1, 3, 1);
    long VAR_9 = (long) FUNC_1(VAR_1, 4, -1);



    if (VAR_8 < 0) VAR_8 = (long) (VAR_5+VAR_8+1);
    if (VAR_9 < 0) VAR_9 = (long) (VAR_5+VAR_9+1);
    if (VAR_8 < 1) VAR_8 = (long) 1;
    if (VAR_9 > (long) VAR_5) VAR_9 = (long) VAR_5;
    if (VAR_8 <= VAR_9) VAR_4 = FUNC_6(VAR_2, VAR_7+VAR_8-1, VAR_9-VAR_8+1, &VAR_6);

    if (VAR_4 != VAR_0) {
        FUNC_3(VAR_1);
        FUNC_5(VAR_1, VAR_2->io->error(VAR_2->io->ctx, VAR_4));
        FUNC_4(VAR_1, (lua_Number) (VAR_6+VAR_8-1));
    } else {
        FUNC_4(VAR_1, (lua_Number) (VAR_6+VAR_8-1));
        FUNC_3(VAR_1);
        FUNC_3(VAR_1);
    }




    return FUNC_2(VAR_1) - VAR_3;
}
