
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rw; int fstype; int node; } ;
typedef TYPE_1__ DissectedPartition ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,char const*,int ,int ,int *,char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(
                DissectedPartition *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4) {

        int VAR_5;
        FUNC_1(VAR_1);

        VAR_5 = FUNC_2(VAR_3);
        if (VAR_5 != 0)
                return VAR_5 < 0 ? VAR_5 : 0;

        return FUNC_0(
                        VAR_2,
                        VAR_1->node,
                        VAR_3,
                        VAR_1->fstype,
                        VAR_1->rw,
                        ((void*)0),
                        VAR_4,
                        VAR_0);
}
