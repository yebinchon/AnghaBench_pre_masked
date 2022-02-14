
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint64_t ;
typedef int dvb_device_t ;


 int FUNC_0 (int *,int ,char,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int *,char*) ;
 char FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (vlc_object_t *VAR_0, dvb_device_t *VAR_1, uint64_t VAR_2)
{
    char VAR_3 = FUNC_2 (VAR_0);
    unsigned VAR_4 = FUNC_1 (VAR_0, "dvb-lnb-low");
    unsigned VAR_5 = FUNC_1 (VAR_0, "dvb-lnb-high");
    unsigned VAR_6 = FUNC_1 (VAR_0, "dvb-lnb-switch");

    FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
