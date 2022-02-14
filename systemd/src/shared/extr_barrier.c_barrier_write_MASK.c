
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int ssize_t ;
typedef int buf ;
struct TYPE_6__ {scalar_t__ me; void* barriers; int pipe; } ;
typedef TYPE_1__ Barrier ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static bool FUNC_7(Barrier *VAR_6, uint64_t VAR_7) {
        ssize_t VAR_8;


        if (FUNC_2(VAR_6))
                return 0;

        FUNC_1(VAR_6->me >= 0);
        do {
                VAR_8 = FUNC_6(VAR_6->me, &VAR_7, sizeof(VAR_7));
        } while (VAR_8 < 0 && FUNC_0(VAR_5, VAR_3, VAR_4));

        if (VAR_8 != sizeof(VAR_7))
                goto error;


        if (VAR_7 >= (uint64_t)VAR_0) {
                if (FUNC_4(VAR_6))
                        VAR_6->barriers = VAR_2;
                else
                        VAR_6->barriers = VAR_1;
        } else if (!FUNC_3(VAR_6))
                VAR_6->barriers += VAR_7;

        return !FUNC_2(VAR_6);

error:





        FUNC_5(VAR_6->pipe);
        VAR_6->barriers = VAR_2;
        return 0;
}
