
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {int * meta; } ;
typedef TYPE_1__ Context ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (char const**,scalar_t__*,scalar_t__*,int *,int *,int ) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(const Context *VAR_3) {
        uid_t VAR_4;
        gid_t VAR_5;
        int VAR_6;

        VAR_6 = FUNC_4(VAR_3->meta[VAR_1], &VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        if (VAR_4 <= VAR_2) {
                const char *VAR_7 = "systemd-coredump";

                VAR_6 = FUNC_1(&VAR_7, &VAR_4, &VAR_5, ((void*)0), ((void*)0), 0);
                if (VAR_6 < 0) {
                        FUNC_2(VAR_6, "Cannot resolve %s user. Proceeding to dump core as root: %m", VAR_7);
                        VAR_4 = VAR_5 = 0;
                }
        } else {
                VAR_6 = FUNC_3(VAR_3->meta[VAR_0], &VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        return FUNC_0(VAR_4, VAR_5, 0);
}
