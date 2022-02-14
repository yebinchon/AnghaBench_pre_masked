
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_lldp_neighbor ;
typedef scalar_t__ sd_lldp_event ;
typedef int sd_lldp ;
typedef int Link ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(sd_lldp *VAR_1, sd_lldp_event VAR_2, sd_lldp_neighbor *VAR_3, void *VAR_4) {
        Link *VAR_5 = VAR_4;
        int VAR_6;

        FUNC_0(VAR_5);

        (void) FUNC_3(VAR_5);

        if (FUNC_1(VAR_5) && VAR_2 == VAR_0) {


                FUNC_4(VAR_5, "Received LLDP datagram from previously unknown neighbor, restarting 'fast' LLDP transmission.");

                VAR_6 = FUNC_2(VAR_5);
                if (VAR_6 < 0)
                        FUNC_5(VAR_5, VAR_6, "Failed to restart LLDP transmission: %m");
        }
}
