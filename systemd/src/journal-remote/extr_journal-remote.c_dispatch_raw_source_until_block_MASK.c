
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
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_3,
                                           void *VAR_4) {
        RemoteSource *VAR_5 = VAR_4;
        int VAR_6;


        FUNC_1(VAR_3);

        VAR_6 = FUNC_0(VAR_3, VAR_5->importer.fd, VAR_0, VAR_2);
        if (VAR_6 != 1)

                FUNC_2(VAR_3, VAR_1);

        FUNC_3(VAR_3);

        return VAR_6;
}
