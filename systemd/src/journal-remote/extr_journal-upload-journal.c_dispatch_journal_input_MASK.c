
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_4__ {scalar_t__ uploading; } ;
typedef TYPE_1__ Uploader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_0,
                                  int VAR_1,
                                  uint32_t VAR_2,
                                  void *VAR_3) {
        Uploader *VAR_4 = VAR_3;

        FUNC_0(VAR_4);

        if (VAR_4->uploading)
                return 0;

        FUNC_2("Detected journal input, checking for new data.");
        return FUNC_1(VAR_4);
}
