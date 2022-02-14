
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int started; int stopping; int timestamp; int name; } ;
typedef TYPE_1__ User ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(User *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->started && !VAR_0->stopping)
                return 0;





        VAR_0->stopping = 0;

        if (!VAR_0->started)
                FUNC_3("Starting services for new user %s.", VAR_0->name);



        FUNC_5(VAR_0);


        FUNC_7(VAR_0);

        if (!VAR_0->started) {
                if (!FUNC_2(&VAR_0->timestamp))
                        FUNC_1(&VAR_0->timestamp);
                FUNC_6(VAR_0, 1);
                VAR_0->started = 1;
        }


        FUNC_4(VAR_0);

        return 0;
}
