
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
typedef int curl_socket_t ;
struct TYPE_6__ {int ios; int curl; int event; } ;
typedef TYPE_1__ CurlGlue ;
typedef TYPE_1__ CURLM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int **,int ,int,int ,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(CURLM *VAR_10, curl_socket_t VAR_11, int VAR_12, void *VAR_13, void *VAR_14) {
        sd_event_source *VAR_15 = VAR_14;
        CurlGlue *VAR_16 = VAR_13;
        uint32_t VAR_17 = 0;
        int VAR_18;

        FUNC_1(VAR_10);
        FUNC_1(VAR_16);

        if (VAR_12 == VAR_4) {
                if (VAR_15) {
                        FUNC_8(VAR_15);

                        FUNC_5(VAR_16->ios, FUNC_0(VAR_11));
                }

                return 0;
        }

        VAR_18 = FUNC_3(&VAR_16->ios, &VAR_9);
        if (VAR_18 < 0) {
                FUNC_6();
                return -1;
        }

        if (VAR_12 == VAR_1)
                VAR_17 = VAR_5;
        else if (VAR_12 == VAR_3)
                VAR_17 = VAR_6;
        else if (VAR_12 == VAR_2)
                VAR_17 = VAR_5|VAR_6;

        if (VAR_15) {
                if (FUNC_11(VAR_15, VAR_17) < 0)
                        return -1;

                if (FUNC_10(VAR_15, VAR_7) < 0)
                        return -1;
        } else {
                if (FUNC_7(VAR_16->event, &VAR_15, VAR_11, VAR_17, VAR_8, VAR_16) < 0)
                        return -1;

                if (FUNC_2(VAR_16->curl, VAR_11, VAR_15) != VAR_0)
                        return -1;

                (void) FUNC_9(VAR_15, "curl-io");

                VAR_18 = FUNC_4(VAR_16->ios, FUNC_0(VAR_11), VAR_15);
                if (VAR_18 < 0) {
                        FUNC_6();
                        FUNC_12(VAR_15);
                        return -1;
                }
        }

        return 0;
}
