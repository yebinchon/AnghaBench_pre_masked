
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ user; scalar_t__ group; } ;
typedef TYPE_1__ uid_t ;
typedef TYPE_1__ gid_t ;
typedef TYPE_1__ DynamicCreds ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,char**,TYPE_1__*,TYPE_1__*,int) ;

int FUNC_2(DynamicCreds *VAR_2, char **VAR_3, uid_t *VAR_4, gid_t *VAR_5) {
        uid_t VAR_6 = VAR_1;
        gid_t VAR_7 = VAR_0;
        int VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);
        FUNC_0(VAR_5);



        if (VAR_2->user) {
                VAR_8 = FUNC_1(VAR_2->user, VAR_3, &VAR_6, &VAR_7, 1);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        if (VAR_2->group && VAR_2->group != VAR_2->user) {
                VAR_8 = FUNC_1(VAR_2->group, VAR_3, ((void*)0), &VAR_7, 0);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        *VAR_4 = VAR_6;
        *VAR_5 = VAR_7;
        return 0;
}
