
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_lldp_neighbor ;
typedef int sd_lldp ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static int FUNC_5(sd_lldp *VAR_1, sd_lldp_neighbor *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 == -VAR_0)
                return 0;
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_1(VAR_1, VAR_2);
        if (VAR_3 < 0) {
                FUNC_4(VAR_3, "Failed to add datagram. Ignoring.");
                return 0;
        }

        FUNC_3("Successfully processed LLDP datagram.");
        return 0;
}
