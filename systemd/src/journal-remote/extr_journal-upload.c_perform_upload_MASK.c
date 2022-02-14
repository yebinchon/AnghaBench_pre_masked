
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_cursor; int last_cursor; int answer; int url; int easy; scalar_t__* error; int watchdog_timestamp; } ;
typedef TYPE_1__ Uploader ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,long*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,long,int ) ;
 int FUNC_7 (char*,int ,int,...) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(Uploader *VAR_4) {
        CURLcode VAR_5;
        long VAR_6;

        FUNC_1(VAR_4);

        VAR_4->watchdog_timestamp = FUNC_9(VAR_0);
        VAR_5 = FUNC_3(VAR_4->easy);
        if (VAR_5) {
                if (VAR_4->error[0])
                        FUNC_7("Upload to %s failed: %.*s",
                                  VAR_4->url, (int) sizeof(VAR_4->error), VAR_4->error);
                else
                        FUNC_7("Upload to %s failed: %s",
                                  VAR_4->url, FUNC_4(VAR_5));
                return -VAR_2;
        }

        VAR_5 = FUNC_2(VAR_4->easy, VAR_1, &VAR_6);
        if (VAR_5)
                return FUNC_8(FUNC_0(VAR_3),
                                       "Failed to retrieve response code: %s",
                                       FUNC_4(VAR_5));

        if (VAR_6 >= 300)
                return FUNC_8(FUNC_0(VAR_2),
                                       "Upload to %s failed with code %ld: %s",
                                       VAR_4->url, VAR_6, FUNC_10(VAR_4->answer));
        else if (VAR_6 < 200)
                return FUNC_8(FUNC_0(VAR_2),
                                       "Upload to %s finished with unexpected code %ld: %s",
                                       VAR_4->url, VAR_6, FUNC_10(VAR_4->answer));
        else
                FUNC_6("Upload finished successfully with code %ld: %s",
                          VAR_6, FUNC_10(VAR_4->answer));

        FUNC_5(VAR_4->last_cursor, VAR_4->current_cursor);

        return FUNC_11(VAR_4);
}
