
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ssize_t ;
typedef int sd_event_source ;
struct TYPE_10__ {int fd; int name; } ;
struct TYPE_9__ {int active; int seal; int compress; TYPE_1__** sources; scalar_t__ sources_size; } ;
struct TYPE_8__ {TYPE_6__ importer; } ;
typedef TYPE_1__ RemoteSource ;
typedef TYPE_2__ RemoteServer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;

int FUNC_8(
                sd_event_source *VAR_3,
                int VAR_4,
                uint32_t VAR_5,
                RemoteServer *VAR_6) {

        RemoteSource *VAR_7;
        int VAR_8;





        FUNC_0(VAR_4 >= 0 && VAR_4 < (ssize_t) VAR_6->sources_size);
        VAR_7 = VAR_6->sources[VAR_4];
        FUNC_0(VAR_7->importer.fd == VAR_4);

        VAR_8 = FUNC_6(VAR_7, VAR_6->compress, VAR_6->seal);
        if (FUNC_2(&VAR_7->importer)) {
                size_t VAR_9;

                FUNC_3("EOF reached with source %s (fd=%d)",
                          VAR_7->importer.name, VAR_7->importer.fd);

                VAR_9 = FUNC_1(&VAR_7->importer);
                if (VAR_9 > 0)
                        FUNC_5("Premature EOF. %zu bytes lost.", VAR_9);
                FUNC_7(VAR_6, VAR_7->importer.fd);
                FUNC_3("%zu active sources remaining", VAR_6->active);
                return 0;
        } else if (VAR_8 == -VAR_0) {
                FUNC_5("Entry with too many fields, skipped");
                return 1;
        } else if (VAR_8 == -VAR_2) {
                FUNC_5("Entry too big, skipped");
                return 1;
        } else if (VAR_8 == -VAR_1) {
                return 0;
        } else if (VAR_8 < 0) {
                FUNC_4(VAR_8, "Closing connection: %m");
                FUNC_7(VAR_6, VAR_4);
                return 0;
        } else
                return 1;
}
