
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_6__ {scalar_t__ timer; int event; } ;
typedef TYPE_1__ CurlGlue ;
typedef TYPE_1__ CURLM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int ,int,int ,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(CURLM *VAR_4, long VAR_5, void *VAR_6) {
        CurlGlue *VAR_7 = VAR_6;
        usec_t VAR_8;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        if (VAR_5 < 0) {
                if (VAR_7->timer) {
                        if (FUNC_5(VAR_7->timer, VAR_0) < 0)
                                return -1;
                }

                return 0;
        }

        VAR_8 = FUNC_2(FUNC_1()) + (usec_t) VAR_5 * VAR_2 + VAR_2 - 1;

        if (VAR_7->timer) {
                if (FUNC_6(VAR_7->timer, VAR_8) < 0)
                        return -1;

                if (FUNC_5(VAR_7->timer, VAR_1) < 0)
                        return -1;
        } else {
                if (FUNC_3(VAR_7->event, &VAR_7->timer, FUNC_1(), VAR_8, 0, VAR_3, VAR_7) < 0)
                        return -1;

                (void) FUNC_4(VAR_7->timer, "curl-timer");
        }

        return 0;
}
