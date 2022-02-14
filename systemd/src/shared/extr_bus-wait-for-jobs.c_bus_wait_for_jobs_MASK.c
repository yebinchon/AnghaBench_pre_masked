
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* result; void* name; int bus; int jobs; } ;
typedef TYPE_1__ BusWaitForJobs ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,char const* const*) ;
 int FUNC_3 (int,char*,void*,void*) ;
 int FUNC_4 (int,char*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;

int FUNC_7(BusWaitForJobs *VAR_0, bool VAR_1, const char* const* VAR_2) {
        int VAR_3 = 0;

        FUNC_0(VAR_0);

        while (!FUNC_6(VAR_0->jobs)) {
                int VAR_4;

                VAR_4 = FUNC_1(VAR_0->bus);
                if (VAR_4 < 0)
                        return FUNC_4(VAR_4, "Failed to wait for response: %m");

                if (VAR_0->name && VAR_0->result) {
                        VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);


                        if (VAR_4 < 0 && VAR_3 == 0)
                                VAR_3 = VAR_4;

                        FUNC_3(VAR_4, "Got result %s/%m for job %s", VAR_0->result, VAR_0->name);
                }

                VAR_0->name = FUNC_5(VAR_0->name);
                VAR_0->result = FUNC_5(VAR_0->result);
        }

        return VAR_3;
}
