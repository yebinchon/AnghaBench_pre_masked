
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signalfd_siginfo {int ssi_int; } ;
typedef int sd_event_source ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(sd_event_source *VAR_2, const struct signalfd_siginfo *VAR_3, void *VAR_4) {
        VAR_0 = VAR_3->ssi_int;
        VAR_1++;
        return 0;
}
