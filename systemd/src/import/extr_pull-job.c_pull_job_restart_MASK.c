
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* url; scalar_t__ written_uncompressed; scalar_t__ written_compressed; scalar_t__ payload_allocated; scalar_t__ payload_size; int payload; int state; } ;
typedef TYPE_1__ PullJob ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(PullJob *VAR_1) {
        int VAR_2;
        char *VAR_3 = ((void*)0);

        VAR_2 = FUNC_1(VAR_1->url, "SHA256SUMS", &VAR_3);
        if (VAR_2 < 0)
                return VAR_2;

        FUNC_0(VAR_1->url);
        VAR_1->url = VAR_3;
        VAR_1->state = VAR_0;
        VAR_1->payload = FUNC_2(VAR_1->payload);
        VAR_1->payload_size = 0;
        VAR_1->payload_allocated = 0;
        VAR_1->written_compressed = 0;
        VAR_1->written_uncompressed = 0;

        VAR_2 = FUNC_3(VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        return 0;
}
