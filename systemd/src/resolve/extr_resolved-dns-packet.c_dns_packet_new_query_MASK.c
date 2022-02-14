
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DnsProtocol ;
typedef int DnsPacket ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int ,size_t,int ) ;
 int FUNC_2 (int *,int,int) ;

int FUNC_3(DnsPacket **VAR_1, DnsProtocol VAR_2, size_t VAR_3, bool VAR_4) {
        DnsPacket *VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);

        VAR_6 = FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_0);
        if (VAR_6 < 0)
                return VAR_6;




        FUNC_2(VAR_5, VAR_4, 0);

        *VAR_1 = VAR_5;
        return 0;
}
