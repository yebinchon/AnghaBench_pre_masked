
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int curl; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ CurlGlue ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int,int,int*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_7, int VAR_8, uint32_t VAR_9, void *VAR_10) {
        CurlGlue *VAR_11 = VAR_10;
        int VAR_12, VAR_13 = 0;

        FUNC_2(VAR_7);
        FUNC_2(VAR_11);

        if (FUNC_0(VAR_9, VAR_5 | VAR_6))
                VAR_12 = VAR_2;
        else if (VAR_9 & VAR_5)
                VAR_12 = VAR_1;
        else if (VAR_9 & VAR_6)
                VAR_12 = VAR_3;
        else
                VAR_12 = 0;

        if (FUNC_4(VAR_11->curl, VAR_8, VAR_12, &VAR_13) != VAR_0)
                return FUNC_5(FUNC_1(VAR_4),
                                       "Failed to propagate IO event.");

        FUNC_3(VAR_11);
        return 0;
}
