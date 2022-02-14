
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ count; TYPE_1__* iovec; } ;
struct TYPE_12__ {TYPE_3__ iovw; int boot_id; int ts; int name; int fd; } ;
struct TYPE_10__ {TYPE_6__ importer; struct TYPE_10__* writer; } ;
typedef TYPE_1__ RemoteSource ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,TYPE_1__*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,int *,int *,int,int) ;

int FUNC_8(RemoteSource *VAR_1, bool VAR_2, bool VAR_3) {
        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->writer);

        VAR_4 = FUNC_3(&VAR_1->importer);
        if (VAR_4 <= 0)
                return VAR_4;


        FUNC_5("Received full event from source@%p fd:%d (%s)",
                  VAR_1, VAR_1->importer.fd, VAR_1->importer.name);

        if (VAR_1->importer.iovw.count == 0) {
                FUNC_6("Entry with no payload, skipping");
                goto freeing;
        }

        FUNC_0(VAR_1->importer.iovw.iovec);

        VAR_4 = FUNC_7(VAR_1->writer,
                         &VAR_1->importer.iovw,
                         &VAR_1->importer.ts,
                         &VAR_1->importer.boot_id,
                         VAR_2, VAR_3);
        if (VAR_4 == -VAR_0) {
                FUNC_4(VAR_4, "Entry is invalid, ignoring.");
                VAR_4 = 0;
        } else if (VAR_4 < 0)
                FUNC_4(VAR_4, "Failed to write entry of %zu bytes: %m",
                                FUNC_1(&VAR_1->importer.iovw));
        else
                VAR_4 = 1;

 freeing:
        FUNC_2(&VAR_1->importer);
        return VAR_4;
}
