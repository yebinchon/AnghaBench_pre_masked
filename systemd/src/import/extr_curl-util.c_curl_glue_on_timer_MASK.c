
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int curl; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ CurlGlue ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_3, uint64_t VAR_4, void *VAR_5) {
        CurlGlue *VAR_6 = VAR_5;
        int VAR_7 = 0;

        FUNC_1(VAR_3);
        FUNC_1(VAR_6);

        if (FUNC_3(VAR_6->curl, VAR_1, 0, &VAR_7) != VAR_0)
                return FUNC_4(FUNC_0(VAR_2),
                                       "Failed to propagate timeout.");

        FUNC_2(VAR_6);
        return 0;
}
