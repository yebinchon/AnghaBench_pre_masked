
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sockaddr_union {int sa; int un; } ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int,void const*,size_t,int ,int *,int) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, const char *VAR_3, const void *VAR_4, size_t VAR_5) {
        union sockaddr_union VAR_6 = {};
        int VAR_7;

        FUNC_0(VAR_2 >= 0);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_7 = FUNC_3(&VAR_6.un, VAR_3);
        if (VAR_7 < 0)
                return FUNC_1(VAR_7, "Specified socket path for AF_UNIX socket invalid, refusing: %s", VAR_3);

        if (FUNC_2(VAR_2, VAR_4, VAR_5, VAR_0, &VAR_6.sa, VAR_7) < 0)
                return FUNC_1(VAR_1, "Failed to send: %m");

        return 0;
}
