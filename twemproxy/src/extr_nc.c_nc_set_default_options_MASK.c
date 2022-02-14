
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {char* hostname; scalar_t__ pidfile; int * pid_filename; scalar_t__ pid; int mbuf_chunk_size; int stats_interval; int stats_addr; int stats_port; int conf_filename; int log_filename; int log_level; int * ctx; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct instance *VAR_9)
{
    int VAR_10;

    VAR_9->ctx = ((void*)0);

    VAR_9->log_level = VAR_1;
    VAR_9->log_filename = VAR_2;

    VAR_9->conf_filename = VAR_0;

    VAR_9->stats_port = VAR_7;
    VAR_9->stats_addr = VAR_5;
    VAR_9->stats_interval = VAR_6;

    VAR_10 = FUNC_1(VAR_9->hostname, VAR_3);
    if (VAR_10 < 0) {
        FUNC_0("gethostname failed, ignored: %s", FUNC_3(VAR_8));
        FUNC_2(VAR_9->hostname, VAR_3, "unknown");
    }
    VAR_9->hostname[VAR_3 - 1] = '\0';

    VAR_9->mbuf_chunk_size = VAR_4;

    VAR_9->pid = (pid_t)-1;
    VAR_9->pid_filename = ((void*)0);
    VAR_9->pidfile = 0;
}
