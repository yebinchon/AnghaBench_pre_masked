
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int flags; int id; } ;
typedef int DnsPacket ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int,int ,int ,int,int,int,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
                DnsPacket *VAR_3,
                uint16_t VAR_4,
                int VAR_5,
                bool VAR_6,
                bool VAR_7,
                bool VAR_8,
                bool VAR_9) {

        int VAR_10;

        FUNC_2(VAR_3);

        if (VAR_7) {
                VAR_10 = FUNC_3(VAR_3, VAR_0, VAR_8, VAR_5, ((void*)0));
                if (VAR_10 == -VAR_2)
                        VAR_6 = 1;
                else if (VAR_10 < 0)
                        return VAR_10;

        } else {

                VAR_8 = 0;


                if (VAR_5 > 0xF)
                        VAR_5 = VAR_1;
        }


        if (!VAR_8)
                VAR_9 = 0;

        FUNC_0(VAR_3)->id = VAR_4;

        FUNC_0(VAR_3)->flags = FUNC_4(FUNC_1(
                                                              1 ,
                                                              0 ,
                                                              0 ,
                                                              VAR_6 ,
                                                              1 ,
                                                              1 ,
                                                              VAR_9 ,
                                                              0 ,
                                                              VAR_5));

        return 0;
}
