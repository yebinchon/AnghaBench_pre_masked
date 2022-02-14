
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* p_udp ;
typedef int * p_timeout ;
typedef int lua_State ;
typedef int buffer ;
struct TYPE_2__ {int sock; int tm; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*,size_t,size_t*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_3) {
    p_udp VAR_4 = (p_udp) FUNC_1(VAR_3, "udp{any}", 1);
    char VAR_5[VAR_2];
    size_t VAR_6, VAR_7 = (size_t) FUNC_2(VAR_3, 2, sizeof(VAR_5));
    int VAR_8;
    p_timeout VAR_9 = &VAR_4->tm;
    VAR_7 = FUNC_0(VAR_7, sizeof(VAR_5));
    FUNC_7(VAR_9);
    VAR_8 = FUNC_6(&VAR_4->sock, VAR_5, VAR_7, &VAR_6, VAR_9);

    if (VAR_8 == VAR_0)
        VAR_8 = VAR_1;
    if (VAR_8 != VAR_1) {
        FUNC_4(VAR_3);
        FUNC_5(VAR_3, FUNC_8(VAR_8));
        return 2;
    }
    FUNC_3(VAR_3, VAR_5, VAR_6);
    return 1;
}
