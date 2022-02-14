
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int checksum; int payload; int old_etags; int etag; int url; scalar_t__ checksum_context; int compress; int disk_fd; int request_header; int curl; int glue; } ;
typedef TYPE_1__ PullJob ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

PullJob* FUNC_8(PullJob *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->glue, VAR_0->curl);
        FUNC_1(VAR_0->request_header);

        FUNC_6(VAR_0->disk_fd);

        FUNC_4(&VAR_0->compress);

        if (VAR_0->checksum_context)
                FUNC_3(VAR_0->checksum_context);

        FUNC_2(VAR_0->url);
        FUNC_2(VAR_0->etag);
        FUNC_7(VAR_0->old_etags);
        FUNC_2(VAR_0->payload);
        FUNC_2(VAR_0->checksum);

        return FUNC_5(VAR_0);
}
