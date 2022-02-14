
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int PortableState ;
typedef TYPE_1__ Image ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_5(
                sd_bus_message *VAR_0,
                void *VAR_1,
                sd_bus_error *VAR_2) {

        Image *VAR_3 = VAR_1;
        PortableState VAR_4;
        int VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_5 = FUNC_1(
                        FUNC_3(VAR_0),
                        VAR_3->path,
                        0,
                        &VAR_4,
                        VAR_2);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_4(VAR_0, "s", FUNC_2(VAR_4));
}
