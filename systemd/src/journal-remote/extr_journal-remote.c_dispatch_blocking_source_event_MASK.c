
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_event_source ;
struct TYPE_3__ {int fd; } ;
struct TYPE_4__ {TYPE_1__ importer; } ;
typedef TYPE_2__ RemoteSource ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(sd_event_source *VAR_2,
                                          void *VAR_3) {
        RemoteSource *VAR_4 = VAR_3;

        return FUNC_0(VAR_2, VAR_4->importer.fd, VAR_0, VAR_1);
}
