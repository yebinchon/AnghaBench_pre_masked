
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint64_t ;
typedef scalar_t__ (* tuner_setup_t ) (int *,int *,int ) ;
typedef int dvb_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3 (vlc_object_t *VAR_2, dvb_device_t *VAR_3, tuner_setup_t VAR_4,
                 uint64_t VAR_5)
{
    if (VAR_4(VAR_2, VAR_3, VAR_5)
     || FUNC_0 (VAR_3, FUNC_2 (VAR_2, "dvb-inversion"))
     || FUNC_1 (VAR_3))
        return VAR_0;
    return VAR_1;
}
