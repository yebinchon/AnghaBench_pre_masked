
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int fdname; int fd; int service; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ ServiceFDStore ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_1, int VAR_2, uint32_t VAR_3, void *VAR_4) {
        ServiceFDStore *VAR_5 = VAR_4;

        FUNC_1(VAR_1);
        FUNC_1(VAR_5);


        FUNC_2(FUNC_0(VAR_5->service),
                       "Received %s on stored fd %d (%s), closing.",
                       VAR_3 & VAR_0 ? "EPOLLERR" : "EPOLLHUP",
                       VAR_5->fd, FUNC_4(VAR_5->fdname));
        FUNC_3(VAR_5);
        return 0;
}
