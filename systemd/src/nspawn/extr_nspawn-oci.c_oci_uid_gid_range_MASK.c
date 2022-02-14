
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ uid_t ;
typedef int gid_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ,char*,...) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        uid_t *VAR_5 = VAR_4, VAR_6;
        uintmax_t VAR_7;

        FUNC_1(VAR_5);
        FUNC_2(sizeof(uid_t) == sizeof(gid_t));





        VAR_7 = FUNC_4(VAR_2);
        VAR_6 = (uid_t) VAR_7;
        if ((uintmax_t) VAR_6 != VAR_7)
                return FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "UID/GID out of range: %ji", VAR_7);
        if (VAR_6 == 0)
                return FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "UID/GID range can't be zero.");

        *VAR_5 = VAR_6;
        return 0;
}
