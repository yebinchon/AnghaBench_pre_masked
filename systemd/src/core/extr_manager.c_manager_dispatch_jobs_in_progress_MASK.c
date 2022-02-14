
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef scalar_t__ uint64_t ;
typedef int sd_event_source ;
typedef int Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_3, usec_t VAR_4, void *VAR_5) {
        Manager *VAR_6 = VAR_5;
        int VAR_7;
        uint64_t VAR_8;

        FUNC_0(VAR_6);
        FUNC_0(VAR_3);

        FUNC_1(VAR_6);

        VAR_8 = FUNC_2(VAR_0) + VAR_1;
        VAR_7 = FUNC_4(VAR_3, VAR_8);
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_3(VAR_3, VAR_2);
}
