
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int done; scalar_t__ allow_failure; int path; } ;
typedef int OperationMask ;
typedef TYPE_1__ Item ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(Item *VAR_7, OperationMask VAR_8) {
        OperationMask VAR_9;
        int VAR_10, VAR_11, VAR_12;

        FUNC_1(VAR_7);

        VAR_9 = VAR_8 & ~VAR_7->done;
        if (VAR_9 == 0)
                return 0;

        VAR_7->done |= VAR_8;

        VAR_10 = FUNC_2(VAR_7->path, VAR_6, VAR_0|VAR_1, ((void*)0), ((void*)0));
        if (VAR_10 == -VAR_2) {
                FUNC_6(VAR_10, "Skipping %s", VAR_7->path);
                return 0;
        }
        if (VAR_10 < 0)
                FUNC_5(VAR_10, "Failed to determine whether '%s' is below autofs, ignoring: %m", VAR_7->path);

        VAR_10 = FUNC_0(VAR_8, VAR_4) ? FUNC_4(VAR_7) : 0;

        if (VAR_7->allow_failure)
                VAR_10 = 0;

        VAR_11 = FUNC_0(VAR_8, VAR_5) ? FUNC_7(VAR_7) : 0;
        VAR_12 = FUNC_0(VAR_8, VAR_3) ? FUNC_3(VAR_7) : 0;

        return VAR_10 < 0 ? VAR_10 :
                VAR_11 < 0 ? VAR_11 :
                VAR_12;
}
