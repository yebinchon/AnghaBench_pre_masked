
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_track ;
typedef int DnsQuery ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(sd_bus_track *VAR_1, void *VAR_2) {
        DnsQuery *VAR_3 = VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        FUNC_2("Client of active query vanished, aborting query.");
        FUNC_1(VAR_3, VAR_0);
        return 0;
}
