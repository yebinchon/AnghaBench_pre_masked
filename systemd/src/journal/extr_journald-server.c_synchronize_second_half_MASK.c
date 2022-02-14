
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_event_source ;
typedef int Varlink ;
typedef int Server ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(sd_event_source *VAR_0, void *VAR_1) {
        Varlink *VAR_2 = VAR_1;
        Server *VAR_3;
        int VAR_4;

        FUNC_0(VAR_2);
        FUNC_1(VAR_3 = FUNC_5(VAR_2));




        FUNC_4(VAR_3);




        VAR_4 = FUNC_3(VAR_0, 0);
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to mark event source as non-floating: %m");

        return FUNC_6(VAR_2, ((void*)0));
}
